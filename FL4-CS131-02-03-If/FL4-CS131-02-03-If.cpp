#include <iostream>
using namespace std;
int main() {
	int number1, number2, number3;
	// Boolean variables are either true or false
	bool condition1, condition2;
	condition1 = true;

	if (condition1)
		cout << "condition1 is true and = " << condition1 << "\n";
	else
		cout << "condition1 is false and = " << condition1 << "\n";

	// comparison operators result in a true or false condition
	cout << "Enter a number: ";
	cin >> number1;
	cout << "Enter another number: ";
	cin >> number2;
	if (number1 > number2)
		cout << number1 << " > " << number2 << "\n";
	if (number1 < number2)
		cout << number1 << " < " << number2 << "\n";
	if (number1 >= number2)
		cout << number1 << " >= " << number2 << "\n";
	if (number1 <= number2)
		cout << number1 << " <= " << number2 << "\n";
	// Be careful... = assigns, == compares; "if (number1 = number2)" is wrong
	if (number1 == number2)
		cout << number1 << " == " << number2 << "\n";
	if (number1 != number2)
		cout << number1 << " != " << number2 << "\n";
	// "and" with &&, "or" with ||
	if ((number1 >= 1) && (number1 <= 10))
		cout << number1 << " is between 1 and 10\n";
	if ((number1 == 5) || (number1 == 7))
		cout << number1 << " is either 5 or 7\n";
	// For compound statements (multiple lines in a block); use braces to enclose blocks of code.
	if (true)
	{
		cout << "One line\n";
		cout << "Another line\n";
		cout << "A third line\n";
	}
	system("pause");
	return 0;
}