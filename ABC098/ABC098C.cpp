#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt[n] = {};
    for (int i = 1; i < n; i++) {
        if (s[i] == 'E') cnt[0]++;
    }

    for (int i = 1; i < n; i++) {
        if (s[i-1] == 'E' && s[i] == 'E') {
            cnt[i] = cnt[i-1] - 1;
        } else if (s[i-1] == 'W' && s[i] == 'W') {
            cnt[i] = cnt[i-1] + 1;
        } else {
            cnt[i] = cnt[i-1];
        }
    }

    int res = INT_MAX;
    for (int i = 0; i < n; i++) {
        res = min(res, cnt[i]);
    }

    cout << res << endl;
}