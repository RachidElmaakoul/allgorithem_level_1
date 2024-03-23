
#include <iostream>
using namespace std;

float readNumber() {
    float number;
    cout << "please enter a float number : ";
    cin >> number;
    return number;
}
float getFractionPart(float number) {
    return number - int(number);
}
 float MyRound(float number) {
     int intPart;
     intPart = int(number);
     float fractionPart = getFractionPart(number);
     if (abs(fractionPart) >= 0.5)
     {
         if (number > 0)
             return ++intPart;
         else 
             return --intPart;
     }
     else
         return intPart;
}

int main()
{
    float number = readNumber();
  cout << "my round result  : " << MyRound(number) << endl;
  cout << "c++ round result : " << round(number);
}
