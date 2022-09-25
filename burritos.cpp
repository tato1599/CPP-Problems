#include <iostream>

using namespace std;

int main(){
	
	int F,N,b,d;
	int sabores[4];
	int burritos[N][4];
	int bandera[N][4];
	cin>>N;

	for(int i = 0; i<N; i++){
		for(int j = 0; j<4; j++){
			cout<< "fila " << i << " Columna " << j << " "; 
			cin>>b; // cantidad de burritos
			burritos[i][j]=b;
			cin>>d; // bandera
			bandera[i][j]=d;
		}
	}
	/*        ******Banderas********
	   0 = solo burrito del guisado que pidio
	   1 = cualquier burrito
	*/
	
	for(int i = 0; i<N; i++){
		for(int j = 0; j<4; j++){
			if(burritos[i][j]<sabores[j]){
				burritos[i][j] -= sabores[j];
			}else{
				if(bandera==0){
					cout<<"#quedamosMal";
					break;
				}else{
					for(int k = 0; k<N;k++){
						for(int l = 0; l<4;l++){
							if(burritos[k][l]>0){
								burritos[i][j]-=burritos[k][l];
								break;
							}
						}
					}
				}
			}
		}
		cout<<"\n";
	}
	
	return 0;
}
