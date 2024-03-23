#include <iostream>
#include <string>
using namespace std;



int readPositiveNumber(string message) {
    int number = 0;
    do
    {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}
bool checkPerfectNum(int number) {
     int sum = 0;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
            sum += i;
    }
  return number == sum;
}
void result(int number ) {
    if  (checkPerfectNum(number))
             cout  << number << " is a percfect number ";
    else
             cout  << number << " is not a percfect number ";
}
int main()
{
 result(readPositiveNumber("please enter a positive number: \n"));

}

