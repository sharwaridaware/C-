#include<fstream>
#include <iostream>
using namespace std;

int main()
{	ofstream outfile;
	outfile.open("file4.txt");
	outfile<<"This is my file";
	long pos = outfile.tellp();
	outfile.seekp(pos+0);
	outfile<<"Again my file";
	outfile.close();
	cout<<"Done!!";
	return 0;
}
