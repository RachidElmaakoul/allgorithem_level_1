#include <iostream>
using namespace std;


int randomNumbers(int from, int to) {
    int RanDom = int(rand() % (to - from + 1) + from);
    return RanDom;
}
void GetRandomNumOfArray(int arr[100],int& ArrLength) {
    cout << "please enter many random number : ";
    cin >> ArrLength;
    

    for (int i = 0; i < ArrLength; i++)
    {
         arr[i] =  randomNumbers(1, 100);
    }
}
void PrintArray(int arr[100],int& ArrLength) {
    for (int i = 0; i < ArrLength; i++)
    {
        cout <<  arr[i] << " ";
    }
    cout << endl;
}

int GetMinRandNumOfArray(int arr[100],int ArrLength) {
    int MinNum = arr[0];
    for (int i = 0; i < ArrLength; i++)
    {
        if (arr[i] < MinNum)
            MinNum = arr[i];
    }
    return MinNum;
}


int main()
{
    srand((unsigned)time(NULL));
    

    int arr[100], ArrLength;
    GetRandomNumOfArray(arr, ArrLength);

    cout << "Original array : ";
    PrintArray(arr, ArrLength);
    cout << endl;

    cout << "the min number of array is : ";
  cout <<  GetMinRandNumOfArray(arr, ArrLength);

  return 0;
}
