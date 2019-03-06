#include "StringUtils.h"

#include <numeric>
#include <algorithm>
#include <iostream>
#include <stack>


std::string StringUtils::getDirectory (const std::string& path)
{
    size_t found = path.find_last_of("/\\");
    return(path.substr(0, found));
}

std::string StringUtils::getFileName (const std::string& path)
{
    size_t found = path.find_last_of("/\\");
    return(path.substr(found+1, path.size()));
}

VectorOfString StringUtils::split(const std::string& str,
                                  const char& delimiter)
{
    VectorOfString result;
    size_t start = 0;
    size_t end = str.find_first_of(delimiter);
    while (end <= std::string::npos)
    {
        result.emplace_back(str.substr(start, end - start));
        if (end == std::string::npos) break;
        start = end + 1;
        end = str.find_first_of(delimiter, start);
    }
    return result;
}

std::string StringUtils::trim(const std::string& str)
{
    std::string result(str);
    std::string::size_type pos = result.find_last_not_of(' ');
    if (pos != std::string::npos)
    {
        result.erase(pos + 1);
        pos = result.find_first_not_of(' ');

        if (pos != std::string::npos)
        {
            result.erase(0, pos);
        }
    }
    else
    {
        result.erase(result.begin(), result.end());
    }
    return result;
}

std::string StringUtils::join(const VectorOfString& strVector, const std::string& delimiter)
{
    std::string result;
    if (delimiter.size() > 0 &&
        strVector.size() > 0)
    {
        result.reserve(strVector.size() + (strVector.size() * delimiter.size()) - 1);
        struct adder
        {
            std::string joinner;
            adder(const std::string& s) : joinner(s)
            {
            }
            std::string operator()(std::string &l, const std::string &r)
            {
                l += r;
                l += joinner;
                return l;
            }
        } adr(delimiter);
        result = std::accumulate(strVector.begin(), strVector.end() - 1, result, adr);
        result += strVector.back();
        return result;
    }
    return result;
}

std::string StringUtils::read(std::ifstream &in)
{
    if (in.is_open())
    {
        in.seekg(0, std::ios::end);
        size_t size = in.tellg();
        std::string str(size, '\0');
        in.seekg(0, std::ios::beg);
        str.assign(std::istreambuf_iterator<char>(in),
        std::istreambuf_iterator<char>());
        return str;
    }
    return "";
}

std::string StringUtils::changeCharForString(const std::string &str,
                                             char charToExchange,
                                             const std::string &substitute)
{
    std::string copy = str;
    for (size_t pos = copy.find(charToExchange);
         pos != std::string::npos;
         pos = copy.find(' ', pos))
    {
        copy.replace(pos, 1, substitute);
    }
    return copy;
}

std::string StringUtils::filterStringByScope(const std::string &str, char cOpen, char cClose)
{
    std::string result;
    unsigned countChar = 0;
    std::stack<char> stackChar;
    while (str[countChar] != cOpen)
    {
        ++countChar;
        if (countChar >= str.length())
        {
            return result;
        }
    }
    result = str[countChar];
    ++countChar;
    stackChar.push(cOpen);
    while(stackChar.size() > 0 && countChar < str.length())
    {
        result+= str[countChar];
        if (str[countChar] == cOpen) stackChar.push(cOpen);
        else if (str[countChar] == cClose) stackChar.pop();
        ++countChar;
    }
    return result;
}

void StringUtils::format_impl(std::stringstream& ss, const char* format)
{
    while (*format)
    {
        if (*format == '%'
                && *++format != '%') // %% == % (not a format directive)
        {
            throw std::invalid_argument("not enough arguments !\n");
        }
        ss << *format++;
    }
}

