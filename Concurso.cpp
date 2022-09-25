#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> num;
    vector<string> letra;
    int n;
    char l[50];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> l;
        if (isdigit(l[0]))
        {
            int numero = atoi(l);
            num.push_back(numero);
        }
        else
        {
            letra.push_back(l);
        }
    }
    sort(num.begin(), num.end());
    sort(letra.begin(), letra.end());

    for (auto a : letra)
    {
        cout << a << " ";
    }

    for (auto x : num)
    {
        cout << x << " ";
    }

    return 0;
}