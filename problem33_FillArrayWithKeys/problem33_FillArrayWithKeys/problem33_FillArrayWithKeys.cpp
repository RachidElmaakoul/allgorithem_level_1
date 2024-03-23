


#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


enum enType {
	SmallLetter = 1, CapetalLetter = 2, SpecilLetter = 3, Digits = 4
};
int randomNumber(int from, int to) {
	int random = int(rand() % (from - to + 1) + from);
	return random;
}
int getRandomCharacter(enType Type) {
	switch (Type)
	{
	case enType::SmallLetter:
		return randomNumber(97, 122);
	case enType::CapetalLetter:
		return randomNumber(65, 90);
	case enType::SpecilLetter:
		return randomNumber(33, 47);
	case enType::Digits:
		return randomNumber(48, 57);
	}
}
int readPositiveNumber(string message) {
	int number;
	do
	{
		cout << message;
		cin >> number;
		cout << endl;
	} while (number <= 0);
	return number;
}
string GenerateWord(enType RandomLetter, short Length) {
	string word;
	for (int i = 1; i <= Length; i++)
	{
		word += getRandomCharacter(RandomLetter);
	}
	return word;
}
string GenerateKey() {
	string key = "";
	key += GenerateWord(enType::CapetalLetter, 4) + "-";
	key += GenerateWord(enType::CapetalLetter, 4) + "-";
	key += GenerateWord(enType::CapetalLetter, 4) + "-";
	key += GenerateWord(enType::CapetalLetter, 4);
	return key;
}
void FillArrayByGeneretKey(string arr[100],int length) {
	for (int i = 0; i < length; i++)
		arr[i] = GenerateKey();
}
void PrintFillArray(int number , string arr[100]) {
cout << "Array element : \n";
cout << endl;
	for (int i = 0; i < number; i++)
	{
		cout << "Array [" << i << "] : ";
		cout << arr[i] << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));
string arr[100] ;
int length = readPositiveNumber("please enter a positive number : \n");
	
	FillArrayByGeneretKey( arr,length);

	PrintFillArray(length, arr);
	

	return 0;
}
