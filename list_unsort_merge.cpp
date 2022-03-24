#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> lst1, lst2;
	int i;
	for(i=0; i<10; i+=2) lst1.push_back(rand()%20);
	for(i=1; i<11; i+=2) lst2.push_back(rand()%20);
	cout << "Contents of lst1:\n";
	list<int>::iterator p = lst1.begin();

	while(p != lst1.end())
	{
	cout << *p << " ";
	p++; 
	}
	
	cout << endl << endl;
	cout << "Contents of lst2:\n";
	p = lst2.begin();

	while(p != lst2.end())
	{
	cout << *p << " ";
	p++; 
	}

	cout << endl << endl;
	//cout<<"Sorted list 1:\n";
	//lst1.sort();
	p = lst1.begin();
	while(p != lst1.end())
	{
	//cout << *p << " ";
	p++; 
	}

	cout << endl << endl;
	//cout<<"Sorted list 2:\n";
	//lst2.sort();
	p = lst2.begin();
	while(p != lst2.end())
	{
	//cout << *p << " ";
	p++; 
	}
	
	lst1.merge(lst2);
	if(lst2.empty())
	//cout << "lst2 is now empty\n";
	cout << "Contents of lst1 after merge:\n";
	p = lst1.begin();
	while(p != lst1.end())
	{
	cout << *p << " "; p++;
	}
	return 0;
}

