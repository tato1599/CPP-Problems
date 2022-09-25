#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string n1 = "9876543210";
    int n;
    cin >> n; 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cout<< n1[x]<<"\n";  
    }
}