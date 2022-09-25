#include <iostream>
#include <map>

using namespace std;

int main(){
    int ts,tr,n;
    cin>> ts;
    map<int,int> mapa;
    while (ts--)
    {
        cin>>tr;
        for (int i = 0; i < tr; i++)
        {
        int nn;
		cin >> n;
		n = n%10; 
		mapa[n]++;
        }

        for(auto x: mapa){
            if(x.second>3){
                x.second--;
            }
            cout<< x.first << " " << x.second << endl;
        }
         
         cout<< endl<<endl;
         mapa.clear();
    }
    
    return 0;
}