#include<iostream>
#include<string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int cp;
    string yes;
    cin>>cp;
    while(cp--){
        cin>>yes;
        if(toupper(yes[0])=='Y' && toupper(yes[1])=='E' && toupper(yes[2])=='S'){
            cout<<"YES";            
        }else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}
