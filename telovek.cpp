#include "rs.h"
#include"thelovek.h"
#include <iostream>
using namespace std;

telovek::telovek(void)
{
	cout << "Constructor tschelovek" << endl;
}

void telovek::setsex(char *sex)
{
	this->sex = sex;
}

void telovek::getsex()
{
	cout << "Sex: " << this->sex << endl;
}

telovek::~telovek(void)
{
	cout << "Destructor tschelovek" << endl;
}
