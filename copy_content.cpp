#include<fstream>
#include <iostream>
using namespace std;


int main()
{
	fstream fin, fout;
	fin.open("file3.txt");
	fout.open("file4.txt"); 
	char ch;

	while(!fin.eof())
	{
		fin.get(ch);
		fout<<ch;
	}

	cout<<" copy done! "<< endl;	
	fin.close();
	fout.close();
	return 0;
}
