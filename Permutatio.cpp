#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    int cp, n, r,j,l;
    cin >> cp;
    while (cp--)
    {
        
        cin >> n;
        for (int i = 0; i < n * 2; i++)
        {
            cin >> r;
            v.push_back(r);
        }
        
        bool t = false;
        cout << v[0] << " ";
        
        for (int i = 0; i < v.size(); i++)
        {
            while(j<i){
                if(v[i]==v[j] ){
                 j++;
                 
                }
                
            }
            if(n>0){
            cout<< v[i] << " ";
            n--;}
        }
        
        j=0;
        cout << endl;
        v.clear();
        n = 0;
    }

    return 0;
}