#include <iostream>
using namespace std;

int main()
{
	int n1,n2,result;
	cout<<"Enter two numbers";
	cin>>n1>>n2;

try
{
	if(n2==0)
	throw n2;
	else
	{
	result = n1/n2;
	cout<<"\nThe result is:"<<result;
	}
}
catch(int x)
	{
	cout<<"\n Can't divide by:"<<x;
	}
	cout<<"\n End of program.";
}
