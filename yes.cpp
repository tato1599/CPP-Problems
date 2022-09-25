#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    // yes Yes YEs YES yEs yES yeS YeS
string yes;
int cp;
cin>>cp;
while(cp--) {
    
    cin>>yes;
   
    yes [0] = tolower(yes[0]);
    yes [1] = tolower(yes[1]);
    yes [2] = tolower(yes[2]);
    
    if(yes == "yes"){
        cout<< "YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

return 0;
}