// overloading unary operator

#include <iostream>
using namespace std;

class complex
{
private:
    int real, img;

public:
    complex() // default argument
    {
        real = 0;
        img = 0;
    }
    complex(int x, int y)
    {
        real = x;
        img = y;
    }
    void display()
    {
        cout << "Real part: " << real << " Img part: " << img << endl;
    }
    complex operator+(complex ob)
    {
        complex temp;
        temp.real = real + ob.real;
        temp.img = img + ob.img;
        return temp;
    }

    complex operator*(complex ob)
    {
        complex temp;
        temp.real = real * ob.real;
        temp.img = img * ob.img;
        return temp;
    }
    complex operator/(complex ob)
    {
        complex temp;
        temp.real = real / ob.real;
        temp.img = img / ob.img;
        return temp;
    }

    complex operator-()
    {
        complex temp;
        temp.real = -real;
        temp.img = -img;
        return temp;
    }

    complex operator--()
    {
        complex temp;
        temp.real = --real;
        temp.img = --img;
        return temp;
    }

    complex operator--(int)
    {
        complex temp;
        temp.real = real--;
        temp.img = img--;
        return temp;
    }

    friend complex operator-(complex, complex);
    friend complex operator%(complex, complex);
};
complex operator-(complex obj1, complex obj2)
{
    complex temp;
    temp.real = obj1.real - obj2.real;
    temp.img = obj1.real - obj2.real;
    return temp;
}

complex operator%(complex obj1, complex obj2)
{
    complex temp;
    temp.real = obj1.real % obj2.real;
    temp.img = obj1.real % obj2.real;
    return temp;
}

int main()
{
    complex c1(4, 5), c2(2, 3);
    cout << "Before Oparation\n";
    c1.display();
    c2.display();

    cout << "After Oparation\n";
    complex c3, c5, c4;

    cout << "Addition\n";
    c3 = c1 + c2;
    c3.display();

    cout << "Unary - \n";
    // c1.display();
    c2 = -c1;
    c2.display();

    cout << "Unary -- pre\n";
    // c1.display();
    c2 = --c1;
    c2.display();

    cout << "Unary -- post\n";
    // c1.display();
    c2 = c1--;
    c2.display();

    return 0;
}
