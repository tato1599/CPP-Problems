#include <iostream>
#include <numeric>

using namespace std;

int main(){
    int n;
    int num,aux;
    int c=4;
    n=0;
    cin >> n;
    aux = n*(n+1);
    while(aux % 2 == 0 && c % 2 == 0){
        aux/=2;
        c/=2;
    }
    cout<<aux<< "/"<<c<<endl;
    return 0;
}