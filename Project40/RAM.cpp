#include "RAM.h"

RAM::RAM()
{
	model = "_";
}

RAM::RAM(string m)
{
	model = m;
}

void RAM::Print()
{
	cout << "RAM Model: " << model << endl;
}