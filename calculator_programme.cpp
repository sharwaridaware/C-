// calculator programme

#include <iostream>
using namespace std;
class calculator
{
public:
	int input1;
	int input2;

	void setInput(int a, int b)
	{
		input1 = a;
		input2 = b;
	}
	int add(calculator obj1, calculator obj2) // addition
	{
		return obj2.input1 + obj2.input2;
	}
	int sub(calculator obj1, calculator obj2) // subtraction
	{
		return obj2.input1 - obj2.input2;
	}
	int mul(calculator obj1, calculator obj2) // multiplication
	{
		return obj2.input1 * obj2.input2;
	}
	int div(calculator obj1, calculator obj2) // division
	{
		return obj2.input1 / obj2.input2;
	}
};

int main()
{
	calculator obj1, obj2;
	obj1.setInput(10, 15); // setting input
	obj2.setInput(25, 20);
	cout << "The input: " << obj1.input1 << " " << obj1.input2 << endl;
	cout << "The input: " << obj2.input1 << " " << obj2.input2 << endl;
	cout << "Sum is: " << obj1.add(obj1, obj2) << endl;
	cout << "Substraction is: " << obj1.sub(obj1, obj2) << endl;
	cout << "Multiplication is: " << obj1.mul(obj1, obj2) << endl;
	cout << "Division is: " << obj1.div(obj1, obj2) << endl;
	return 0;
}
