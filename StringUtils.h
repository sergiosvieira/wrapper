#ifndef __STRING_UTILS__
#define __STRING_UTILS__

#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include <type_traits>
#include <exception>

using VectorOfString = std::vector<std::string>;

/*!
 * \brief The StringUtils class
 */
class StringUtils
{
public:


    /*!
     * \brief getDirectory: returns just the directory of a url
     * \param path
     * \return
     */
    static std::string getDirectory (const std::string& path);

    /*!
     * \brief getFileName: returns just the file name of a url
     * \param path
     * \return
     */
    static std::string getFileName (const std::string& path);


    /*!
     * \brief It splits a string in a vector of string separated by specified delimiter
     * \param str
     * \param delimiter
     * \return VectorOfString
     */
    static VectorOfString split(const std::string& str, const char& delimiter);
    /*!
     * \brief It removes space left and right of a passed string
     * \param str
     * \return
     */
    static std::string trim(const std::string& str);
    /*!
     * \brief It joins all values of a vector in a unique string separated by specified delimiter
     * \param strVector
     * \param delimiter
     * \return
     */
    static std::string join(const VectorOfString& strVector, const std::string& delimiter);
    /*!
     * \brief load input file contents to string
     * \param in
     * \return
     */
    static std::string read(std::ifstream& in);
    /*!
     *
     */
    template <typename... Args>
    static std::string format(const char* fmt, Args... args)
    {
        std::stringstream ss;
        format_impl(ss, fmt, args...);
        return ss.str();
    }

    /*!
     * \brief Replaces a given string character with a string.
     * \param str String to be changed.
     * \param chartoExchange Character to be changed.
     * \param substitute - Substitute string.
     * \return the result string.
     */
    static std::string changeCharForString(const std::string &str,
                                            char charToExchange,
                                            const std::string &substitute);
    /*!
     * \brief Filter a string based on a scope..
     * \param str String to be changed.
     * \param cOpen character that opens the scope.
     * \param cClose character that closes the scope.
     * \return the result string.
     */
    static std::string filterStringByScope(const std::string &str, char cOpen, char cClose);

    /*!
     * \brief SimplifyStringForSorting
     * \param str
     * \param changeToLowerCase
     * \return
     */
    static std::string SimplifyStringForSorting(const std::string &str, bool changeToLowerCase);
    /*!
     * \brief SimplifySingleCharForSorting
     * \param c
     * \param changeToLowerCase
     * \return
     */
    static unsigned char SimplifySingleCharForSorting(unsigned char c, bool changeToLowerCase);
    /*!
     * \brief SimplifyDoubleCharForSorting
     * \param c1
     * \param c2
     * \param changeToLowerCase
     * \return
     */
    static unsigned char SimplifyDoubleCharForSorting(unsigned char c1, unsigned char c2, bool changeToLowerCase);
protected:
    /*!
     * \brief format_impl
     * \param ss
     * \param format
     */
    static void format_impl(std::stringstream& ss, const char* format);
    /*!
    */
    template <typename Arg, typename... Args>
    static void format_impl
    (
        std::stringstream& ss,
        const char* format,
        Arg arg,
        Args... args
    )
    {
        while (*format)
        {
            if (*format == '%'
                    && *++format != '%')
            {
                auto currentFormatQualifier = *format;
                switch(currentFormatQualifier)
                {
                    case 'd' : if (!std::is_integral<Arg>()) throw std::invalid_argument("%d introduces integral argument");
                    // etc.
                }
                // it's true you'd have to handle many more format qualifiers, but on a safer basis
                ss << arg; // arg type is deduced
                return format_impl(ss, ++format, args...); // one arg less
            }
            ss << *format++;
        } // the format string is exhausted and we still have args : throw
        throw std::invalid_argument("Too many arguments\n");
    }
};

#endif /* __STRING_UTILS__ */
