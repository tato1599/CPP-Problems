#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

vector<int> v1;
int n,z,x;
cin>>n;
for (int i = 0; i < n; i++)
{
    cin>>z;
    v1.push_back(z);
}
cin>>x;
if (x==0)
{
    for(auto q : v1)
    {
        if(q%2==0){
            cout<< q << " ";
        }
    }
}else{
    for(auto q : v1)
    {
        if(q%2!=0){
            cout<< q << " ";
        }
    }
}


v1.clear();

return 0;
}