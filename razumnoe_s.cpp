#include "rs.h"
#include <iostream>
using namespace std;

raz_s::raz_s(void)
{
	cout << "Constructor razumnoe sustchestvo" << endl;
}

void raz_s::setvid(char *vid)
{
	this->vid = vid;
}

void raz_s::getvid()
{
	cout << "Vid: " << this->vid << endl;
}

raz_s::~raz_s(void)
{
	cout << "Destructor razumnoe sustchestvo" << endl;
}