unsigned char StringUtils::SimplifyDoubleCharForSorting( unsigned char c1, unsigned char c2, bool changeToLowerCase )
{
    // C3 80 C3 81 C3 82 C3 83 C3 84 C3 85 C3 A0 C3 A1 C3 A2 C3 A3 C3 A4 C3 A5 C2 AA // two-byte codes for "a"
    // C3 88 C3 89 C3 8A C3 8B C3 A8 C3 A9 C3 AA C3 AB // two-byte codes for "e"
    // C3 8C C3 8D C3 8E C3 8F C3 AC C3 AD C3 AE C3 AF // two-byte codes for "i"
    // C3 92 C3 93 C3 94 C3 95 C3 96 C3 B2 C3 B3 C3 B4 C3 B5 C3 B6 C2 BA // two-byte codes for "o"
    // C3 99 C3 9A C3 9B C3 9C C3 B9 C3 BA C3 BB C3 BC // two-byte codes for "u"
    // C2 A9 C3 87 C3 A7 // two-byte codes for "c"
    // C3 91 C3 B1 // two-byte codes for "n"
    // C2 AE // two-byte codes for "r"
    // C3 9F // two-byte codes for "s"
    // C5 BD C5 BE // two-byte codes for "z"
    // C5 B8 C3 9D C3 BD C3 BF // two-byte codes for "y"

    if ( c1 == 0xC2 )
    {
        if ( c2 == 0xAA ) { return 'a'; }
        if ( c2 == 0xBA ) { return 'o'; }
        if ( c2 == 0xA9 ) { return 'c'; }
        if ( c2 == 0xAE ) { return 'r'; }
    }

    if ( c1 == 0xC3 )
    {
        if ( c2 >= 0x80 && c2 <= 0x85 ) { return changeToLowerCase ? 'a' : 'A'; }
        if ( c2 >= 0xA0 && c2 <= 0xA5 ) { return 'a'; }
        if ( c2 >= 0x88 && c2 <= 0x8B ) { return changeToLowerCase ? 'e' : 'E'; }
        if ( c2 >= 0xA8 && c2 <= 0xAB ) { return 'e'; }
        if ( c2 >= 0x8C && c2 <= 0x8F ) { return changeToLowerCase ? 'i' : 'I'; }
        if ( c2 >= 0xAC && c2 <= 0xAF ) { return 'i'; }
        if ( c2 >= 0x92 && c2 <= 0x96 ) { return changeToLowerCase ? 'o' : 'O'; }
        if ( c2 >= 0xB2 && c2 <= 0xB6 ) { return 'o'; }
        if ( c2 >= 0x99 && c2 <= 0x9C ) { return changeToLowerCase ? 'u' : 'U'; }
        if ( c2 >= 0xB9 && c2 <= 0xBC ) { return 'u'; }
        if ( c2 == 0x87 ) { return changeToLowerCase ? 'c' : 'C'; }
        if ( c2 == 0xA7 ) { return 'c'; }
        if ( c2 == 0x91 ) { return changeToLowerCase ? 'n' : 'N'; }
        if ( c2 == 0xB1 ) { return 'n'; }
        if ( c2 == 0x9F ) { return 's'; }
        if ( c2 == 0x9D ) { return changeToLowerCase ? 'y' : 'Y'; }
        if ( c2 == 0xBD || c2 == 0xBF ) { return 'y'; }
    }

    if ( c1 == 0xC5 )
    {
        if ( c2 == 0xBD ) { return changeToLowerCase ? 'z' : 'Z'; }
        if ( c2 == 0xBE ) { return 'z'; }
        if ( c2 == 0xB8 ) { return changeToLowerCase ? 'y' : 'Y'; }
    }

    return c1;
}

unsigned char StringUtils::SimplifySingleCharForSorting( unsigned char c, bool changeToLowerCase )
{
    // C0 C1 C2 C3 C4 C5 E0 E1 E2 E3 E4 E5 AA // one-byte codes for "a"
    // C8 C9 CA CB E8 E9 EA EB // one-byte codes for "e"
    // CC CD CE CF EC ED EE EF // one-byte codes for "i"
    // D2 D3 D4 D5 D6 F2 F3 F4 F5 F6 BA // one-byte codes for "o"
    // D9 DA DB DC F9 FA FB FC // one-byte codes for "u"
    // A9 C7 E7 // one-byte codes for "c"
    // D1 F1 // one-byte codes for "n"
    // AE // one-byte codes for "r"
    // DF // one-byte codes for "s"
    // 8E 9E // one-byte codes for "z"
    // 9F DD FD FF // one-byte codes for "y"

    if ( ( c >= 0xC0 && c <= 0xC5 ) || ( c >= 0xE1 && c <= 0xE5 ) || c == 0xAA )
    {
        return ( ( c >= 0xC0 && c <= 0xC5 ) && !changeToLowerCase ) ? 'A' : 'a';
    }

    if ( ( c >= 0xC8 && c <= 0xCB ) || ( c >= 0xE8 && c <= 0xEB ) )
    {
        return ( c > 0xCB || changeToLowerCase ) ? 'e' : 'E';
    }

    if ( ( c >= 0xCC && c <= 0xCF ) || ( c >= 0xEC && c <= 0xEF ) )
    {
        return ( c > 0xCF || changeToLowerCase ) ? 'i' : 'I';
    }

    if ( ( c >= 0xD2 && c <= 0xD6 ) || ( c >= 0xF2 && c <= 0xF6 ) || c == 0xBA )
    {
        return ( ( c >= 0xD2 && c <= 0xD6 ) && !changeToLowerCase ) ? 'O' : 'o';
    }

    if ( ( c >= 0xD9 && c <= 0xDC ) || ( c >= 0xF9 && c <= 0xFC ) )
    {
        return ( c > 0xDC || changeToLowerCase ) ? 'u' : 'U';
    }

    if ( c == 0xA9 || c == 0xC7 || c == 0xE7 )
    {
        return ( c == 0xC7 && !changeToLowerCase ) ? 'C' : 'c';
    }

    if ( c == 0xD1 || c == 0xF1 )
    {
        return ( c == 0xD1 && !changeToLowerCase ) ? 'N' : 'n';
    }

    if ( c == 0xAE )
    {
        return 'r';
    }

    if ( c == 0xDF )
    {
        return 's';
    }

    if ( c == 0x8E || c == 0x9E )
    {
        return ( c == 0x8E && !changeToLowerCase ) ? 'Z' : 'z';
    }

    if ( c == 0x9F || c == 0xDD || c == 0xFD || c == 0xFF )
    {
        return ( ( c == 0x9F || c == 0xDD ) && !changeToLowerCase ) ? 'Y' : 'y';
    }

    return c;
}

