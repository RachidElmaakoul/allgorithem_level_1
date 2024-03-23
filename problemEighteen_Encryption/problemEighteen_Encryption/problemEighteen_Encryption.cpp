
#include <iostream>
#include <string>
using namespace std;


string readText() {
	string Text;
	cout << "please enter name \n";
	getline(cin, Text);
	return Text;
}

string encryptionText(string Text , int encryptionKey) {

	for (int i = 0; i < Text.length(); i++)
	{
		Text[i] = char((int)Text[i] + encryptionKey);
	}
	return Text;

}string DencryptionText(string Text , int encryptionKey) {

	for (int i = 0; i < Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - encryptionKey);
	}
	return Text;
}


int main()
{
	string Text = readText();
	const short encryptionKey = 5;

	string TextAfterEncryption = encryptionText(Text,encryptionKey);
	string TextAfterDencryption = DencryptionText(TextAfterEncryption, encryptionKey);

	cout << "Text befor encryption : " << Text << endl;
	cout << "Text after encryption : " << TextAfterEncryption << endl;
	cout << "Text After dencryption : " << TextAfterDencryption << endl;


	return 0;
}
