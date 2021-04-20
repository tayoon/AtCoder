#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector <long long> a(n+1, 0);
    vector <long long> b(n+1, 0);

    for (int i = 0; i < n+1; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int next = 0, cnt = 0;
    for (int i = 0; i < n+1; i++) {
        a[i] -= next;
        cnt += next;
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