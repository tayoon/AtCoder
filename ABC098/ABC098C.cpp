#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt[n] = {};
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            for (int j = 1; j < n; j++) {
                if (s[j] == 'E') cnt[i]++;
            }
        } else if (i == n-1) {
            for (int j = 0; j < n-1; j++) {
                if (s[j] == 'W') cnt[i]++;
            }
        } else {
            for (int j = 0; j < n; j++) {
                if (j < i && s[j] == 'W') cnt[i]++;
                else if (j > i && s[j] == 'E') cnt[i]++;
                else if (j == i) continue;
            }
        }
    }

    cout << *min_element(cnt, cnt + n) << endl;
}