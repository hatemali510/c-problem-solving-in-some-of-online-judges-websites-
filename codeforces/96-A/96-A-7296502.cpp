#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int x = 1;
    for (int i = 1; i < s.length(); ++i)
    {
        if (s[i] == s[i - 1])
        {
            x += 1;
            if (x == 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            x = 1;
        }
    }

    cout << "NO" << endl;
    return 0;
}