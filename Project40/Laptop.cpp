#include "Laptop.h"

Laptop::Laptop()
{
	model = "_";
	price = 0.0;
	RAM r;
	SSD s;
	CPU c;
	ram = r;
	ssd = s;
	cpu = c;
	ptrm = nullptr;
	ptrw = nullptr;
}

Laptop::Laptop(string m, double p)
{
	model = m;
	price = p;
	RAM r;
	SSD s;
	CPU c;
	ram = r;
	ssd = s;
	cpu = c;
	ptrm = nullptr;
	ptrw = nullptr;
}

Laptop::Laptop(string m, double p, RAM r, SSD s, CPU c) :Laptop(m,p)
{
	ram = r;
	ssd = s;
	cpu = c;
	ptrm = nullptr;
	ptrw = nullptr;
}

Laptop::Laptop(string m, double p, RAM r, SSD s, CPU c, Mouse& mo, Web& w) : Laptop(m, p,r,s,c)
{
	ptrm = &mo;
	ptrw = &w;
}

void Laptop::Init(string m, double p, RAM r, SSD s, CPU c)
{
	model = m;
	price = p;

	ram = r;
	ssd = s;
	cpu = c;
}

void Laptop::SetMouse(Mouse& mo)
{
	ptrm = &mo;
}

void Laptop::SetWeb(Web& w)
{
	ptrw = &w;
}

void Laptop::Print()
{
	cout << "Laptop Model: " << model << endl;
	cout << "Laptop price: " << price << endl;

	ram.Print();
	ssd.Print();
	cpu.Print();

	if (ptrm != nullptr) (*ptrm).Print();
	if(ptrw != nullptr) (*ptrw).Print();
	cout << "\n";
}
