#include "Mouse.h"

Mouse::Mouse()
{
	model = "_";
}

Mouse::Mouse(string m)
{
	model = m;
}

void Mouse::Print()
{
	cout << "Mouse Model: " << model << endl;
}
