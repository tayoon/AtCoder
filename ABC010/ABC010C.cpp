#include <bits/stdc++.h>
using namespace std;

double distance(int dx, int dy, int x, int y){
    int root = (dx - x) * (dx - x) + (dy - y) * (dy - y);
    return sqrt(root);
}

int main(){
    int tx_a, ty_a, tx_b, ty_b, T, V, n;
    bool flag = false;
    cin >> tx_a >> ty_a >> tx_b >> ty_b >> T >> V >> n;
    for(int i = 0; i < n; i ++){
        int x, y;
        cin >> x >> y;
        if(distance(x, y, tx_a, ty_a) + distance(tx_b, ty_b, x, y) <= T * V){
            flag = true;
            break;
        }
    }
    if(flag){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}