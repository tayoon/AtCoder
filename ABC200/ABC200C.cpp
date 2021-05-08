#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n, 0);
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int j = 1; j < n; j++) {
        for (int i = 0; i < j; i++) {
            if (abs(a[i]-a[j]) % 200 == 0) cnt++;
        }
    }

    cout << cnt << endl;
}