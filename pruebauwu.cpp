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
    vector<int> v;
    v.push_back(1);
    for (int x : v)
    {
        cout << x;
    }
    v.clear();

    return 0;
}