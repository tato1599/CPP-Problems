#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> v;
int valor,aux;
int busqueda(int cant){
    
    if(cant==1){
        valor = (v[0]-1);
    } 
    if(cant>1){
        for (int i = 0; i < v.size(); i++)
        {
          
            
        }
        
    }
    return valor;
}

int main()
{
    int k, c, n,kil;
    cin >> c >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> n;
        v.push_back(n);
    }

    sort(v.begin(), v.end());

    while (c--)
    {
        cin>>kil;
        cout<<busqueda(kil)<<endl;
    }

    v.clear();
    
    return 0;
}