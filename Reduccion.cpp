#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    int cp;
    string numero,num,str,str1, finals;
    int n;
    int aux,aux2;
    int p = 10;
    cin>>cp;
    while (cp--)
    {
        aux = 0;
        aux2= 0;
        n = 0; finals = "";
        cin>>numero;
        for (int i = 0; i < numero.length()-1; i++)
        {
            str = numero[i]; 
            str1 = numero[i+1];
            aux = stoi(str);
            aux2 = stoi(str1);
            n = aux+aux2;
            num = to_string(n);
            finals+=num;
        }
        
      cout<<finals <<endl;
    }
    
    return 0;
}