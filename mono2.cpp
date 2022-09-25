#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> saltos;
    int aux, cp, n, sa;
    cin >> cp;
    while (cp--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> sa;
            saltos.push_back(sa);
        }
       
    }
    return 0;
}