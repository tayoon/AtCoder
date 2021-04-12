#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a+n);

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (i == n-1 && x != a[i]) break;

        if (x >= a[i]) {
            cnt++;
            x -= a[i];
        } else {
            break;
        }
    }

    cout << cnt << endl;
}