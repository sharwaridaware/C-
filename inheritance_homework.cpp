#include <iostream>
using namespace std;

class student
{
public:
    int roll_no;
    string name;

    void setData()
    {
    int r;
    string n;
    cout<<"Enter the name of student: ";
    cin>>n;
    cout<<"Enter the Roll No. of student: ";
    cin>>r;
        roll_no = r;
        name = n;
    }
};

class test
{
public:
    int marks[5];
    void setMarks()
    {
        for(int i=0;i<5;i++)
        {
        cout<<"Enter the marks of "<<i+1<<"st subject";
        cin>>marks[i];
        }
    }
};

class result : public student, public test
{
public:
    float totalmarks()
    {
        float total = 0;
        for (int i = 0; i < 5; i++)
        {
            total = total + marks[i];
        }
       
        return total;
    }

    float percentage()
    {
        float perc = (totalmarks() *100 / 500);
        return perc;
    }

    void display()
    {
        cout << "Student Name: " << name << endl
             << "Roll No.: " << roll_no << endl
             << "Total: " << totalmarks() << endl
             << "Percentage: " << percentage() << endl;
    }
};

int main()
{
    student s;
    test t;
    result r;
    r.setData();
    r.setMarks();
    r.display();
}


