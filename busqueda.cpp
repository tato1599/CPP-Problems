#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;

#pragma region leer
void leer( int n, int num, int m)
{
    map<int, int> mapa;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        mapa[num]++;
        
    }
    string op;
    int sum=0;
   while(m--){
        cin >> op >> num;
        if (op == "CUENTA")
        {
            cout << mapa[num] << endl;
        }
        else
        {
            sum+=num;
            map<int,int>temp=mapa;
            mapa.clear();
            for(auto x:temp){
                mapa[x.first+sum]=x.second;
            }
        }
    }
}

#pragma endregion

#pragma region main
    int main()
    {
        int n, m, num;
        cin >> n >> m;
        leer( n, num, m);

        return 0;
    }

#pragma endregion