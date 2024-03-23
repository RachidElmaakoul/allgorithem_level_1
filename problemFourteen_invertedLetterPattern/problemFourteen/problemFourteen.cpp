#include <iostream>
#include <string>
using namespace std;

int readPositivenumber(string message) {
	int number = 0;
	do
	{
		cout << message;
		cin >> number;
	} while (number <= 0);
	return number;
}

void NumberPattern(int number) {
	for (int x = (65 + number - 1); x >= 65 ; x--) {
		for (int i = 1; i <= number - (65 + number - 1 - x); i++)
		{
            cout << char(x);
		}
			cout << "\n";
	}
} 

// second method
//void NumberPattern(int number) {
//	for (char x = (64 + number); x >= 65 ; x--) {
//		for (int i = 1; i <= number; i++)
//		{
//            cout << x;
//		}
//		    number--;
//			cout << "\n";
//	}
//}

int main()
{
	NumberPattern(readPositivenumber("please enter a positive number : \n"));
	return 0;
}
