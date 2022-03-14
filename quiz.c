#include <iostream>
using namespace std;

class A
{
public:
    void displayA()
    {
        cout << "Inside A" << endl;
    }
};

class B
{
public:
    void displayB()
    {
        cout << "Inside B" << endl;
    }
};

class C : public A
{
public:
    void displayC()
    {
        cout << "Inside C" << endl;
    }
};

class D : public B
{
public:
    void displayD()
    {
        cout << "Inside D" << endl;
    }
};

class E : public C, public D
{
public:
    void displayE()
    {
        cout << "Inside E" << endl;
    }
};

class F : public E
{
public:
    void displayA()
    {
        cout << "Inside F" << endl;
    }
};

int main()
{
    A a;
    B b;
    C c;
    D d;
    E e;
    F f;

    a.displayA();
    // b.displayA();
    // b.displayC();
    //  b.displayD();
    // f.displayA;
    f.displayC();
    f.displayB();
    f.displayE();

    e.displayA();
    e.displayB();
    e.displayC();
}
