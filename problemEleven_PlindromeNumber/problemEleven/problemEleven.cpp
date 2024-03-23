
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
int reverseNumber(int number) {
	int ReverseNumber = 0 , NumberTwo = 0;
	while (number > 0)
	{
		ReverseNumber = number % 10;
		number /= 10;
		NumberTwo = NumberTwo * 10 + ReverseNumber;
	}
return NumberTwo;
}
bool result(int number) {
	return number == reverseNumber(number);
}
//second method
// void result(int number) {
//
//	if (reverseNumber(number) == number)
//		cout << "this is a plandrome number \n";
//	else
//		cout << "this is not a plindrome number \n";
//}

int main()
{
	if (result(readPositiveNumber("please enter a positive number \n")))
	{
		cout << "Yes , is a plindrom number .";
	}
	else {
		cout << "Yes , is NOT a plindrom number .";
	}


	//second method
	//result(readPositiveNumber("please enter a positive number \n"));
}
