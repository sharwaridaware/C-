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
	f.open("file4.txt",ios::app|ios::binary);
	stu.getdata();
	f.write((char*)&stu, sizeof(stu));
	f.close();
	}

	void display()
	{
	fstream f; student s;
	f.open("file4.txt", ios::in|ios::binary);
	f.read((char*) &s, sizeof(s));
	cout<<"Roll"<<s.roll<<"Name"<<s.name<<"Mark:"<<s.marks<<endl;
	f.close();
	}
};

int main()
{
	student s;
	char ch='n';
	
	do
	{
	s.AddRecord();
	cout<<"want add more?(y/n)"<<endl;
	//ch=getchar();
	cin>>ch;
	}
	while( ch=='y'|| ch=='Y');
	cout<<"updated!"<<endl;

	s.display();
}
