// see the pointer size etc

#include <iostream>
using namespace std;

int main()
{
int *pt = new int;

*pt = 10;

cout<<"value:"<<*pt<<endl;
cout<<"pt:"<<pt<<endl;
cout<<"sizeof(*pt):"<<sizeof(*pt)<<endl;
cout<<"sizeof(pt):"<<sizeof(pt)<<endl;
cout<<"addres of (pt):"<<&pt<<endl;
return 0;
}
