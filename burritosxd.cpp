#include <iostream>
using namespace std;

bool burritos() {
    int burr[4], N;
    cin >> burr[0] >> burr[1] >> burr[2] >> burr[3] >> N;
    for(int i = 0; i < N; i++) {
        int aux, tf;
        cin >> aux >> tf;
        if(tf == 0 and aux != 0) {
            burr[0] -= aux;
            if(burr[0] < 0) {
                return false;
            }
        }
        cin >> aux >> tf;
        if(tf == 0 and aux != 0) {
            burr[1] -= aux;
            if(burr[1] < 0) {
                return false;
            }
        }
        cin >> aux >> tf;
        if(tf == 0 and aux != 0) {
            burr[2] -= aux;
            if(burr[2] < 0) {
                return false;
            }
        }
        cin >> aux >> tf;
        if(tf == 0 and aux != 0) {
            burr[3] -= aux;
            if(burr[3] < 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    if(burritos()) {
        cout << "#quedamosBien";
    }
    else {
        cout << "#quedamosMal";
    }
    return 0;
}
