#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int target = 8;
    bool found = false;

    for (int i = 0; i < 8; i++)
    {
        if (arr[i] == target)
        {
            cout << "We got the target." << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "We have not got the target." << endl;
    }

    return 0;
}
