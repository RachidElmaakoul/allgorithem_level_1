
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
bool checkPerfectNumber(int number) {
	int sum = 0;
	for (int i = 1; i < number; i++)
	{
		if (number % i == 0)
		{
			sum += i;
		}
	}
	return number == sum;	
}

void printPerfevtNumber(int number) {
	for (int i = 1; i < number; i++)
	{
		if (checkPerfectNumber(i))
			cout << i << endl;
	}
}



int main()
{
	 printPerfevtNumber(readPositiveNumber("ppppp\n"));
}
