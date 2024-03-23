
#include <iostream>
using  namespace std;

int randomNumbers(int from, int to) {
    int randnum = rand() % (to - from + 1) + from;
    return randnum;
}

void fillArray(int arr[100],int& Length) {
    cout << "how many element : \n";
    cin >> Length;
    for (int i = 0; i <= Length; i++)
          arr[i] =  i + 1;
}

void swap(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void shuffleNumners(int arr[100], int Length) {
    for (int i = 0; i < Length; i++)
        swap(arr[randomNumbers(1, Length) - 1], arr[randomNumbers(1, Length) - 1]);
}

void PrintArray(int arr[100],int Length) {
    for (int i = 0; i < Length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));
   
    int arr[100], Length;
    fillArray(arr, Length);

    cout << "\narray element before shuffle : \n";
    PrintArray(arr, Length);
    
    shuffleNumners(arr, Length);
    cout << "\narray element after shuffle : \n";
    PrintArray(arr, Length);
}

