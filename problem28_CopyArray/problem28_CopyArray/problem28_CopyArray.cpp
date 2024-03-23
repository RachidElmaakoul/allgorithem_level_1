#include <iostream>
using namespace std;


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
void PrintArray(int arr[100], int& ArrLength) {
    for (int i = 0; i < ArrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void copyArray(int ArrSource[100],int ArrDistenation[100], int ArrLength) {
  
    for (int i = 0; i < ArrLength; i++)
    {
        ArrDistenation[i] = ArrSource[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));


    int arr[100], ArrLength;
    FillRandomNumOfArray(arr, ArrLength);


    cout << "array 1 element : \n";
    PrintArray(arr, ArrLength);
    cout << endl;

    int arr2[100];
    cout << "array 2 element aftaer copy : \n";
     copyArray(arr,arr2, ArrLength) ;
     PrintArray(arr2, ArrLength);
    return 0;
}
