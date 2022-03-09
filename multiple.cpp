#include<iostream>
using namespace std;

class liquid
{
	public:
	void display1()
	{
		cout<<"\nliquid class";
	}
};

class fuel
{
	public:
	void display2()
	{
		cout<<"\nfuel class";
	}
};

class petrol:public liquid,public fuel
{
	public:
	void display3()
	{
		cout<<"\npertol class";
	}
};

int main()
{
liquid i;
fuel  f;
petrol p;
i.display1();
f.display2();
p.display3();
p.display2();
p.display1();
}
