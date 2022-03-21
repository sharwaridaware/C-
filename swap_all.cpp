#include <iostream>
using namespace std;
  
template <class T, class U>
void swap(T *n1, U *n2)
{
	U temp;
	cout<<"In swap " <<endl;
	cout<<"n1 = " << *n1 <<" n2 = " << *n2 << endl;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
	cout<<"After Swapping\n";
    	cout<<"n1 = "<< *n1 <<" n2 = "<< *n2 << endl;
}
  
int main()
{
	int A = 10, B = 5, C;	
        float a = 20, b = 22, c;
	string j="abc";
	string k = "xyz";
  	swap(&j,&k);
	
}
