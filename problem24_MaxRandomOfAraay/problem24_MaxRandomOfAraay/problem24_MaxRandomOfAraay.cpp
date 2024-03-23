
#include <iostream>
using namespace std;


int randomOfNumber(int from,int to) {
    int random = rand() % (to - from + 1) + from;
    return random;
}
void FillArrayOfRandNum(int arr[100] , int& arrLength) {
    cout << "please enter how many random number do you want : ";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = randomOfNumber(1, 100);
    }
}
void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int checkMaxNumOfArray(int arr[100], int arrLength) {
    int maxNum = arr[0];
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] > maxNum)
            maxNum = arr[i];
    }
 return maxNum;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrLength;

    FillArrayOfRandNum(arr, arrLength);
    cout << "\noriginal array : ";
    PrintArray(arr, arrLength);

  cout << "\nthe freater number of array is : " << checkMaxNumOfArray(arr, arrLength) << endl;
}

