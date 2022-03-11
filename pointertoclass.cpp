#include <iostream>
using namespace std;

class base
{
	public:
	virtual void show()
	{
	cout<<"base\n";}
};

class derv1 : public base
{
	public:
	void show()
	{
	cout<<"derv1\n";}
};

class derv2 : public base
{
	public:
	void show()
	{
	cout<<"derv2\n";}
};


int main()
{
	derv1 dv1;
	derv2 dv2;
	base* ptr;
	ptr = &dv1;
	ptr->show();
	ptr = &dv2;
	ptr->show();
}
