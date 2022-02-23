// area and volume

#include <iostream>
using namespace std;
class Measure
{
public:
    float l, b, h;
    void setinput(float a, float b, float c) // set input
    {
        l = a;
        b = b;
        h = c;
    }
    float volume() // volume
    {
        return (l * b * h);
    }
    float area() // area
    {
        return (2 * ((l * h) + (b * h) + (l * b)));
    }
};

int main()
{
    Measure m1;
    m1.setinput(2, 3, 4);
    cout << "First object: " << m1.l << " " << m1.b << " " << m1.h << endl;
    cout << "Volume is: " << m1.volume() << endl;
    cout << "Area is: " << m1.area() << endl;

    Measure m2;
    m2.setinput(1, 1.5, 2);
    cout << "Second object: " << m2.l << " " << m2.b << " " << m2.h << endl;
    cout << "Volume is: " << m2.volume() << endl;
    cout << "Area is: " << m2.area() << endl;

    return 0;
}
