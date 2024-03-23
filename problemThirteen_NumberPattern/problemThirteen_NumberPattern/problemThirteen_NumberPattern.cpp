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
	for (int i = 1; i <= number; i++)
	{
		for (int x = 1; x <= i; x++) {
			cout << i;
		}
		cout << "\n";
	}
}

int main()
{
	NumberPattern(readPositivenumber("please enter a positive number : \n"));
}

