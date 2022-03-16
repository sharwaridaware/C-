#include<fstream>
#include <iostream>
using namespace std;


int main()
{
	ifstream input; string str;
	input.open("file3.txt");
	if(!input)
		cout<<"file didnt open\n";
	else
	{
		while(input>>str)
		{
			cout<<str<<" ";
		}
	}
	cout<<endl;
}
