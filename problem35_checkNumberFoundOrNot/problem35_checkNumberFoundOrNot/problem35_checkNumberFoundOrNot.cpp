#include <iostream>
using namespace std;

int readPositiveNumber() {
	int number = 0;
	cout << "please enter number you are lookin for it : \n";
	cin >> number;
	return number;
}

int RandomNUmbers(int from, int to) {
	int RandNum = rand() % (to - from + 1) + from;
	return RandNum;
}
void FillArrayWithRandNum(int arr[100], int& ArrLength) {
	cout << "please enter how many element you want : \n";
	cin >> ArrLength;
	for (int i = 0; i < ArrLength; i++)
	{
		arr[i] = RandomNUmbers(65, 90);
	}
}
void PrintArray(int arr[100], int ArrLength) {
	for (int i = 0; i < ArrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

short SearchForNumber(int arr[100], int ArrLength, int NumberSearch) {

	for (int i = 0; i < ArrLength; i++)
	{
		if (arr[i] == NumberSearch)
		{
			return i;
		}
	}
	return -1;
}

bool isNumberInArrat(int arr[100], int ArrLength, int NumberSearch) {
	return SearchForNumber(arr,ArrLength,NumberSearch) != -1;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], ArrLength = 0, NumberSearch = 0;


	FillArrayWithRandNum(arr, ArrLength);

	cout << "\nArray 1 element : \n";
	PrintArray(arr, ArrLength);
	cout << endl;

	cout << endl;
	NumberSearch = readPositiveNumber();
	cout << "\nNumber you are looking for is: " << NumberSearch << endl;

	if ( isNumberInArrat(arr, ArrLength, NumberSearch))
	{
		cout << "YES, Number is found :-) " << endl;
	}
	else
	{
		cout << "NO, The Number ist not found :-( " << endl;

		cout << endl;
	}


}