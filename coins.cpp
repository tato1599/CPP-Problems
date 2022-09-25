#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v;
    int num,c,a;
    cin>>c>>a;
    for (int i = 0; i < c; i++)
    {
        cin>>num;
        v.push_back(num);
    }

    sort(v.begin(),v.end());

    
    
    return 0;
}