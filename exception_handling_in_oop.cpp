#include <iostream>
using namespace std;

class test
{
	int x;
	public:
	void read()
	{
	cout<<"Enter a Number=";
	cin>>x;
	}
	
	class EVEN{};
	class ODD{};
	void check()
	{
	if(x%2==0)
	throw EVEN();
	else
	throw ODD();
	}
};

int  main()
{
	test t;
	t.read();
	try
	{
	t.check();
	}
	catch(test::EVEN)
	{	
		cout<<"Number is Even";
	}
	catch(test::ODD)
	{	
		cout<<"Number is ODD";
	}
	return 0;
}
