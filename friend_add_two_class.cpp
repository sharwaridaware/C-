// Adding two classes using friend function

#include <iostream>
using namespace std;
class class2;
class class1
{
private:
    int a;
    int b;

public:
    class1(int l = 0, int m = 0)
    {
        a = l;
        b = m;
    }

    void display()
    {
        cout << "a=" << a << " b=" << b << endl;
    }
    friend class2 operator+(class1 a1, class2 a2);
};

class class2
{
private:
    int a;
    int b;

public:
    class2(int l = 0, int m = 0)
    {
        a = l;
        b = m;
    }

    void display()
    {
        cout << "a=" << a << " b=" << b << endl;
    }

    friend class2 operator+(class1 a1, class2 a2);
};

class2 operator+(class1 a1, class2 a2)
{
    class2 temp;
    temp.a = a1.a + a2.a;
    temp.b = a1.b + a2.b;
    return temp;
}

int main()
{
    class1 a1(3, 4), b1;
    class2 a2(4, 5), b2;

    b2 = a1 + a2;
    b2.display();
}
