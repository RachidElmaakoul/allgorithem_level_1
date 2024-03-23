
#include <iostream>
#include <string>
using namespace std;

int readPositiveNumber(string message) {
	int number = 0;
	do
	{
		cout << message;
		cin >> number;
	} while (number <= 0);
	return number;
}

int ReverseNumber(int number) {
	int DigitInOrder = 0 , numberTwo = 0;
	while (number > 0)
	{
		DigitInOrder = number % 10;
		number /= 10;
		numberTwo = numberTwo * 10 + DigitInOrder;
	}
	return numberTwo;
}


void PrintDigit(int number) {
	int Digit = 0;
	while (number > 0)
	{
		Digit = number % 10;
		number /= 10;
		cout << Digit << endl;
	}
}
int main()
{
	PrintDigit(ReverseNumber(readPositiveNumber("please enter a positive number :\n")));
}

