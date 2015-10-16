#include "filemanager.h"

FileManager::FileManager()
{
    this->file = new QFile("save.txt");
    QTextStream temp(file);
    flux = &temp;
    flux->setCodec("UTF-8");
}

void FileManager::setTriangle(TriangleWindow *tr)
{
    this->tr = tr;
}

void FileManager::save()
{
    //TODO : faire appelle au toSave de tr
}
