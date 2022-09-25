#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int x, n, aux = 101, suma=0 ;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> n;
        suma += n;
        if (n < aux)
        {
            aux = n;
        }
    }
    suma -= aux;
    cout << suma;
    return 0;
}