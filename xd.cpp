#include <iostream>

using namespace std;

int main(){
	
	int n,num,cont;
	cin>> n;
   int o[n];
   for(int i = 0; i<n; i++){
   cin>> num;
   o[i] = num;	
   }
   
   for(int i = 0; i<n; i++){
   	cont=0;
   	for(int j = 1 ; j<=o[i]; j++ ){
   		if(j<10){
   			cont++;
		   }else if(j%11==0){
		   	cont++;
		   }
		   
	   }
	   cout<<cont<<endl;
   }
   
	
}
