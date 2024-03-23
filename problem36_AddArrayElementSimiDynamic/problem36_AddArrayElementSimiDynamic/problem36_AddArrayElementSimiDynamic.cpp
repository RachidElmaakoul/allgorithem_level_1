#include <iostream>
using namespace std;

int readPositiveNumber() {
    int number = 0;
		cout << "please enter number : ";
		cin >> number;
	return number;
}

void AddElementInArray( int number ,int arr[100], int& ArrLength) {
	ArrLength++;
	arr[ArrLength - 1] = number;
}

void InputElementFromUser(int arr[100], int& ArrLength) {
	bool AddMore = true;
	do
	{
		AddElementInArray(readPositiveNumber(), arr, ArrLength);
			cout << "\n do you want add a number? [0]No [1]Yes : ";
			cin >> AddMore;
	} while (AddMore);
}


void PrintArray(int arr[100], int ArrLength) {
	for (int i = 0; i < ArrLength; i++)
		cout << arr[i] << " ";
	
	cout << endl;
}

int main()
{
	int arr[100] , number = 0 ;
	InputElementFromUser(arr, number);

	cout << "\narray length :  " << number << endl;
	cout << "element : \n";
	PrintArray(arr,number);



	return 0;
}

