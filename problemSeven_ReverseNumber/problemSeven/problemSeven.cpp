
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

// method one
int reverseNumber(int number) {
	int reverse = 0;
	while (number > 0)
	{
		reverse = reverse * 10;
		reverse += number % 10;
		number /= 10;
	}
	return reverse ;
}

// method two
int ReverseNumber(int Number) {
	int Remainder = 0, Number2 = 0;
while (Number > 0)
{ 
	  Remainder = Number % 10;
	  Number = Number / 10;       
      Number2 = Number2 * 10 + Remainder;
} 
return Number2; 
}

int main()
{
	cout << "\nreverse is : "
		<< reverseNumber(readPositiveNumber("please enter number :  \n"));
	return 0;
}
