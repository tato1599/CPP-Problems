#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> v;
unsigned long long int pos(long long int time)
{
    unsigned long long int suma = 0;
    for (int i = 0; i < v.size(); i++)
    {
        suma += time / v[i];
    }
    return suma;
}
int main()
{
    int n, k, num;
    cin >> n >> k;
    while (n--)
    {
        cin >> num;
        v.push_back(num);
    }
    unsigned long long int l, r, m;
    l = 1;
    r = powl(10, 18);
    while (l < r)
    {
        m = (l + r) / 2;
        if (pos(m)>=k)
        {
            r = m;
        }
        else
        {
            l = m + 1;
        }
    }
    cout << l << endl;
    return 0;
}