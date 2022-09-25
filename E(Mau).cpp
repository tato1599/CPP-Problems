#include "bits/stdc++.h"
using namespace std;
#define endl '\n'
long long int ceilfraccion(long long int num, long long int den){
    return (num+den-1)/den;
}
int main(){
    ios_base::sync_with_stdio(false);cout.tie(NULL); cin.tie(NULL);
    long long int c,t;
    cin>>c>>t;
    cout<<ceilfraccion(c,t)<<endl;
    return 0;
}