#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    vector<int> v;
    map<char, int> mapa;
    int cont = 1;
    for (char i = 'a'; i <= 'z'; i++)
    {
        mapa[i] += cont;
        cont++;
    }
    string pal;
    bool t = false;
    int cp, num, sum, val;
    cin >> cp;
    while (cp--)
    {

        cin >> pal >> num;
        sum = num;
        for (int i = 0; i < pal.length(); i++)
        {
            for (auto x : mapa)
            {
                if (pal[i] == x.first)
                {
                    val = x.second;
                    v.push_back(val);
                }
            }
        }

        for (int i = 0; i < v.size(); i++)
        {
            for (int j = v.size(); j > 1; i--)
            {
                if (v[i] <= sum)
                {
                    cout << pal[i];
                    sum -= v[i];
                }
            }
        }

        cout << endl;

        v.clear();
    }

    return 0;
}
