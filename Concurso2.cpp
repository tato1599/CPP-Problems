#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
string c;
char a, b;
int contador=0;
cin>>c>>a>>b;
for (int i = 0; i < c.length() ; i++)
{
    if(c[i]==a){
        for (int j = i; j < c.length(); j++)
        {
            if(c[j] == b){
                contador++;
            }
        }
    }
}

cout<<contador;

return 0;
}