#include <iostream>
#include <string>
using namespace std;

int readPositiveNumber(string message) {
	int Number = 0;
	do
	{
		cout << message;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
void reversedNumber(int number) {
	int reversedNumber = 0 ; 
	while (number > 0)
	{
		reversedNumber = number % 10;
		number /= 10;
cout << reversedNumber << endl;
	}

}






int main()
{
	
  reversedNumber(readPositiveNumber("please enter a positive number : \n"));

 



	return 0;
}

