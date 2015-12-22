#include <iostream>
#include "sredstvo.h"
#include "auto.h"
using namespace std;

hauto::hauto(void)
{
	cout << "Constructor auto" << endl;
}

void hauto::setmark(char *mark)
{
	this->mark = mark;
}

void hauto::getmark()
{
	cout << "Auto: " << this->mark << endl;
}

hauto::~hauto(void)
{
	cout << "Destructor auto" << endl;
}
