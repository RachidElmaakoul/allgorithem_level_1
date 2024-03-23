
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

int SumDigits(int number) {
	int remainer = 0;
	int sum = 0;
	
	while (number > 0)
	{
		remainer =  number % 10;
		number /= 10;
		cout << remainer << endl;
		sum += remainer;
	}
return sum ;
}
// second method but the first is better
//int SumDigits2(int number) {
//	int remainer = 0;
//	while (number > 0)
//	{
//		remainer = remainer + number % 10;
//		number /= 10;
//		cout << remainer << endl;
//	}
//}

int main()
{
	cout << "sum of Digits = "
 <<	SumDigits(readPositiveNumber("please enter a positive number : \n"));
}

