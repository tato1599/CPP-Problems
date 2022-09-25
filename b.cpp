#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

bitset<32> b;
int x;
cin>>x;

b = x;
string r;
r = b.to_string();
for (int i = r ; i < r.length(); i++)
{
    cout<<r[i];
}



return 0;
}