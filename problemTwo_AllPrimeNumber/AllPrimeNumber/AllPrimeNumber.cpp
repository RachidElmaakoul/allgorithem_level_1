#include <iostream>
#include <string>
using namespace std;
enum enPrimeNumber
{
	Prime = 1 , NotPrime = 2
};
int readNumber(string message) {
	int number = 0;
	do
	{
		cout << message;
		cin >> number;

	} while (number <= 0);
	return number;
}
enPrimeNumber checkPrimeNumber(int number) {
	int M = round(number / 2);
	for (int counter =  2 ; counter <= M; counter++)
	{
		if (number % 2 == 0)
			return enPrimeNumber::NotPrime ;
	}
	return enPrimeNumber::Prime;
}
void result(int result) {
	cout << endl;
	cout << "prime number from 1 to " << result ;
	cout << " are : " << endl;
    
		for (int i = 1; i < result; i++)
		{
			if (checkPrimeNumber(i) == enPrimeNumber::Prime)
			{
				cout << i << endl;
			}
		}
}

int main()
{
	result(readNumber("please enter positive number : \n")) ;


	return 0;
}
