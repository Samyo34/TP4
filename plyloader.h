#ifndef PLYLOADER_H
#define PLYLOADER_H

#include <QVector>
#include <QTextStream>
#include <QString>
#include <QFile>
#include <QDebug>
#include "trianglewindow.h"


class PlyLoader
{
public:
    PlyLoader(QString fileName);
    void load();
    void draw();

private:
    float x, y, z, ori, size;
    QFile *file;
    QVector<point> vertices;
    QVector<QVector<int>> faces;

signals:

public slots:
};

#endif // PLYLOADER_H
