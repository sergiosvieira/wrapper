#ifndef GENERAL_H
#define GENERAL_H

#include <iostream>

enum Type {SUBITEM};

enum ActionType {DEFAULT, CHECK, RADIO};

enum FileOpen {FileOpen, FileOpenCancel};

struct FileOpenStruct
{
    enum FileOpen fileOpen;
    std::string fullUrl;
    std::string fileName;
    std::string dirName;
};

enum FileSave {FileSave, FileSaveCancel};

struct FileSaveStruct
{
    enum FileSave fileSave;
    std::string fullUrl;
    std::string fileName;
    std::string dirName;
};

enum DirChoose {DirChoose, DirChooseCalcel};

struct DirChooseStruct
{
    enum DirChoose dirChoose;
    std::string url;
};

struct Filter
{
    std::string name;
    std::string extension;
};

#endif // GENERAL_H
