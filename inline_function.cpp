// inline function

#include <iostream>
using namespace std;

inline int cube(int i)
{
    return i * i * i;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "\nCube is: " << cube(n);
    return 0;
}
