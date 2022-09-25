#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;
int donde(vector<vector<char>> v)
{
    priority_queue
    for (int i = 1; i < 8; i++)
    {
        for (int j = 1; j < 8; j++)
        {
            if (v[i - 1][j - 1] == '#' && v[i - 1][j + 1] == '#')
            {
                if (v[i + 1][j + 1] == '#' && v[i + 1][j - 1] == '#')
                {
                    cout << i + 1 << " " << j + 1 << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    int tc;
    cin >> tc; 
    
    string x;
    vector<vector<char>> v;
    vector<char> aux;
    while (tc--)
    {
        v.clear();
        for (int i = 0; i < 8; i++)
        {
            cin >> x;
            aux.clear();
            for (char a : x)
            {
                aux.push_back(a);
            }
            v.push_back(aux);
        }
        donde(v);
    }

    return 0;
}