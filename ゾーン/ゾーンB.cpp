#include <bits/stdc++.h>
using namespace std;

int main() {
    double n, D, H;
    cin >> n >> D >> H;

    double dis = 0;
    double d, h;
    double max = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> d >> h;
        dis = H - (D / (D-d) * (H-h));
        if (max < dis) max = dis;
    }

    if (max < 0) max = 0;
    cout << max << endl;
}