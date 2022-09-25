#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int cp, cont, corr, a, n;
    cin >> cp;
    while (cp--)
    {
        cont = 0;
        corr = 3;
        cin >> n;
        while (corr--)
        {
            cin >> a;
            if (a > n)
            {
                cont++;
            }
        }
        cout << cont << "\n";
    }

    return 0;
}