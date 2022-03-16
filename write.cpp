#include<fstream>
#include <iostream>
using namespace std;


class student
{
	int roll; char name[25]; float marks;
	void getdata()
	{
	cout<<"Enter roll no and name"<<endl;
	cin>>roll>>name;
	cout<<"marks"<<endl;
	cin>>marks;
	}

public: void AddRecord()
	{
	fstream f; student stu;
	f.open("student.dat",ios::app|ios::binary);
	stu.getdata();
	f.write((char*)&stu, sizeof(stu));
	f.close();
	}
};

int main()
{
	student s;
	char ch='n';
	char buff;
	do
	{
	s.AddRecord();
	cout<<"want add more?(y/n)"<<endl;
	cin>>buff;
	ch=getchar();
	}
	while( ch=='y'|| ch=='Y');
	cout<<"updated!"<<endl;
}
