// Hybrid homework

#include <iostream>
using namespace std;

class A
{
public:
    int a;

    void display()
    {
        cout << "Inside A";
    }
};

class B : public A
{
public:
    int b;
    void show()
    {
        cout << "Inside B";
    }
};

class C
{
public:
    int c;
    void print()
    {
        cout << "Inside C";
    }
};

class D : public B, public C
{
public:
    int d = 4;
    void sum()
    {
        cout << "Inside D and sum: " << b + c<<endl;
    }
};

class E : public D
{
public:
    void show1()
    {
        cout << "D: " << d;
    }
};

class F : public D
{
public:
    void show2()
    {
        cout << "Inside F";
    }
};

int main()
{
    D s;
    s.b = 5;
    s.c = 2;
    s.sum();
    E e;
    e.show1();
}
