#include "SSD.h"

SSD::SSD()
{
	model = "_";
}

SSD::SSD(string m)
{
	model = m;
}

void SSD::Print()
{
	cout << "SSD Model: " << model << endl;
}