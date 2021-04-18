#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string res;
    if (s == "a") {
        res = "-1";
    } else if (s.length() > 1) {
        for (int i = 0; i < s.length()-1; i++) {
            res += s[i];
        }
    } else {
        res = "a";
    }

    cout << res << endl;
}