#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

int cp,n;
cin>>cp;
while(cp--) {
cin>>n;
if(n%2==0&& n>1){
cout<<"0 ";
for (int i = n-1; i > 0; i--)
{
cout<<i<<" ";
}

}

if(n%2!=0 && n>2){
cout<<"1 0 2 ";
for (int i = n-1; i > 2; i--)
{
    cout<<i<<" ";
}

}

if(n==1){
    cout<<"1 ";
}



cout<<"\n";
}

return 0;
}