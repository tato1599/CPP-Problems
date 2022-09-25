#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
int cmp(pair<string,int> a, pair<string,int> b){
    if(a.second==b.second){
    return a.first<b.first;
    }
    return a.second>b.second;
}
int main()
{
    map<string, int> mapa;
    int cp, pc;
    string palabra;
    cin >> cp >> pc;
    for (int i = 0; i < cp; i++)
    {
        cin >> palabra;
        mapa[palabra]++;
    }

    vector <pair<string,int> > v(mapa.begin(), mapa.end() );

    sort( v.begin() , v.end(), cmp );
    for (int i = 0; i<pc; i++)
    {
        cout<< v[i].first<<" " << v[i].second<<endl;
    }
    
 
 return 0;
}