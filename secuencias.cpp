#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int cp;
    cin >> cp;
    while (cp--)
    {
        string r;
        bool y = true;
        bool j = true;
        bool k = true;
        int l, m, g;
        string a, a2, b;
        cin >> l >> m;
        cin >> a >> b;
        g = l;
        a2 = a;
        if(a == b){
            cout<<"YES\n";
            y=false;
            k=false;
        }
        if(a.size()>1 && y){
        for (int i = 0; g > m; i++)
        {
            r = min(a2[0], a2[1]);
            a2.insert(2, r);
            a2.erase(0, 2);

            if (a2 == b)
            {
                j = false;
                k = false;
                cout << "YES\n";
                break;
            }
            g--;
        }

        if (j == true)
        {
            for (int i = 0; l > m; i++)
            {
                r = max(a[0], a[1]);
                a.insert(2, r);
                a.erase(0, 2);
                if (a == b)
                {

                    k = false;
                    cout << "YES\n";
                    break;
                }
                l--;
            }
        }
        }

        

        if (k)
        {
            cout << "NO\n";
        }
    }

    return 0;
}