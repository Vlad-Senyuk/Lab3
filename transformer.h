#pragma once
#include "rs.h"
#include "sredstvo.h"

class transf : public raz_s, public tr_sred
{
	char *type;
public:
	transf(void);
	void settype(char* type);
	void gettype();
	~transf(void);
};
