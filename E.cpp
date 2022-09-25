#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    double n, m;

    cin>>n>>m;

    if(n<=m){
        cout<<1;
    }else{
        string r =  to_string(ceil(n/m));
        cout<< r;
    }

    return 0;
}