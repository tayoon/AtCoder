#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    long long res = 0;
    for (int i = 0; i < m-1; i++) {
        for (int j = i+1; j < m; j++) {
            long long cnt = 0;
            for (int k = 0; k < n; k++) {
                cnt += max(a[k][i], a[k][j]);
            }
            res = max(res, cnt);
        }
    }

    cout << res << endl;
}