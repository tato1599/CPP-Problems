#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int tc,n,ant,mayor=0,mayor2,num,dif;
    bool x;
    cin>>tc;
    for(int i=0; i<tc; i++)
    {
        ant=0,mayor=0,mayor2=0;
        x=false;
        cin>>n;
        if(n==1){
            cin>>num;
            cout<<"Case "<<i+1<<": "<<num<<endl;
            continue;
        }
        while (n--)
        {
            cin>>num;
            dif=num-ant;
            ant=num;
            //cout<<num<<" "<<dif<<" "<<ant<<endl;
            if(mayor<dif){
                mayor=dif;
                mayor2=mayor;
                continue;
            }
            if(mayor==dif && !x){
                mayor++;
                mayor2==mayor;
                x=true;
            }else{
                x=false;
            }
            if(mayor2==dif){
                mayor2--;
            }
            if(mayor2<dif){
                mayor++;
                mayor2=mayor;
            }
        }
        cout<<"Case "<<i+1<<": "<<mayor<<endl;
    }
    
    return 0;
}
