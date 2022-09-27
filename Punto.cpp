#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    vector<int> v;

    int x,z,y,res=0;
    cin>>x;
    
    for (int i = 0; i < x; i++)
    {
        cin>>z;
        v.push_back(z);
    }

    for (int i = 0; i < x; i++)
    {
        cin>>y;
        res+=(y*v[i]);
    }

    cout<<res;
   


    
    
    return 0;
}