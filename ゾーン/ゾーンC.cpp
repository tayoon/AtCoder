#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n), b(n), c(n), d(n), e(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i] >> e[i];
    }

    int ans = *max_element(a.begin(), a.end());
    int res = INT_MAX;
    if (res > *max_element(a.begin(), a.end())) res = *max_element(a.begin(), a.end());
    if (res > *max_element(b.begin(), b.end())) res = *max_element(b.begin(), b.end());
    if (res > *max_element(c.begin(), c.end())) res = *max_element(c.begin(), c.end());
    if (res > *max_element(d.begin(), d.end())) res = *max_element(d.begin(), d.end());
    if (res > *max_element(e.begin(), e.end())) res = *max_element(e.begin(), e.end());

    cout << res << endl;
}