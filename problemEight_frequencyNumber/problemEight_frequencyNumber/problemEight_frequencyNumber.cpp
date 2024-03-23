
#include <iostream>
#include <string>
using namespace std;

int readPositiveNumber(string message) {
	int number;
	do
	{
		cout << message;
		cin >> number;
	} while (number <= 0);
	return number;
}
 int reverseNumber(int LongNumber , int singleNumber) {
	int remainder = 0;
	int  FreqCount = 0;
	while (LongNumber > 0)
	{
		remainder = LongNumber % 10;
		LongNumber /= 10;
		if (singleNumber == remainder)
		{
			FreqCount++ ;
		}
	}
	return FreqCount;
}

int main()
{
	int MainOfNumber = readPositiveNumber("please enter the main numbers : \n");
	short DigitToCheck = readPositiveNumber("please enter one digit to check : \n");
 cout << "\n Digit : " << DigitToCheck <<endl 
	 <<" Freqeuncy is : " << reverseNumber(MainOfNumber, DigitToCheck) << " Timse";
	return 0;
}

