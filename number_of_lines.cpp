#include<fstream>
#include <iostream>
using namespace std;


int main()
{
	fstream fin;
	fin.open("file3.txt");
	int count = 0;
	string str;
	if(!fin)
		cout<<"file did not open"<<endl;

else
	{
	while(getline(fin, str))
	count++;
	}
	cout<<"total lines : "<< count << endl;	
	fin.close();
}
