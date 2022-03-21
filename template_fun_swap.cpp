#include <iostream>
using namespace std;
  
template <class T, class U>
void swap(T *n1, U *n2)
{
	cout<<"In swap " <<"\nBefore swaping" << endl;
	cout<<"n1 = " << *n1 <<" n2 = " << *n2 << endl;
	*n1=*n1+*n2;
	*n2=*n1-*n2;
	*n1=*n1-*n2;
}
  
int main()
{
	int A = 25, B = 25, C;	
        float a = 20, b = 22, c;
  	swap(&a, &B);
	cout<<"After Swapping\n";
    	cout<<"n1 = "<< a <<" n2 = "<< B << endl;
    	
}
