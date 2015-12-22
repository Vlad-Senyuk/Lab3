#pragma once
#include "rs.h"

class telovek : public raz_s
{
	char *sex;
public:
	telovek(void);
	void setsex(char *sex);
	void getsex();
	~telovek(void);
};
