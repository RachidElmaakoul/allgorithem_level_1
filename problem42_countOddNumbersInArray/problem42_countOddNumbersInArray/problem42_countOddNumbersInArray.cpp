
#include <iostream>
using namespace std;

int RandomNumbers(int from, int to) {
    int Random = rand() % (to - from + 1) + from;
    return Random;
}
void FillArrayWithRandNumbers(int arr[100], int& length) {
    cout << "please enter how many element do you want : \n";
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        arr[i] = RandomNumbers(1, 100);
    }
}
void PrintArray(int arr[100], int length) {
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int OddCount(int arr[100], int length) {
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] % 2 != 0)
            count++;
    }
    return count;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], length = 0;
    FillArrayWithRandNumbers(arr, length);

    cout << "\n array 1 element \n";
    PrintArray(arr, length);

    cout << "\nodd number in array is : " ;
   cout << OddCount(arr, length);
    cout << endl;

}

