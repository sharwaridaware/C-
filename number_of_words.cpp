#include<fstream>
#include <iostream>
using namespace std;


int main()
{
	ifstream fin;
	fin.open("file3.txt");
	int count = 0;
	char word[30];
	if(!fin)
		cout<<"file did not open"<<endl;

else
	{
	while(fin>>word)
	count++;
	}
	cout<<"total words : "<< count << endl;	
	fin.close();
}
