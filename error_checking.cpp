#include<fstream>
#include <iostream>
using namespace std;


int main()
{
	fstream myfile;
	myfile.open("file3.txt",ios::in);

	if (!myfile)
	{
	cout<<"The file cannot open"<<endl;
	}
	else
	cout<<"The file open sucessfully"<<endl;
}
