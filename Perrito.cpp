#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int con=3;
    int h1, h2, h3, h4;
    int hueso1 = 0;
    int hueso2 = 0;
    cin >> h1 >> h2;
    cin >> h3 >> h4;
   
    if(h1>h3){
        hueso1++;
    }else{
        hueso2++;
    }if(h2>h4){
        hueso1++;
    }else{
        hueso2++;
    }

    if(hueso1==2){
        cout<<"Hueso 1";
    }else if(hueso2==2){
        cout<<"Hueso 2";
    }else{
        cout<<"Perrito confundido :(";
    }

    return 0;
}