#include <iostream>
using namespace std;
#include <algorithm>
#include<vector>
#include<string.h>


int main()
{
	char str[] = " I love c++ programming";
	vector<char> v, v2(30);
	int i;
	
	for(i=0; str[i]; i++)
	v.push_back(str[i]);
	cout << "Input sequence:\n";
	for (i=0; i<v.size(); i++)
	cout << v[i]; cout << endl;
	remove_copy(v.begin(), v.end(), v2.begin(), ' ');
	cout << "Result after removing spaces:\n";

	for(i=0; i<v2.size();i++)
	cout<<v2[i];
	cout<<endl<<endl;
	return 0;
}
