
#include <cstdlib>
#include <iostream>
using namespace std;

int RandomNubers(int from ,int To) {
    int randomNumber = rand() % (To - from + 1) + from;
    return randomNumber;
}

int main()
{
    srand((unsigned)time(NULL));
    for (int i = 0; i < 3; i++)
    {
        cout << RandomNubers(1, 10) << endl;
    }


    return 0;
}