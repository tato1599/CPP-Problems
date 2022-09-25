#include <iostream>
#include <math.h>
#include <map>
#include <vector>
using namespace std; 


int main() {
	signed long long int res,aux,curr;
    int empleados;
    int dias;
    int e;
    int i;
    cin>>empleados;
    aux = 1;
    res = 0;
    for(i=0; i<=32;i++){
        res = (res|aux);
        aux = (aux<<1);
        
    }
    //111111111111111111111111111
    while(empleados--){
        cin>>dias;
        i = 1;
        curr=0;
        aux = 2;
        while (dias--){
            cin>>e;
            for(;i<e;i++){
                aux = aux*2;
            }
            curr = (curr|aux);
        }
        res = (res&curr);
    }
    aux = 2;
    for(i=1; i<=32;i++){
        if((res & aux)!=0){
            break;
        }
        aux = (aux<<1);
    }
    if(i == 32){
        i = -1;
    }
    cout<<i<<endl;
	return 0;
}
