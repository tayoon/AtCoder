#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[2][n];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int cnt[n] = {};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            cnt[i] += a[0][j];
        }
        for (int k = i; k < n; k++) {
            cnt[i] += a[1][k];
        }
    }

    cout << *max_element(cnt, cnt+n) << endl;
}