#include<fstream>
#include <iostream>
using namespace std;


int main()
{
	ifstream input; string str;
	input.open("file3.txt");
	if(!input)
	cout<<"file can not open"<<endl;

else
	{
	while(getline(input, str))
		{
		cout<<str<<endl;
		}
	}
}
