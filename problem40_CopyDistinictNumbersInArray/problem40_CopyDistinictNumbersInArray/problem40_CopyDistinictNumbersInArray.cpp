
#include <iostream>
#include <array>
using namespace std;

void arrayAddElements(int array[10], int& arrayLength, int number) {
	arrayLength++;
	array[arrayLength - 1] = number;
}
bool arrayCheckNumber(int array[10], int arrayLength, int number) {
	int counter = 0;
	for (int i = 0; i < arrayLength; i++) {
		if (number == array[i]) {
			return true;
		}
	}
	return false;
}
void arrayDistinct(int array[10], int arrayLength, int arrayDistinct[10], int& arrayDistinctLength) {
	for (int i = 0; i < arrayLength; i++) {

		if (!arrayCheckNumber(arrayDistinct, arrayDistinctLength, array[i])) {
			arrayAddElements(arrayDistinct, arrayDistinctLength, array[i]);
		}
	}
}
void arrayPrint(int array[10], int arrayLength) {
	cout << "printing array : " << endl;
	for (int i = 0; i < arrayLength; i++) {
		cout << array[i] << " ";
	}

}
int main()
{
	int array[10] = { 10,10,10,50,50,70,70,70,90 };
	int arrayLength = 9;
	int arraydistinct[10];
	int arrayDistinctLength = 0;
	arrayDistinct(array, arrayLength, arraydistinct, arrayDistinctLength);
	arrayPrint(arraydistinct, arrayDistinctLength);
}



