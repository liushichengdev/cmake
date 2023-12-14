#ifndef XMLPraser__
#define XMLPraser__

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
