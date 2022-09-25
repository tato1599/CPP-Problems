#include "bits/stdc++.h"
#include <math.h>
using namespace std;
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);cout.tie(NULL); cin.tie(NULL);
    long long int* tllizq;
    long long int* tllder;
    long long int* espera;
    long long int* distnext;
    long long int n;
    cin>>n;
    tllizq = new long long int[n]();
    tllder = new long long int[n]();
    espera = new long long int[n]();
    distnext = new long long int[n-1]();
    for(int i = 0; i<n-1; i++){
        cin>>distnext[i];
    }
    for(int i = 0; i<n; i++){
        cin>>espera[i];
    }


    long long int curr = 0;
    for(int i = 1;i<n; i++){
        curr+=espera[i-1]+distnext[i-1];
        tllizq[i] = curr;
    }
    curr = espera[n-1];
    for(int i = n-2;i>=0; i--){
        curr+=distnext[i];
        tllder[i] = curr;
        curr+=espera[i];
    }
    int ind = -1;
    long long int res = 0;
    long long int latestArrival,earliestDeparture;
    bool comp = false;
    bool c;
    for(int i = 0; i<n; i++){
        c = true;
        c = c && (tllizq[i] <= tllder[i]);
        c = c && (tllizq[i]+espera[i] >= tllder[i]);
        comp = comp||c;
        c = true;
        c = c && (tllder[i] <= tllizq[i]);
        c = c && (tllder[i]+espera[i] >= tllizq[i]);
        comp = comp||c;
        if(comp){
            ind = i;
            break;
        }
    }   
    if(ind !=-1){
        latestArrival = max(tllizq[ind],tllder[ind]);
        earliestDeparture = min(tllizq[ind],tllder[ind])+espera[ind];
        res = earliestDeparture-latestArrival;
    }
    cout<<res<<endl;
    return 0;
}