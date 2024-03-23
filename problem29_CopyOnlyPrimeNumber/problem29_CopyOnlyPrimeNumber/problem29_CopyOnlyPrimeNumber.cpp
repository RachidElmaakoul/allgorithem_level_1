#include <iostream>
using namespace std;

enum enPrimeNotPrime {
    prime = 1,NotPrimw = 2
};

enPrimeNotPrime checkPrime(int number) {
    int M = round(number / 2);
    for (int i = 2; i <= M; i++)
    {
        if (number % i == 0) {
            return enPrimeNotPrime::NotPrimw;
        }
    }
    return enPrimeNotPrime::prime;
}

int randomNumbers(int from, int to) {
    int RanDom = int(rand() % (to - from + 1) + from);
    return RanDom;
}

void FillRandomNumOfArray(int arr[100], int& ArrLength) {
    cout << "please enter many random number : ";
    cin >> ArrLength;

    for (int i = 0; i < ArrLength; i++)
    {
        arr[i] = randomNumbers(1, 100);
    }
}


void copyOnlyPrimeNumber(int ArrSource[100], int ArrDistenation[100], int ArrLength , int& arr2Length) {
    int counter = 0;
    for (int i = 0; i < ArrLength; i++)
    {

        if (checkPrime(ArrSource[i]) == enPrimeNotPrime::prime)
        {
            ArrDistenation[counter] = ArrSource[i];
            counter++;
        }
    }
 arr2Length = --counter;
}

void PrintArray(int arr[100], int ArrLength) {
    for (int i = 0; i < ArrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    srand((unsigned)time(NULL));


    int arr[100], ArrLength;
    FillRandomNumOfArray(arr, ArrLength);

    int arr2[100],arr2Length = 0;
    copyOnlyPrimeNumber(arr, arr2, ArrLength ,arr2Length);

cout << "array 1 element : \n";
    PrintArray(arr, ArrLength);

 cout << "\nall prime number in an array two : \n";
    PrintArray(arr2, arr2Length);
    return 0;
}
