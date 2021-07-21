#include <iostream>
using namespace std;
int main()
{
    string str;
    string reversedStr;
    cin >> str >> reversedStr;
    int x = str.length();
    for (unsigned int i = 0; i < x; i++)
    {
        if (str[i] != reversedStr[x - i - 1])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}