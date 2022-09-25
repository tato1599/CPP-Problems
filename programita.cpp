#include <iostream>

using namespace std;

int main(){
    string op;
    int cp,res;
    cin>> cp;
    res=0;
    while (cp--)
    {
        cin>> op;
        if(op[0]=='+' || op[2]=='+'){
            res+=1;
        }else{
            res-=1;
        }
    }

    cout<< res << endl;
    
    return 0;
}