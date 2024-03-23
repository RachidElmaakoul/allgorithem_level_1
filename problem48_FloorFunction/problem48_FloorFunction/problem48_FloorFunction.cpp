
#include <iostream>
using namespace std;

float readNumber() {
    float number;
    cout << "please enter a float number : ";
    cin >> number;
    return number;
}

float MyFloor(float number) {
    if (number > 0)
    {
        return int(number);
    }
    else {
        return int(number) - 1;
    }
}



//second method
//float getFractionPart(float number) {
//    return number - int(number);
//}
//float MyFloor(float number) {
//    int intPart;
//    intPart = int(number);
//    float fractionPart = getFractionPart(number);
//    if (abs(fractionPart) >= 0.1)
//    {
//        if (number > 0)
//            return intPart;
//        else
//            return --intPart;
//    }
//    else
//        return intPart;
//}

int main()
{
    float number = readNumber();
    cout << "my Floor result  : " << MyFloor(number) << endl;
    cout << "c++ Floor result : " << floor(number);
}
