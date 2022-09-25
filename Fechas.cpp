#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;
int main(){
ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

string fecha;

while (cin >> fecha)
{   
    int n =0;
    string s="";
    s+=fecha[fecha.length()-2];
    s+=fecha[fecha.length()-1];
    n = stoi(s);
    if(n<74 && n<100){
        n+=2000;
    }else{
        n+=1900;
    }
    for (int i = 0; i < fecha.length()-2; i++)
    {
        cout<<fecha[i];
    }
    cout<<n;
    cout<<"\n";
}


return 0;
}