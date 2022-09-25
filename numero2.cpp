#include <iostream>
#include <cmath>
#include <string>
#include <bitset>
#include <algorithm>
#include <stdio.h>
#include <map>
#include <vector>
using namespace std;
int res,n,meta;
vector<int> arr;
void solve(int currInd,int currSum){
    if(currSum==meta){
        res++;
    }
    if(currInd>=n){
        return;
    }
    if(currSum>meta){
        return;
    }
    
    solve(currInd+1,currSum);
    solve(currInd+1,currSum+arr[currInd]);
}
int main(){
    int e;
    res = 0;
    cin>>n>>meta;
    while(n--){
        cin>>e;
        arr.push_back(e);
    }
    n = arr.size();
    solve(0,0);
    cout<<res<<endl;
    
return 0;

}