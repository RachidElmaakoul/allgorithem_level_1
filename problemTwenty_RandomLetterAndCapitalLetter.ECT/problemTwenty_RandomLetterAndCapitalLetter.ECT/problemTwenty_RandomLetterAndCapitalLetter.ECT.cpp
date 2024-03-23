#include <cstdlib>
#include <iostream>
using namespace std;
char randomLetter(int from, int to) {
    int random = (int)rand() % (to - from + 1) + from;
    return random;
}
enum enCharType {
    smallLetter = 1,CapitalLetter = 2,SpecialLette = 3, Digits = 4
};
char getRandomCharater(enCharType Type) {
    switch (Type)
    {
    case smallLetter:
        return randomLetter(97, 122);
    case CapitalLetter:
        return randomLetter(65, 90);
    case SpecialLette:
        return randomLetter(33, 47);
        break;
    case Digits:
        return randomLetter(48, 57);
    }
}

int main()
{
    srand((unsigned)time(NULL));



    cout << getRandomCharater(enCharType::smallLetter) << endl;
    cout << getRandomCharater(enCharType::CapitalLetter) << endl;
    cout << getRandomCharater(enCharType::SpecialLette) << endl;
    cout << getRandomCharater(enCharType::Digits) << endl;




   cout << "this for caoital letter : " << randomLetter(65, 90) << endl;
   cout << "this for lower letter   : " <<  randomLetter(97, 122) << endl;
   cout << "this for characters     : " <<  randomLetter(33, 47) << endl;
   cout << "this for numbers        : " << randomLetter(48, 57) << endl;


}

