#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    vector<int> v;
    int x,y,z;
    cin>>x;

    for (int i = 0; i < x; i++)
    {
        cin>>y;
        v.push_back(y);
    }

    cin>>z;

    for(auto q : v)
    {
        if(q%z==0){
            cout<<q << " ";
        }else{
            cout<<"X ";
        }
    }
    v.clear();
    
    return 0;
}