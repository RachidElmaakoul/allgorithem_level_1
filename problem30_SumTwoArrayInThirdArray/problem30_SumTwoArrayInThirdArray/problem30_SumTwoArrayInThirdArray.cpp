#include <iostream>
using namespace std;



int randomNumbers(int from, int to) {
    int RanDom = int(rand() % (to - from + 1) + from);
    return RanDom;
}

int readPositiveNumber(string Message) {
    int number;
    do
    {
      cout << Message;
      cin >> number;
    } while (number <= 0);
    return number;
}


void FillRandomNumOfArray(int arr[100], int& ArrLength) {
    for (int i = 0; i < ArrLength; i++)
    {
        arr[i] = randomNumbers(1, 100);
    }
}

void SumTwoArrayInThird(int arr[100],int arr2[100], int arr3[100], int ArrLength) {
    for (int i = 0; i < ArrLength; i++)
    {
       arr3[i] = arr[i] + arr2[i];
    }
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

    int arr[100],arr2[100],arr3[100];
    int ArrLength =  readPositiveNumber("how many element : ");

    FillRandomNumOfArray(arr, ArrLength);
    FillRandomNumOfArray(arr2, ArrLength);

    SumTwoArrayInThird(arr, arr2,arr3, ArrLength);

    cout << "array 1 element : \n";
    PrintArray(arr, ArrLength);

    cout << "\narray 2 element : \n";
    PrintArray(arr2, ArrLength);

    cout << "\nsum number of 2 array : \n";
    PrintArray(arr3, ArrLength);
    


    return 0;
}
