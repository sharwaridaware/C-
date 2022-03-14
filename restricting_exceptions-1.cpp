#include <iostream>
using namespace std;

int a;
void Demo() throw(int,double)
{
	cin>>a;
	if(a==1)
	throw 1;
	else if(a==2)
	throw'2';
	else if(a==3)
	throw 2;
}

int main()
{
	try
	{
		Demo();
	}
	catch(int n)
	{
		cout<<"\nException cought\nNumber is:"<<a;
	}
	cout<<"\nEnd of program\n";
}
