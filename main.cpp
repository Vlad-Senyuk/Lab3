#include <iostream>
#include "auto.h"
#include "sredstvo.h"
#include "dvigatel.h"
#include "rs.h"
#include "thelovek.h"
#include "transformer.h"
using namespace std;

int main()
{
	tr_sred *tr1 = new tr_sred();
	tr1->print();
	tr1->show();
	tr_sred *tr2 = new hauto();
	tr2->print();
	tr2->show();
	hauto *w;
	w = new hauto();
	w->print();
	w->show();
	/*tr_sred a;
	a.setname("Pikap");
	a.getname();

	hauto b;
	b.setname("Pikap");
	b.getname();
	b.setmark("Jeep");
	b.getmark();

	dvig c;
	c.setnum(666);
	c.getnum();

	raz_s d;
	d.setvid("Tshelovek");
	d.getvid();

	telovek e;
	e.setvid("Tshelovek");
	e.getvid();
	e.setsex("Man");
	e.getsex();

	transf f;
	f.setvid("Tshelovek");
	f.getvid();
	f.settype("Kiborg");
	f.gettype();*/

	return 0;
}
