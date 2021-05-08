#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n, 0);
    vector<int> cnt(n, 0);
    int all = 0;

    for (int j = 0; j < n; j++) {
        cin >> a[j];
        if (j == 0) continue;
        for (int i = j-1; i >= 0; i--) {
            if (abs(a[i]-a[j]) % 200 == 0) {
                cnt[j] = cnt[i] + 1;
                break;
            }
        }
        all += cnt[j];
    }

    cout << all << endl;
}