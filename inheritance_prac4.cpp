#include <iostream>
using namespace std;

class ABC
{
	public:
	void setprotmemb(int i)
	{
	m_protmemb = i;
	}

	void display()
	{
	cout<<m_protmemb<<endl;
	}

	protected:
	int m_protmemb;
	void protfunc()
	{
	cout<<"\naccess allowed\n"<<endl;
	}
};

class XYZ : public ABC
{
public:
void useprotfunc() {protfunc();}
};

int main()
{
	ABC a; XYZ x;
	//a.m_protmemb(0);
	a.display();
	//a.protfunc();
	x.setprotmemb(5);
	x.display();
	x.useprotfunc();
	return 0;
}
