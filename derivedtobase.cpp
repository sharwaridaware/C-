#include <iostream>
using namespace std;

class base
{
	public:
	void showbase()
	{
	cout<<"base\n";}
};

class derv1 : public base
{
	public:
	void showderived()
	{
	cout<<"derv1\n";}
};

int main()
{
	derv1 dv1;
	base* ptr;
	ptr = &dv1;
	ptr->showbase();
	// ptr->showderived();
	((derv1*)ptr)->showderived();
}
