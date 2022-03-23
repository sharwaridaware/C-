#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<char> v(10);
	vector<char>::iterator p;
	int i;
	p = v.begin();
	i = 0;

	while(p != v.end())
	{
	*p = i + 'a';
	p++;
	i++;
	}
 
	cout << "Original contents:\n";
	p = v.begin();
	while(p != v.end())
	{
	cout<< *p << " "; p++;
	}

p = v.begin();
while(p != v.end())
	{	
	*p = toupper(*p); p++;
	}
	cout << "Modified contents:\n";	
	p = v.begin();
	while(p != v.end())
	{
	cout<< *p << " "; p++;	
	}
	
	v.insert(p, 1,'h');
	cout<<"\nModified contents (insert):\n";

	p = v.begin();
	while(p != v.end())
	{	
		cout<<*p<<" ";
		p++;
	}

	v.erase(v.begin(),v.begin()+5);
	cout<<"\nModified contents (case):\n";

	p = v.begin();
	while(p != v.end())
	{	
		cout<<*p<<" ";
		p++;
	}
}


