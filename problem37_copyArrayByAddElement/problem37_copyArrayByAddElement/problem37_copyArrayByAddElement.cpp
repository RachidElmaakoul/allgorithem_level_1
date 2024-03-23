#include <iostream>
using namespace std;

int randomNumbers(int from, int to) {
    int random = rand() % (to - from + 1) + from;
    return random;
}
int readNumber() {
    int number = 0;
    cout << "please enter a positive number : ";
    cin >> number;
    return number;
}

void FillArray(int arr[100],int& ArrLength) {
    for (int i = 0; i < ArrLength; i++)
    {
        arr[i] = randomNumbers(1, 100);
    }
}
void PrintArray(int arr[100],int ArrLength) {
    for (int i = 0; i < ArrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void AddElementInArray(int number, int arr[100], int& ArrLength) {
ArrLength++;
arr[ArrLength - 1] = number;
}

void fillArraybyAddElement(int sourceArr[100],int secondArr[100] , int ArrLength,int lengthArr2) {
    for (int i = 0; i < ArrLength; i++)
    {
        AddElementInArray(sourceArr[i], secondArr, lengthArr2);
    }
}


int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength = 0 , arr2[100],arr2Length = 0;
    arrLength = readNumber();
    cout << endl;
    
    FillArray(arr, arrLength);
fillArraybyAddElement(arr, arr2, arrLength, arr2Length);

cout << "array 1 element : \n";
    PrintArray(arr, arrLength);


  cout << "\narray 2 element : \n";
 PrintArray(arr2, arrLength);
    
  
 
  

  






}

