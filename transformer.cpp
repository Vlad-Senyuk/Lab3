#include "rs.h"
#include "transformer.h"
#include <iostream>
using namespace std;

transf::transf(void)
{
	cout << "Constructor transformer" << endl;
}

void transf::settype(char *type)
{
	this->type = type;
}

void transf::gettype()
{
	cout << "Transformer: " << this->type << endl;
}

transf::~transf(void)
{
	cout << "Destructor transformer" << endl;
}
