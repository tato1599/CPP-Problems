#include <iostream>
#include <cmath>
#include <string>
#include <bitset>
#include <algorithm>
#include <stdio.h>
#include <map>
#include <vector>
using namespace std;
vector<int> arr;
int inv,n,e;
void contarInv(int l, int r){
    if(l==r){
        return;
    }
    int m = l+r;
    m/=2;
    contarInv(l,m);
    contarInv(m+1,r);
    vector<int> ord;
    int l1 = l,l2=m+1;
    while(l1<=m && l2<=r){
        if(arr[l1]<=arr[l2]){
            ord.push_back(arr[l1]);
            l1++;
            continue;
        }
        if(arr[l1]>arr[l2]){
            ord.push_back(arr[l2]);
            inv += m+1-l1;
            l2++;
            continue;
        }
    }
    while(l1<=m){
        ord.push_back(arr[l1]);
        l1++;
    }
    while(l2<=r){
        ord.push_back(arr[l2]);
        l2++;
    }
    int ind = 0;
    for(; l<=r; l++){
        arr[l] = ord[ind];
        ind++;
    }

}
int main(){
    cin>>n;
    while(n--){
        cin>>e;
        arr.push_back(e);
    }
    n = arr.size();
    inv = 0;
    contarInv(0,n-1);
    cout<<inv<<endl;
return 0;

}