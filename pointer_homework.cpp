#include <iostream>
using namespace std;

class Student
{
private:
    int marks;
    string name;

public:
    int rollNo;
    void getData()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the marks: ";
        cin >> marks;
        cout << "Enter the roll no.: ";
        cin >> rollNo;
    }

    void printData()
    {
        cout << "Name: " << name<<endl << "Marks: " << marks<<endl << "Roll No.: " << rollNo<<endl;
    }
};

int main()
{
    Student S[3];
    Student *ptr = S;

    for (int i = 0; i < 3; i++)
    {
    	cout<<"Enter details of student "<<i+1<<": "<<endl;
        ptr->getData();
        ptr++;
    }
    ptr =S;

    for (int i = 0; i < 3; i++)
    {
    	cout<<"Details of student "<<i+1<<": "<<endl;
        ptr->printData();
        ptr++;
    }
    return 0;
}
