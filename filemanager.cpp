#include "filemanager.h"

FileManager *FileManager::file_instance = new FileManager();

FileManager::FileManager()
{
    this->file = new QFile("save.txt");
    file->open(QIODevice::ReadWrite);

}
void FileManager::setTriangle(QVector<TriangleWindow *> tr)
{
    this->tr = tr;
}

FileManager *FileManager::Instance()
{
    return file_instance;
}

void FileManager::save()
{
    QTextStream temp(this->file);
    for (int i = 0; i < tr.size(); ++i) {
       temp <<tr.at(i)->toSave()<< "|";
    }
    temp.flush();
}

void FileManager::addWindow(TriangleWindow *tr)
{
    this->tr.push_back(tr);
}
