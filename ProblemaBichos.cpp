#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
     //int b,d;
        
        //cin>>b>>d;

       
        int res = 0;
        
        for (int i = 1; i <= 5; i++) {
            res+=1;
            if(i>0){
                res += 5;
            }
                if(i>1){
                    res+=22;
                }if(i>2){
                    res+=128;
                }
               cout<<res<<endl;
            
        }
    
    return 0;
}