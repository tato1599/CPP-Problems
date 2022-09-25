#include <iostream>
#include <string>

using namespace std;

int main()
{
    int cp, n, m;
    cin >> cp;
    while (cp--)
    {

        n = 0;
        m = 0;
        cin >> n >> m;
        n -= m;
        while (m--)
        {
            cout << 'a';
        }

        while (n > 0)
        {
            for (char i = 'c'; i >= 'a'; i--)
            {
                if (n > 0)
                {
                    cout << i;
                    n--;
                }
                else
                {
                    break;
                }
            }
        }

        cout << endl;
    }

    return 0;
}