#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a;
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    a.push_back(tmp);
  }

  vector<int> b = a;
  sort(b.begin(), b.end());

  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (b[n - 2] == a[i]) ans = i + 1;
  }

  cout << ans << endl;
}