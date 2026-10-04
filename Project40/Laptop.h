#pragma once
#include<iostream>
using namespace std;
#include "CPU.h"
#include "SSD.h"
#include "RAM.h"
#include "Mouse.h"
#include "Web.h"

class Laptop
{
	string model;
	double price;
	RAM ram;
	SSD ssd;
	CPU cpu;
	Mouse* ptrm;
	Web* ptrw;
public:
	Laptop();
	Laptop(string m, double p);
	Laptop(string m, double p, RAM r, SSD s, CPU c);
	Laptop(string m, double p, RAM r, SSD s, CPU c, Mouse& mo, Web& w);
	
	void Init(string m, double p, RAM r, SSD s, CPU c);
	void SetMouse(Mouse& mo);
	void SetWeb(Web& w);
	
	void Print();
};

