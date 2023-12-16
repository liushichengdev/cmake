
#ifndef Node__
#define Node__


#include <QString>
#pragma once

struct SubFunctionNode
{
	int id;
	QString name;
	QString dll;
};

struct FunctionNode
{
	int id;
	QString name;
	std::vector<SubFunctionNode> subFunctionVector;
};

#endif // !Node__

