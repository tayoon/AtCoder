#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s;

    bool flag = false;
    vector<char> res;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'R') {
            flag = !flag;
            continue;
        }

        if (!flag) {
            res.push_back(s[i]);
        } else {
            res.insert(res.begin(), s[i]);
        }
    }

    if (flag) reverse(res.begin(), res.end());

    for (char c : res) {
        if (t.size() != 0 && t.back() == c) {
            t.pop_back();
        } else {
            t += c;
        }
    }

    cout << t << endl;
}