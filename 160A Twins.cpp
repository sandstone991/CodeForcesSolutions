#include <iostream>
using namespace std;
int main()
{
    //Azzam
    int numberOfCoins, coin, biggerShare = 0, lesserShare = 0, answer = 0;
    int freqCoin[101]{};
    int coins[100]{};
    cin >> numberOfCoins;
    for (int i = 0; i < numberOfCoins; i++)
    {
        cin >> coin;
        lesserShare += coin;
        freqCoin[coin]++;
        coins[i] = coin;
    }

    int biggestCoin = 100;
    while (biggerShare <= lesserShare)
    {
        if (freqCoin[biggestCoin] != 0)
        {
            freqCoin[biggestCoin]--;
            biggerShare += biggestCoin;
            lesserShare -= biggestCoin;
            answer++;
        }
        else
        {
            biggestCoin--;
        }
    }
    cout << answer;
