#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t = "";
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'R') {
            reverse(t.begin(), t.end());
        } else {
            t += s[i];
        }
    }

    for (int i = 0; i < t.length(); i++) {
        if (t[i] == t[i+1]) {
            t.erase(i, 2);
            i -= 2;
        }
    }

    cout << t << endl;
}