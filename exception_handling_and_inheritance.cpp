#include <iostream>
using namespace std;

class Base{};
class Derived : public Base {};

int main()
{
	try
	{
	throw Derived();
	}
	
	catch(Derived d)
	{
	cout<<"Derived object caught";		
	}

	catch(Base b)
	{
	cout<<"Base object caught";
	}

	return 0;
}
