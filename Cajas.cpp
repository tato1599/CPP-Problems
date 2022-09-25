#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

vector<pair<int,int>> v;
int cp,n,m,c;
cin>>c;
while(c--) {
    cin>>cp;
while(cp--) {

cin>>n>>m;
v.push_back(make_pair(n,m));

}

for (int i = 0; i < v.size(); i++)
{
     cout << "(" << v.at(i).first << ","
            << v.at(i).second << ")" << "; ";
}

cout<<"\n";

v.clear();

}
return 0;
}