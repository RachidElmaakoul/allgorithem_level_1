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
	for (int x = 65; x <= (65 + number - 1 ); x++) {
		for (int i = 1; i <= x - 65 + 1; i++)
		{
			cout << char(x);
		}
		cout << "\n";
	}
}


int main()
{
	NumberPattern(readPositivenumber("please enter a positive number : \n"));
	return 0;
}
