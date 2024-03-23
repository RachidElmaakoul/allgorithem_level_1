
#include <iostream>
using namespace std;

int readPositiveNumber(string message) {
	  int number ;
	do
	{
		cout << message;
		cin >> number;
	} while (number <= 0);
	return number;
}

int FreqeuncyDigit(  int Digit , int number  ) {
	int remainder = 0, Freqeuncy = 0;
	while (number > 0)
	{
		remainder = number % 10;
		number /= 10;
		if (Digit == remainder)
		{
			Freqeuncy++;
		}
	}
	return Freqeuncy;
}
void printAllDijitNumber(int number) {
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		short DigitFreqeuncy = 0;
		DigitFreqeuncy = FreqeuncyDigit(i, number);
		if (DigitFreqeuncy > 0) {
			cout << " Dijit " << i << " freqeuncy is " << DigitFreqeuncy << " time(s). \n";
		}
	}
}

int main()
{
	 int number = readPositiveNumber("please enter the main number : \n");
		printAllDijitNumber(number) ;
}

