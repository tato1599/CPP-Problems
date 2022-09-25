#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b){
int result = min(a, b); // Find Minimum of and b
while (result > 0) {
if (a % result == 0 && b % result == 0) {
break;
}
result--;
}
return result; // return gcd of and b
}

int main(){




return 0;
}