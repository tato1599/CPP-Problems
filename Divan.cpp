#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int res;
    int cp, n, l, r, k, c, cont;
    cin >> cp;
    while (cp--)
    {
        cont = 0;
        cin >> n >> l >> r >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            v.push_back(c);
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] >= l && v[i] <= r)
            {
                if (k-v[i] >= 0)
                {
                    k -= v[i];
                    cont++;
                }
            }
        }

        cout << cont << endl;
        v.clear();
    }
}