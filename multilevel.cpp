#include <iostream>
using namespace std;

class Person
{
public:
    void display1()
    {
        cout << "\nPerson class";
    }
};

class Student : public Person
{
public:
    void display2()
    {
        cout << "\nStudent class";
    }
};

class ITStudent : public Student
{
public:
    void display3()
    {
        cout << "\nITStudent class";
    }
};

int main()
{
    Person p;
    Student s;
    ITStudent i;
    p.display1();
    s.display2();
    s.display1();
    i.display3();
    i.display2();
    i.display1();
}
