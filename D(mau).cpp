#include "bits/stdc++.h"
using namespace std;
#define endl '\n'
template<class T> class disjointSetUnion{
private:
    T* size;
    T* parent;
    T maxLen,currLen;
public: 
    disjointSetUnion(T tam);
    void make_set(T elem);
    T find_set(T elem);
    void union_sets(T a, T b);
    ~disjointSetUnion();
};
template<class T> disjointSetUnion<T>::disjointSetUnion(T tam){
    size = new T[tam+4]();
    parent = new T[tam+4]();
    maxLen = tam+2;
    currLen= 0;
    
}
template<class T> void disjointSetUnion<T>::make_set(T elem){
    parent[elem] = elem;
    size[elem]= 1;
    currLen++;
}
template<class T> T disjointSetUnion<T>::find_set(T elem){
    if(elem == parent[elem]){
        return elem;
    }
    return parent[elem] = find_set(parent[elem]);
}   
template<class T> void disjointSetUnion<T>::union_sets(T a, T b){
    a = find_set(a);
    b = find_set(b);
    if(a==b){
        return;
    }
    currLen--;
    if(size[a]<size[b]){
        parent[a] = b;
        size[b] += size[a]; 
    }else{
        parent[b] = a;
        size[a] += size[b];
    }
} 
template<class T> disjointSetUnion<T>::~disjointSetUnion(){
    delete[] size;
    delete[] parent;
    size = nullptr;
    parent  = nullptr;
    currLen = 0;
    maxLen = 0;
}   
struct arista{
    long long int inicio,fin,costo,dist;
};
int n;
#define GS 100010
vector<arista> graph[GS];
vector<arista> arr;
int costo[GS];
bitset<GS> vis;
void bfs(int p){
    for(int i = 0; i<GS; i++){
        costo[i] = 10000000;
    }
    costo[1] = 0;
    vis.reset();
    queue<int> fringe;
    int curr;
    fringe.push(p);
    while(fringe.size()){
        curr = fringe.front();
        fringe.pop();
        if(!vis[curr]){
            vis[curr] = 1;
            for(int i = 0; i<graph[curr].size(); i++){
                costo[graph[curr][i].fin] = min(costo[graph[curr][i].fin], costo[curr]+1);
                fringe.push(graph[curr][i].fin);
            }
        }
    }
}
bool comp(const arista a, const arista b){
    if(a.dist == b.dist){
        return a.costo<b.costo;
    }
    return a.dist<b.dist;
}
int main(){
    ios_base::sync_with_stdio(false);cout.tie(NULL); cin.tie(NULL);
    int e,a;
    arista aux;
    cin>>n>>e;
    while(e--){
        cin>>aux.inicio>>aux.fin>>aux.costo;
        graph[aux.inicio].push_back(aux);
        a = aux.inicio;
        aux.inicio = aux.fin;
        aux.fin = a;
        graph[aux.inicio].push_back(aux);
    }
    bfs(1);
    for(int r = 0; r<GS; r++){
        for(int i = 0; i<graph[r].size();i++){
            if((costo[graph[r][i].inicio]+1) == costo[graph[r][i].fin]){
                graph[r][i].dist = (costo[graph[r][i].inicio]+1);
                graph[r][i].costo = graph[r][i].costo*graph[r][i].dist;
                arr.push_back(graph[r][i]);
            }
        }
    }
    sort(arr.begin(),arr.end(),comp);
    e = 0;

    disjointSetUnion<int>dsu(n+1);
    for(int i = 1; i<=n; i++){
        dsu.make_set(i);
    }
    
    long long int res = 0;
    for(arista elem: arr){
        if(e==n-1){
            break;
        }
        if(dsu.find_set(elem.inicio) != dsu.find_set(elem.fin)){
            dsu.union_sets(elem.inicio,elem.fin);
            e++;
            res+=(long long int)elem.costo;
        }
    }
    cout<<res<<endl;
    return 0;
}