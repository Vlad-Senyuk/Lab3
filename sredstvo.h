#pragma once
#include "dvigatel.h"
#include <iostream>

class tr_sred
{
	char *name;
	//dvig *q;
public:
	tr_sred(void);
	void setname(char *name);
	void getname();
	~tr_sred(void);
	virtual void print();
	void show() { std::cout << "show" <<std:: endl; }

};
