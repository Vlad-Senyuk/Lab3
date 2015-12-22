#include <iostream>
#include "sredstvo.h"
using namespace std;

tr_sred::tr_sred(void)
{
	cout << "Constructor transportnogo sredstva" << endl;
}

void tr_sred::setname(char *name)
{
	this->name = name;
}

void tr_sred::getname()
{
	cout << "Trasportnoe sredstvo: " << this->name << endl;
}

tr_sred::~tr_sred(void)
{
	cout << "Destructor transportnogo sredstva" << endl;
}

void tr_sred::print()
{
	cout << "Trasportnoe sredstvo: "<< endl;
}
