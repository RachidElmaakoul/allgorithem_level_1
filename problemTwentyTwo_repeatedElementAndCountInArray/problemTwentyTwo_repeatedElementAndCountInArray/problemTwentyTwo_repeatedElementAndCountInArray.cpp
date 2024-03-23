

#include <iostream>
#include <string>
#include <ostream>
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
void readElement(int arr[100],int& arrLength) {
	cout << " please enter number of element : ";
	cin >> arrLength;
	cout << endl;
	cout << " enter array element : \n";
	for (int i = 0; i < arrLength; i++)
	{
		cout << " Element [" << i+1 << "] : ";
		cin >> arr[i];
	}
	cout << endl;
}
void PrintElement(int arr[100], int& arrLength) {
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";

		cout << endl;
}

int TimeOfRepeated(int number , int arr[100], int arrLength) {
	int counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == number) {
			counter++;
		}
	}
	return counter;
}

int main()
{
	int arr[100], numberOfcheck, arrLength;

readElement(arr, arrLength);
numberOfcheck = readPositiveNumber(" please enter number you want to check : ");

cout << "\n the origanle array : ";
	PrintElement(arr,arrLength );
	
	cout << "\n number " << numberOfcheck << " is repeated " << TimeOfRepeated(numberOfcheck, arr, arrLength) << " Time(s) .\n";
}

