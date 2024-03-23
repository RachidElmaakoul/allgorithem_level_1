#include <iostream>
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

int randomNumber(int from , int to) {
	int random = int(rand() % (to - from + 1) + from);
	return random;
}

void FillArray(int arr[100], int& number) {
	number = readPositiveNumber("please enter a positive number : ");

	for (int i = 0; i < number; i++)
	{
		arr[i] = randomNumber(1, 100);
	}
}
void PrintArray(int arr[100],int number) {
	for (int i = 0; i < number; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main()
{
	srand((unsigned)time(NULL));

	int arr[100], Length;

	FillArray(arr, Length);

	cout << "\nArray Element : ";
	PrintArray(arr, Length);
	cout << endl;



	
	return 0;
}

