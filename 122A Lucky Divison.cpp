#include <iostream>
using namespace std;
int main()
{
    int num;
    int flag = 0;
    cin >> num;
    int arr[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    for (unsigned int i = 0; i < 14; i++)
    {
        if (num % arr[i] == 0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}