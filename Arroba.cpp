#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int n;
    cin>>n;
    int y=(n-1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            /* code */
            if ((i==j)||((i+j)==y))
            {
                cout<<"@";
            }else{
                cout<<" ";
            }
            
        }
        cout<<"\n";
    }
    
    
    return 0;
}