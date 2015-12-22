#include <iostream>
#include "dvigatel.h"
#include "sredstvo.h"
using namespace std;

dvig::dvig(void)
{
	cout << "Constructor dvigatel" << endl;
}

void dvig::setnum(int num)
{
	this->num = num;
}

void dvig::getnum()
{
	cout << "Dvigatel: " << this->num << endl;
}

dvig::~dvig(void)
{
	cout << "Destructor dvigatel" << endl;
}
