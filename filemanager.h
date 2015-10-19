#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <QTextStream>
#include <QFile>
#include <QVector>
#include "trianglewindow.h"

class TriangleWindow;

class FileManager
{
public:
    FileManager();
    void setTriangle(QVector<TriangleWindow*> tr);
    void save();

private:
    QFile* file;
    QTextStream *flux;
    QVector<TriangleWindow*> tr;
};

#endif // FILEMANAGER_H
