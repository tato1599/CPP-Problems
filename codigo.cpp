#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

double n = -1.000;
double x = -6.000;
double res = n+x;

string s =to_string(res);

cout.precision(2);
cout<< s;

return 0;
}