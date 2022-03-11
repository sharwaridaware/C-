#include <iostream>
using namespace std;

class shape
{
	protected:
	float x;
	public:
	void getdata() {cin>>x;}
	virtual float calculatearea()=0;
};

class square : public shape
{
	public:
	float calculatearea()
	{ 
	return x*x;
	}
};

class circle : public shape
{
	public:
	float calculatearea()
	{ 
	return 3.14*x*x;
	}
};

int main()
{
	square s;
	circle c;
	cout<<"enter length to calculate the area of a square:";
	s.getdata();
	cout<<"area of square:"<<s.calculatearea();
	cout<<"\nenter radius to calculate the area of a circle:";
	c.getdata();
	cout<<"area of circle:"<<c.calculatearea();
}
