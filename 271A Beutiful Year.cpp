#include <iostream>
using namespace std;
int main()
{
    int year;

    cin >> year;
    year++;
    while (1)
    {
        int tempYear = year;
        int yearFreq[10]{};
        while (tempYear != 0)
        {
            int lastDigit = tempYear % 10;
            yearFreq[lastDigit]++;
            tempYear /= 10;
        }
        int isDistinct = 0;
        for (int i = 0; i < 10; i++)
        {
            if (yearFreq[i] > 1)
            {
                break;
            }
            else
            {
                isDistinct++;
            }
        }
        if (isDistinct == 10)
        {
            break;
        }
        year++;
    }
    cout << year;
}