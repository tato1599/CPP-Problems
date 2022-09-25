#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2;
    int cp, n, m, num1, num2, cont;
    cin >> cp;
    while (cp--)
    {

        num1 = 0;
        num2 = 0;
        cin >> n >> m;
        int suma = m;
        cont = n;
        for (int i = 0; i < n; i++)
        {
            cin >> num1;
            v1.push_back(num1);
        }

        for (int i = 0; i < n; i++)
        {
            cin >> num2;
            v2.push_back(num2);
        }
        while (cont--)
        {
            for (int i = 0; i < v1.size(); i++)
            {
                if (suma >= v1[i])
                {
                    suma += v2[i];
                    v1.erase(v1.begin()+i);
                    v2.erase(v2.begin()+i);
                }
            }
        }
        cout << suma << endl;
        suma = 0;
        n = 0;
        m = 0;
        v2.clear();
        v1.clear();
    }

    return 0;
}