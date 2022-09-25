#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;
int main(){
 vector<int> v1,v2;
    int cp,na,nm,num,sum;
    cin>>cp;
    while(cp--){
     
        cin>>na>>nm;

        for (int i = 0; i < na; i++)
        {
            cin>>num;
            v1.push_back(num);
        }

         for (int j = 0; j < na; j++)
        {
           cin>>num;
           v2.push_back(num);
        }

       sort( v1.begin(), v1.end() );
       sort(v2.begin(), v2.end(),greater<int>());
     
        for (int i = 0; i<na ; i++)
        {
            if(v1[i]<v2[i] && nm > 0){
               // cout<<v1[i]<<" -->" << v2[i] << " " ;
                v1[i] = v2[i];
               
               nm--;
          
            }
               
            
         
        }
        for (int i = 0; i < na; i++)
        {
            
            sum+= v1[i];
        }
        
        cout<< sum;
cout<<endl;
v1.clear();
v2.clear();
nm=0;
na=0;
sum =0;
    }
    return 0;
}