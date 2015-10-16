#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <QTextStream>
#include <QFile>
#include "trianglewindow.h"

class TriangleWindow;

class FileManager
{
public:
    FileManager();
    void setTriangle(TriangleWindow* tr);
    void save();

private:
    QFile* file;
    QTextStream *flux;
    TriangleWindow* tr;
};

#endif // FILEMANAGER_H
