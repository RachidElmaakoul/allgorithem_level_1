
#include <iostream>
using namespace std;

float readNumber() {
    float number;
    cout << "please enter a number : ";
    cin >> number;
    return number;
}
float MySqrt(float number) {
    return pow(number , 0.5);
}


int main()
{
    int number = readNumber();
    cout << " My Sart Function : " << MySqrt(number) << endl;
    cout << "c++ sqrt function : " << sqrt(number);

}

