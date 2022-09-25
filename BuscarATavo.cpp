#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
string c;
int n=0;
getline(cin,c);

for (int i = 0; i < c.length() ; i++)
{
    if(c[i]=='*'){
        n++;
    }
}

if(n>=0 && n<=1){
cout<<"BIEN";
}if(n==2){
cout<<"HAPPY";
}if(n>=3){
cout<<"BUSCAR A TAVO";
}


return 0;
}