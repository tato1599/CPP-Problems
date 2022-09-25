#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
string num;
int cp,n,sum;
cin>>cp;
while(cp--) {
    sum = 0;
cin>>n;
num="";
for (int i = 9; i > 0; i--)
{
    if(i<=n && (sum+i)<=n){
        sum+=i;
        num+= to_string(i);
    }
}
sort(num.begin(),num.end());
 cout<<num;
cout<<endl;



}

return 0;
}