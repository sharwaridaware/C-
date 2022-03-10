// basic type to class type conversion 

#include <iostream>
using namespace std;

class Time
{
    int hour, min;

public:
    Time()
    {
        cout << "Default";
    }
    Time(int x)
    {
        cout << "Param const\n";
        hour = x / 60;
        min = x % 60;
    }

    void operator=(int x)
    {
        cout << "Overloaded operator '=' \n";
        hour = x / 60;
        min = x % 60;
    }

    void display()
    {
        cout << "Time is: " << hour << "hr and " << min << " min " << endl;
    }
};

int main()
{
    Time t1, t2(100);
    int j = 96;

    t1 = j;
    t1.display();
    return 0;
}
