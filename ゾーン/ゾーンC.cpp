#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n), b(n), c(n), d(n), e(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i] >> e[i];
    }

    int res = INT_MAX;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            for (int k = 0; k < n; k++) {
                if (i == k || j == k) continue;
                res = min(res, max({a[i], a[j], a[k]}));
                res = min(res, max({b[i], b[j], b[k]}));
                res = min(res, max({c[i], c[j], c[k]}));
                res = min(res, max({d[i], d[j], d[k]}));
                res = min(res, max({e[i], e[j], e[k]}));
                ans = max(ans, res);
            }
        }
    }

    cout << ans << endl;
}