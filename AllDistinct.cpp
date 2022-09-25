#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    vector<int> v, v2;
    map<int, int> mapa;
    int cp, n, a, ar, aux, aux2;
    
    cin >> cp;
    while (cp--)
    {
        bool r=false;
        ar = 0;
        aux = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
            mapa[a]++;
        }

        for (auto x : mapa)
        {
            v2.push_back(x.second);
        }
        for (int i = 0; i < v2.size() - 1; i++)
        {
            if (v2[i] != v2[i + 1])
            {
                ar = 1;
                break;
            }
        }

        if(v2.size()==1 && v.size()%2==0){
            r = true;
        }

        sort(v.begin(), v.end(), greater<int>());
        auto last = unique(v.begin(), v.end());
        v.erase(last, v.end());

        if (v.size() == 1 && r!=false)
        {
            ar = v.size();
        }
        cout << v.size() - ar << "\n";

        v.clear();
        v2.clear();
        mapa.clear();
    }

    return 0;
}