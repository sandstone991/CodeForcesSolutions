#include <iostream>
using namespace std;
typedef long long ll;
int main()
{ //Azzam
    ll baseNumber;
    int temp;
    int cntr = 0;
    cin >> baseNumber;
    while (baseNumber != 0)
    {
        if ((temp = baseNumber % 10) == 4 || temp == 7)
        {
            cntr++;
        }
        baseNumber -= temp;
        baseNumber /= 10;
    }
    if (cntr == 4 || cntr == 7)
    {
        cout << "YES";
        return 0;
    }
    cout << "NO";
}