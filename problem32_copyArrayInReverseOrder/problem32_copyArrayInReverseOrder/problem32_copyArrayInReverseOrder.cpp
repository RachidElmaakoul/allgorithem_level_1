
#include <iostream>
using  namespace std;

int randomNumbers(int from, int to) {
    int randnum = rand() % (to - from + 1) + from;
    return randnum;
}

void fillArray(int arr[100], int& Length) {
    cout << "how many element : \n";
    cin >> Length;
    for (int i = 0; i <= Length; i++)
        arr[i] = randomNumbers(1,100);
}



void PrintArray(int arr[100], int Length) {
    for (int i = 0; i < Length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void copyArrayInReverseOrder(int arr[100],int arr2[100], int Length) {
    
    for (int i = 0; i < Length; i++)
    {
        arr2[i] = arr[Length - 1 - i];
    }
}


int main()
{
    srand((unsigned)time(NULL));

    int arr[100],arr2[100], Length;
    fillArray(arr, Length);

    copyArrayInReverseOrder(arr, arr2, Length);

    cout << "\narray element before reverse : \n";
    PrintArray(arr, Length);

    cout << "\narray element after reverse : \n";
    PrintArray(arr2, Length);

    return 0;

}

