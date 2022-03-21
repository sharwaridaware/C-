#include <iostream>
using namespace std;
  
template <class T1, class T2>
class sample
{
	T1 a; T2 b;
	public: void getdata()
	{
	cout<<"Enter A & B"<<endl; cin>>a>>b;
	}


void display()
	{
	cout<<"the values:" << endl;
	cout<<"a: " << a <<" b: " << b << endl;
	}
};

int main()
{
	sample<int, int> s1;
	sample<int, double> s2;
	sample<double, double> s3;

	cout<<"Integer data:"<<endl;
	s1.getdata(); s1.display();

    	cout<<"Int and double data: "<< endl;
    	s1.getdata(); s1.display();

	cout<<"Double and double data: "<< endl;
    	s1.getdata(); s1.display();

	return 0;
}
