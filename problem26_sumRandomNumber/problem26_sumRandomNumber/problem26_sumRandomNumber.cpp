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

int SumRandNumOfArray(int arr[100], int ArrLength) {

    int sum = 0;
    for (int i = 0; i < ArrLength; i++)
        sum += arr[i];
    
    return sum;
}


int main()
{
    srand((unsigned)time(NULL));


    int arr[100], ArrLength;
    FillRandomNumOfArray(arr, ArrLength);

    cout << "Original array : ";
    PrintArray(arr, ArrLength);
    cout << endl;

    cout << "the total of random number : ";
    cout << SumRandNumOfArray(arr, ArrLength) << endl;

    return 0;
}
