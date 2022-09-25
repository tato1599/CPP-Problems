#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    int cp,n,c,sum;
    cin>>cp;
    while (cp--)
    {
        bool t =  true;
        int res = 0;
        sum=0;
        cin>> c;
        for (int i = 0; i < c; i++)
        {
            cin>>n;
            sum+=n;
        }

         if(sum<=0){
                res = 1;
            
            }else if(sum>0 && sum >= c){
        res = (sum-c);
        } else{
            res = 1;
        }

        cout<< res << endl;
      
        
    }
    

    return 0;
}