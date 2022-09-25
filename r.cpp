#include <iostream>

using namespace std;



int main(){
	int z,n,ts,aux,sum;
	int c[50];
	cin>>z;
	while(z--){
		sum=0;
		cin>>n;
		for(int i = 0; i<n;i++){
			cin>>ts;
			c[i] = ts;
		}
		aux=c[0];
		for(int i = 0; i<n;i++){
			aux = min(aux,c[i]);
		}
		
		for(int i = 0; i<n;i++){
			int val = c[i];
			if(c[i]!=aux){
				for(int j = val ; j>aux;j--){
	                sum = sum+1;
	                c[j]-1;
				}
			}
		}
		cout<<sum<<endl;
	}
	
	return 0;
}
