#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<long long> a(n, 0);
  vector<long long> cnt(n, 0);
  long long ans = 0;

  for (int j = 0; j < n; j++) {
    cin >> a[j];
    if (j == 0) continue;

    for (int i = j - 1; i >= 0; i--) {
      if (abs(a[i] - a[j]) % 200 == 0) {
        cnt[j] = cnt[i] + 1;
        break;
      }
    }
    ans += cnt[j];
  }

  cout << ans << endl;
}
