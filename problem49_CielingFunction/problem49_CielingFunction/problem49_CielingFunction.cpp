
#include <iostream>
using namespace std;

float readNumber() {
    float number;
    cout << "please enter a float number : ";
    cin >> number;
    return number;
}

//first method
//float MyCeil(float number) {
//    if (number > 0)
//    {
//        return int(number) + 1;
//    }
//    else {
//        return int(number) ;
//    }
//}



//second method
float getFractionPart(float number) {
    return number - int(number);
}
float MyCeil(float number) {
    if (abs(getFractionPart(number)) > 0)
    {
        if (number > 0)
            return int(number) + 1;
        else
            return int(number);
    }
    else
        return number;
}

int main()
{
    float number = readNumber();
    cout << "my Ceil result  : " << MyCeil(number) << endl;
    cout << "c++ Ceil result : " << ceil(number);
}
