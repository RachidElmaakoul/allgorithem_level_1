
#include <iostream>
#include <string>
using namespace std;

void printAllLetter() {
	cout << endl;
	string word = "";
	for (char i = 65; i <= 90; i++)
	{
		for (char j = 65; j <= 90; j++) {
			cout << "\n";

			for (char x = 65; x <= 90; x++)
			{
				word = word + i;
				word = word + j;
				word = word + x;
                cout << word << endl;
                word = " ";
			}
		}
cout  <<"\n______________________________________";
	}
}

int main()
{

	printAllLetter();
}

