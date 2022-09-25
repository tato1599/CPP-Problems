#include <iostream>

using namespace std;

int main(){

int x , n,f;
int suma;
cin>> n; cin>> x;
int array[n];

for(int i = 0; i<n ; i++){
   	cin>> f;
   	array[i] = f; 
}
for(int i = 0; i < n-1; i++){
	for(int j = 1; j<n;j++){
		suma = array[i] + array[j];
		if(suma == x ){
			cout << i+1 << " "<< j+1;
			break;
		}
	}
	if(suma == x){
		break;
	}
}
if(suma != x){
	cout<<"-1";
}

return 0;
}
