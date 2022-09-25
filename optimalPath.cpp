#include <iostream>
#include <new.h>
#include <stdlib.h>

using namespace std;
int **puntero_m;
int main(){
    int ts,n,m,a,b;
    unsigned long int sum = 1;
    unsigned long aux = 0;
    int c=1;
    cin>>ts;
    while(ts--){
        c=1;
        sum=0;
        aux=0;
        a =1;
        b=1;
        cin>>n;
        cin>>m;
        puntero_m = new int*[n]; 
        
        for (int i = 0; i < n; i++)
        {
            puntero_m[i] = new int[m];
        }

        for (int i = 0; i < n; i++)
        {
         for (int j = 0; j < m; j++)
         {
            *(*(puntero_m+i)+j) = c;
            c++;
         }
         
        }

         for (int i = 0; i < n; i++)
        {
            
         for (int j = 0; j < m; j++)
         {
            sum = a * b;
            aux += sum; 
           // cout <<sum <<" " << a <<" x " << b << endl;
            if(b<m){     
                b++;
                }
            if (a==n && b==m){
            break;
            }
         } 
         if (a==n && b==m){
            break;
         } a++;
         
        }
        cout<< aux<<endl; 
        for (int i = 0; i < n; i++)
        {
            delete[] puntero_m[i];
        }
         delete[] puntero_m;
        
    }


    return 0;
}
