#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    ll k;
    cin >> n >> k;
    ll oddNumber;
    ll answer;
    if (n % 2 == 0)
    {
        oddNumber = n / 2;
    }
    else
    {
        oddNumber = n / 2 + 1;
    }
    if (k > oddNumber)
    {
        answer = (k - oddNumber) * 2;
    }
    else
    {
        answer = k * 2 - 1;
    }
    cout << answer;
}