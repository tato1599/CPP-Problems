#include <iostream>
#include <cmath>
#include <string>
#include <bitset>
#include <algorithm>
#include <stdio.h>
#include <map>
#include <vector>
#include <queue>
using namespace std;
struct ciudad{
    int hab;
    int casillas;
    int casillaMasOcupada;
};
//num/den
int ceilFraccion(int num, int den){
    return (num+den-1)/den;
}
struct comp{
    bool operator()(const ciudad& a, const ciudad& b){
        return a.casillaMasOcupada<b.casillaMasOcupada;
    }
};
int main(){
    ciudad aux;
    priority_queue<ciudad,vector<ciudad>,comp> sacar; 
    int n,c;
    cin>>n>>c;
    for(int i = 0; i<n; i++){
        cin>>aux.hab;
        aux.casillaMasOcupada = aux.hab;
        aux.casillas = 1;
        sacar.push(aux);
    }
    c -= n;
    while (c--) {
        aux = sacar.top();
        sacar.pop();
        aux.casillas++;
        aux.casillaMasOcupada = ceilFraccion(aux.hab,aux.casillas);
        sacar.push(aux);
    }
    cout<<sacar.top().casillaMasOcupada<<endl;
    return 0;
}