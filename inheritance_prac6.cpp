#include <iostream>
using namespace std;

class Base
{
	int x;
	public:
   	Base() {cout<<"Base default constrictors\n";}
};

class Derived : public Base
{
	int y;
	public:
   	Derived() {cout<<"Derived default constrictors\n";}
	Derived(int i) {cout<<"Derived parameterized constrictors\n";}
};

int main()
{
	Base b;
	Derived d1;
	Derived d2(10);
	return 0;
}
