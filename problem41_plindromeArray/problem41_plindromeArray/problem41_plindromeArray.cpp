
#include <iostream>
using namespace std;

void FillArray(int arr[6],int& length) {
     length = 6;
     arr[0] = 10;
     arr[1] = 20;
     arr[2] = 30;
     arr[3] = 30;
     arr[4] = 20;
     arr[5] = 10;
}
void PrintArray(int arr[6], int& length) {
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}

bool checkIfPalindromeArray(int arr[100], int Length) {

    for (int i = 0; i < Length/2  ; i++)
    {
        if (arr[i] != arr[Length - 1 - i])
            return false;
        
    }
    return true;
}

void PrintResult(int arr[6],int length) {
    if (checkIfPalindromeArray(arr,length) )
    {
        cout << "yes, this array is palindrome";
    }
    else
    {
        cout << "No, this array is Not a palindrome";
    }
    
}
int main()
{
    int arr[6], length;
    cout << "the main array : \n";
    FillArray(arr, length);
    PrintArray(arr ,length);
    cout << endl;

    PrintResult(arr, length);
   

}

