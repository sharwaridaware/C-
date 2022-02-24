// New and delete pointers

#include <iostream>
using namespace std;

class S
{
	public:
	int p, q, r, s, t;
	S()	
	{
		cout<<"inside the constant"<<endl;
		p = 0;
		q = 10;
	}
	~S()
	{
		cout<<"inside the destruction"<<endl;
	}
};
	
int main()		
{
	// declaration of variabless
	int *ptr1, *ptr2, sum;
	S *s2, *s3;
	
	ptr1 = new int; *ptr1 = 5;
	ptr2 = new int; *ptr2 = 1;
	sum = *ptr1 + *ptr2;
	cout<<"Sum is:"<<sum<<endl;
	
//	s2 = new S;

	int *arr = new int [5];
	s3 = new S [4];
	
	delete ptr1;
	delete ptr2;
	delete arr;
	delete [] s3;
	return 0;
}
