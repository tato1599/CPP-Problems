#include <iostream>
#include <vector>

using namespace std;

int main() {
    int cp,num,n;
    vector<int> v;
    cin>>cp;
    while (cp--)
    {
        cin>>n;
        for (int i = 0; i < 3; i++)
        {
            cin>>num;
            if(num==0){
                num=n;
            }
            v.push_back(num);
        }

        if((v[0]== 3 && v[1]==1 &&v[2]== 2) || (v[0]== 2 && v[1]==3 &&v[2]== 1) ){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        

        v.clear();
        
    }
    
    return 0;
}