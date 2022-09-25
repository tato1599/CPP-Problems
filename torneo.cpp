#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int cp, n, num1, num2;
    cin >> cp;
    while (cp--)
    {
        num1 = 0;
        num2 = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> n;
            v.push_back(n);
        }

        if (v[0] > v[1])
        {
            num1 = v[0];
        }
        else
        {
            num1 = v[1];
        }

        if (v[2] > v[3])
        {
            num2 = v[2];
        }
        else
        {
            num2 = v[3];
        }

        sort(v.begin(), v.end());

        if((num2 == v[2] || num2==v[3]) && (num1 == v[2] || num1==v[3])){
            cout<< "YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
        

        v.clear();
    }
}