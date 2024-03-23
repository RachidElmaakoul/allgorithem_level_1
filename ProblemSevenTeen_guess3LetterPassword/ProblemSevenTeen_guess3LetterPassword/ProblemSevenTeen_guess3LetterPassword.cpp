#include <iostream>
#include <string>
using namespace std;

string readPassword() {
	string Password;
	cout << "please enter Three letter of pasword : \n";
	cin >> Password;
	return Password;
}

bool printAllLetter(string password) {
	cout << endl;
	string word = "";
	int counter = 0;
	for (char i = 65; i <= 90; i++)
	{
		for (char j = 65; j <= 90; j++) {
			cout << "\n";

			for (char x = 65; x <= 90; x++)
			{
				word = word + i;
				word = word + j;
				word = word + x;
				
				counter++;

				 cout << "TRAIL [" << counter << "] : " << word  << endl;
				 if (password == word)
				 {
					 cout << "\nNpassword is : " << password << endl;
					 cout << "found it after " << counter << " trail(s) .\n";
					 return true;
				 }
				 word = "";
			}
		}
	}
	return false;
}

int main()
{
	printAllLetter(readPassword());
}
