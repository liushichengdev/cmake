#ifndef XMLPraser__
#define XMLPraser__

#include <QString>
#include <vector>
#include <QFile>
#include <QDomDocument>
#include "Node.h"

#pragma once

class XMLPraser
{
public:

    _declspec(dllexport) void LoadXmlConfigFile();

    _declspec(dllexport) void BuildFunctionNodeVector();

private:

    QString fileStr;
    QFile* xmlConfigFile;
    QDomDocument* dom;

    std::vector<FunctionNode> functionNodes;
};
#endif // !XMLPraser__
