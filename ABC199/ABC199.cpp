#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    string s;
    cin >> n >> s >> q;

    vector<int> t(q);
    vector<int> a(q);
    vector<int> b(q);
    char tmp;
    for (int i = 0; i < q; i++) {
        cin >> t[i] >> a[i] >> b[i];
        if (t[i] == 1) {
            tmp = s[a[i]-1];
            s[a[i]-1] = s[b[i]-1];
            s[b[i]-1] = tmp;
        } else {
            s = s.substr(n) + s.substr(0, n);
        }
    }

    cout << s << endl;
}