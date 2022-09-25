#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int cp, cont, a, b, c;
    cin >> cont;
    c = 0;
    for (int i = 0; i < cont; i++)
    {
        b = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> a;
            b += a;
        }
        if (b > 1)
        {
            c = c + 1;
        }
    }

    cout << c;
    return 0;
}