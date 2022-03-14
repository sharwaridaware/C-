#include <iostream>
using namespace std;

int main()
{
	int n1,n2;
	cout<<"Enter first numbers";
	cin>>n1;
	cout<<"Enter second numbers";
	cin>>n2;

try
{
	if(n2!=n1)
	{
	float div = (float)n1/n2;
	if(div<0)
	   
	throw 'e';
	cout<<"n1/n2="<<div;
	}

	else
	throw n2;
}
catch (int e)
{ 	
	cout<<"Exception: Division by zero";
}

catch (char st)
{ 	
	cout<<"Exception: Division is less than 1";
}

catch (...)
{ 	
	cout<<"Exception: Unknown";
}
return 0;
}

