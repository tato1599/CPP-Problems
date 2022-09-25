#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
vector<int> v;
vector<int> v2;
int n,m,q;
int aux=1000;
string w;
int a,s;
cin>>n>>m;

for (int i = 0; i < n; i++)
{
    cin>>q;
    v.push_back(q);
}

while (m--)
{
    cin>>w;
    cin>>a>>s;
    if(w=="C"){
        for (int i = a-1; i < s; i++)
        {
            v2.push_back(v[i]);
        }
        sort(v2.begin(),v2.end());

        cout<< v2[0] << " " << v2[v2.size()-1]<<"\n";
        v2.clear();
    }else if(w=="A"){
        v[a-1] = s;
    }
}

v.clear();

return 0;
}