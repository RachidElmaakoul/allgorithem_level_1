#include <iostream>
#include <string>
using namespace std;
void printTableHeader() {
	cout << "\n\n \t\t\t multipliation table from 1 to 10 \n\n";
	cout << "\t";
	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t";
	}
	cout << "\n_____________________________________________________________________________________\n\n";
}
string columSperator(int i) {
	if (i < 10)
		return "  |";
	else
		return " |";
}
void printMultiplicationTable() {
	printTableHeader();
	for (int  i = 1; i <= 10; i++)
	{
		cout << " " << i << columSperator(i) << "\t";
		for (int j = 1; j <= 10; j++) {
			cout << i * j << "\t";
		}
cout << endl;
	}
}
int main()
{
	printMultiplicationTable();
	return 0;
}

