#include <iostream>
using namespace std;

class Animal
{
public:
    void display1()
    {
        cout << "\nAnimal Class";
    }
};
class Elephant : public Animal
{
public:
    void display2()
    {
        cout << "\nElephant class";
    }
};
class Horse : public Animal
{
public:
    void display3()
    {
        cout << "\nHorse class";
    }
};
class Cow : public Animal
{
public:
    void display4()
    {
        cout << "\nCow class";
    }
};

int main()
{
    Animal a;
    Elephant e;
    Horse h;
    Cow c;
    a.display1();
    e.display2();
    e.display1();
    h.display3();
    h.display1();
    c.display4();
    c.display1();
}
