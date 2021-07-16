    #include <iostream>
    using namespace std;
    int main()
    {
        string s;
        string w = "hello";
        unsigned int cntr = 0;
        unsigned int i = 0;
        cin >> s;
        for (; i < s.length(); i++)
        {
            if (s[i] == w[cntr])
            {
                cntr++;
            }
        }
        if (cntr == 5)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
