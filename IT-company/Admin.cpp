#include "Admin.h"

Admin::Admin(string name, int pass):name_admin(name),pass(pass)
{
}

Admin::~Admin()
{
}

void Admin::setpass(int pass)
{
	this->pass = pass;
}

int Admin::getpass()
{
	return pass;
}