std::string StringUtils::SimplifyStringForSorting(const std::string &str, bool changeToLowerCase )
{
    std::string s = str;
    // C0 C1 C2 C3 C4 C5 E0 E1 E2 E3 E4 E5 AA // one-byte codes for "a"
    // C3 80 C3 81 C3 82 C3 83 C3 84 C3 85 C3 A0 C3 A1 C3 A2 C3 A3 C3 A4 C3 A5 C2 AA // two-byte codes for "a"

    // C8 C9 CA CB E8 E9 EA EB // one-byte codes for "e"
    // C3 88 C3 89 C3 8A C3 8B C3 A8 C3 A9 C3 AA C3 AB // two-byte codes for "e"

    // CC CD CE CF EC ED EE EF // one-byte codes for "i"
    // C3 8C C3 8D C3 8E C3 8F C3 AC C3 AD C3 AE C3 AF // two-byte codes for "i"

    // D2 D3 D4 D5 D6 F2 F3 F4 F5 F6 BA // one-byte codes for "o"
    // C3 92 C3 93 C3 94 C3 95 C3 96 C3 B2 C3 B3 C3 B4 C3 B5 C3 B6 C2 BA // two-byte codes for "o"

    // D9 DA DB DC F9 FA FB FC // one-byte codes for "u"
    // C3 99 C3 9A C3 9B C3 9C C3 B9 C3 BA C3 BB C3 BC // two-byte codes for "u"

    // A9 C7 E7 // one-byte codes for "c"
    // C2 A9 C3 87 C3 A7 // two-byte codes for "c"

    // D1 F1 // one-byte codes for "n"
    // C3 91 C3 B1 // two-byte codes for "n"

    // AE // one-byte codes for "r"
    // C2 AE // two-byte codes for "r"

    // DF // one-byte codes for "s"
    // C3 9F // two-byte codes for "s"

    // 8E 9E // one-byte codes for "z"
    // C5 BD C5 BE // two-byte codes for "z"

    // 9F DD FD FF // one-byte codes for "y"
    // C5 B8 C3 9D C3 BD C3 BF // two-byte codes for "y"

    int n = s.size();
    int pos = 0;
    for ( int i = 0 ; i < n ; i++, pos++ )
    {
        unsigned char c = (unsigned char)s[i];
        if ( c >= 0x80 )
        {
            if ( i < ( n - 1 ) && (unsigned char)s[i + 1] >= 0x80 )
            {
                unsigned char c2 = SimplifyDoubleCharForSorting( c, (unsigned char)s[i + 1], changeToLowerCase );
                if ( c2 < 0x80 )
                {
                    s[pos] = c2;
                    i++;
                }
                else
                {
                    // s->at( pos ) = SimplifySingleCharForSorting( c, changeToLowerCase );
                    // if it's a double code we don't recognize, skip both characters;
                    // this does mean that we lose the chance to handle back-to-back extended ascii characters
                    // but we'll assume that is less likely than a unicode "combining character" or other
                    // unrecognized unicode character for data
                    i++;
                }
            }
            else
            {
                unsigned char c2 = SimplifySingleCharForSorting( c, changeToLowerCase );
                if ( c2 < 0x80 )
                {
                    s[pos];
                }
                else
                {
                    // skip unrecognized single-byte codes
                    pos--;
                }
            }
        }
        else
        {
            if ( changeToLowerCase && c >= 'A' && c <= 'Z' )
            {
                s[pos] = c + ( 'a' - 'A' );
            }
            else
            {
                s[pos] = c;
            }
        }
    }
    if ( pos < n )
    {
        s.resize( pos );
    }
    return s;
}
