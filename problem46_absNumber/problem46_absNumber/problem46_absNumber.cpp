

#include <iostream>
using namespace std;

int readNegativeNumber() {
    int Negative = 0;
cout << "please enter a negative number : ";
    cin >> Negative;
    return Negative;
}

int MyAbs(int number) {
    if (number < 0)
    {
return number * -1;
    }
    return number;
}

int main()
{
    int number = readNegativeNumber();
   cout << "my abs result  : " << MyAbs(number);
   cout << endl;
   cout << "c++ abs result : " << abs(number);


   return 0;
}
