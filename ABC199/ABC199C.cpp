#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    string s;
    cin >> n >> s >> q;

    int t, a, b;
    char tmp;
    bool flag = false;

    for (int i = 0; i < q; i++) {
        cin >> t >> a >> b;
        --a, --b;
        if (t == 1) {
            if (flag) {
                if (a >= n) a -= n;
                else a += n;

                if (b >= n) b -= n;
                else b += n;
            }
            tmp = s[a];
            s[a] = s[b];
            s[b] = tmp;
        } else {
            flag = !flag;
        }
    }

    if (flag) s = s.substr(n) + s.substr(0, n);

    cout << s << endl;
}