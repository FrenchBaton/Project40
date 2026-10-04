#include "CPU.h"

CPU::CPU()
{
	model = "_";
}

CPU::CPU(string m)
{
	model = m;
}

void CPU::Print()
{
	cout << "CPU Model: " << model << endl;
}
