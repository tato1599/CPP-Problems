#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    float x,y,z;
    cin>>x>>y>>z;
    float op1 =((2*x)+y)/z;
    float op2=(y*y*y)-z;
    float op3=(x+2*y+3*z)/(z-2*y-3*x);
    float res = (op1*op2)/((op3)+(x*x)+(z*z)); 
    cout.precision(7);
    cout<<res;
    return 0;
}