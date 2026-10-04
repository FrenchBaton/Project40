#include "Web.h"

Web::Web()
{
	model = "_";
}

Web::Web(string m)
{
	model = m;
}

void Web::Print()
{
	cout << "Web Model: " << model << endl;
}
