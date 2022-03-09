#include<iostream>
using namespace std;

class ABC
{
	public:
	void display()
	{
	cout<<"This is parent class";
	}
};

class XYZ : public ABC
{
	public:
	void display()
	{
	cout<<"This id child class";
	}
};
	

int main()
{
	XYZ x;
	x.display();
	return 0;
}

