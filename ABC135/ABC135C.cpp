#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector <long long> a(n+1, 0);
    vector <long long> b(n+1, 0);

    for (int i = 0; i < n+1; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    long long next = 0, cnt = 0;
    for (int i = 0; i < n+1; i++) {
        if (a[i] >= next) {
            a[i] -= next;
            cnt += next;
        } else {
            cnt += a[i];
            a[i] = 0;
        }
        next = 0;
        if (a[i] >= b[i]) {
            cnt += b[i];
        } else {
            cnt += a[i];
            next += b[i] - a[i];
        }
    }

    cout << cnt << endl;
}