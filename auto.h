#pragma once

#include "sredstvo.h"
#include <iostream>

class hauto : public tr_sred
{
	char *mark;
public:
	hauto(void);
	void setmark(char *mark);
	void getmark();
	~hauto(void);
	void show() { std::cout << "auto-show" << std::endl; }
	void print() { std::cout << "Virtual Auto" << std::endl; }
};
