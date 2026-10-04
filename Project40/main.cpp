#include<iostream>
using namespace std;
#include "Laptop.h"

int main() {
	RAM r("RAM_MOD");
	SSD s("SSD_MOD");
	CPU c("CPU_MOD");

	Web w("web_MOD");
	Web w2("web_MOD2");
	Mouse m("Mouse_MOD");

	Laptop lp;
	lp.Print();

	lp.Init("LAP_MOD", 1000.53,r,s,c);
	lp.Print();

	lp.SetMouse(m);
	lp.Print();

	lp.SetWeb(w);
	lp.Print();

	lp.SetWeb(w2);
	lp.Print();

	return 0;
}