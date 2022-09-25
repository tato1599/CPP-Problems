#include "bits/stdc++.h"
#include <set>
#include <map>
using namespace std;
#define endl '\n'
bool comp(const int a, const int b){
    return abs(a)<abs(b);
}
int main(){
    ios_base::sync_with_stdio(false);cout.tie(NULL); cin.tie(NULL);
    map<int,set<int>> stud, insc;
    map<int,vector<int>> correcciones;
    set<int> ides;
    long long int sobra = 0, falta =0, studerr = 0;
    int n,m;
    int id,mats,e;
    cin>>n>>m;
    //lo que solicitaron
    while(n--){ 
        cin>>id;
        ides.insert(id);
        cin>>mats;
        while(mats--){
            cin>>e;
            stud[id].insert(e);
        }
    }
    //lo que les dieron
    while(m--){ 
        cin>>id;
        ides.insert(id);
        cin>>mats;
        while(mats--){
            cin>>e;
            insc[id].insert(e);
        }
    }

    //se comparan los que sobran
    for(int elem: ides){
        for(int i: insc[elem]){
            auto it = stud[elem].find(i);
            if(stud[elem].find(i)==stud[elem].end()){
                sobra++;
                correcciones[elem].push_back((-1)*i);
                //insc.erase(i);
            }
        }
    }
    //se comparan los que faltan
    for(int elem: ides){
        for(int i: stud[elem]){
            if(insc[elem].find(i)==insc[elem].end()){
                falta++;
                correcciones[elem].push_back(i);
            }
        }

    }

    vector<int> aux;
    //SALIDA
    for(int elem: ides){
        aux.clear();
        
        for(int i: correcciones[elem]){
            aux.push_back(i);
        }
        if(aux.size()==0){
            continue;
        }
        studerr++;
        sort(aux.begin(),aux.end(),comp);
        
        cout<<elem;
        for(int i : aux){
            if(i>=0){
                cout<<" +";
            }else{
                cout<<" "; 
            }
            cout<<i;
        }
        cout<<endl;
    }
    if(sobra+falta>0){
        cout<<"MISTAKES IN "<<studerr<<" STUDENTS: "<<sobra<<" NOT REQUESTED, "<<falta<<" MISSED"<<endl;
    }else{
        cout<<"GREAT WORK! NO MISTAKES FOUND!"<<endl;
    }
    return 0;
}