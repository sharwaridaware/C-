// default arguments

#include <iostream>
using namespace std;

int volume(int l = 2, int w = 3, int h = 4)
{
    return l * w * h;
}

int addition(int a = 2, int b = 3, int c = 4)
{
    return a + b + c;
}

// int addition(int a=1, int b, int c) //invalid argument
// {
//     return a+b+c;
// }

// int addition(int a, int b=5, int c) //invalid argument
// {
//     return a+b+c;
// }

int main()
{
    cout << "Volume: " << volume() << endl;
    cout << "Volume: " << volume(1) << endl;
    cout << "Volume: " << volume(1, 2) << endl;
    cout << "Volume: " << volume(1, 2, 3) << endl;

    cout << "Addition: " << addition(2) << endl;
    cout << "Addition: " << addition(6, 7) << endl;
    cout << "Addition: " << addition(2, 3, 4) << endl;
    return 0;
}
