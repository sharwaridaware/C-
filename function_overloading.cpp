// function overloading

#include <iostream>
using namespace std;

void display(int a) // integer
{
    cout << "Integer number: " << a << endl;
}

void display(float b) // float
{
    cout << "Float number: " << b << endl;
}

void display(int a, float b) // float and demo
{
    cout << "Integer number: " << a << " Float number: " << b << endl;
}

int main()
{
    int a = 4;
    float b = 7.;
    display(a);
    display(b);
    display(a, b);
    return 0;
}
