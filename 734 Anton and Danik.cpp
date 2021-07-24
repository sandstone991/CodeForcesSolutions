#include <iostream>
using namespace std;
int main()
{
    int gamesNumber, antonWins = 0, danikWins = 0;
    string gameDetails;
    cin >> gamesNumber >> gameDetails;
    for (unsigned int i = 0; i < gamesNumber; i++)
    {
        if (gameDetails[i] == 'A')
        {
            antonWins++;
        }
        else
        {
            danikWins++;
        }
    }
    if (antonWins > danikWins)
    {
        cout << "Anton";
    }
    else if (antonWins < danikWins)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
}