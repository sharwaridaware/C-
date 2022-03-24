#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> lst;
	int i;
	for(i=0; i<10; i++)
	lst.push_back(i);
	cout << "Size =" << lst.size() << endl;
	cout << "Contents: ";
	list<int>::iterator p = lst.begin();
	while(p != lst.end())
	{
	cout << *p << " ";
	p++;
	}
	cout << "\n\n";
	p = lst.end();
	while (p != lst.begin())
	{
	*p = *p + 100; p--;
	}
	cout << "Contents modified: ";
	p= lst.end();
	while(p != lst.begin()) 
	{ 
	cout << *p << " "; p--;	
	}
	return 0;
} 

