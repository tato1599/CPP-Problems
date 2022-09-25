#include <iostream>
#include <string.h>
#include <math.h>
#include <stdio.h>
using namespace std;

int main(){

int num = 1223;
string buscar = "3";

string num2 = to_string(num);
int l = log10(num) + 1;
cout<<"Numero " << num2 << endl;
cout<<"Longitud " << l << endl;
//si pos == longitud;
int pos = num2.find(buscar) + 1;
int posFina = num2.find_last_of(num);
cout << "numero encontrado en pos " << pos  << endl ;
cout << "numero final es " << posFina<<endl;
cout<< "longitud cadena es " << num2.length();


    return 0;
}