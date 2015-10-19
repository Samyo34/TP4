#include "filemanager.h"

FileManager::FileManager()
{
    this->file = new QFile("save.txt");
    QTextStream temp(file);
    flux = &temp;
    flux->setCodec("UTF-8");
}

void FileManager::setTriangle(QVector<TriangleWindow *> tr)
{
    this->tr = tr;
}

void FileManager::save()
{
    for (int i = 0; i < tr.size(); ++i) {
       flux << tr.at(i)->toSave()<< "|";
    }
    //TODO : faire appelle au toSave de tr
}
