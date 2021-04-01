#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int  t[n], x[n], y[n];

    t[0] = x[0] = y[0] = 0;

    bool test = false;
    for (int i = 1; i <= n; i++) {
        cin >> t[i] >> x[i] >> y[i];
        int dt = t[i] - t[i-1];
        int dxy = abs(x[i]-x[i-1]) + abs(y[i]-y[i-1]);
        if (dt >= dxy && dt%2 == dxy%2) test = true;
    }

    if(test) cout << "Yes" << endl;
    else cout << "No" << endl;
}