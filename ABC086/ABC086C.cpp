#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int  t[n+1], x[n+1], y[n+1];

    t[0] = x[0] = y[0] = 0;

    bool test = true;
    for (int i = 1; i <= n; i++) {
        cin >> t[i] >> x[i] >> y[i];
        int dt = t[i] - t[i-1];
        int dxy = abs(x[i]-x[i-1]) + abs(y[i]-y[i-1]);
        if (dt < dxy) test = false;
        if (dt%2 != dxy%2) test = false;
    }

    if(test) cout << "Yes" << endl;
    else cout << "No" << endl;
}