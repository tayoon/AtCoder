#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int y = 700;

    for (int i = 0; i < 3; i++) {
        if (s[i] == 'o') y += 100;
    }

    cout << y << endl;
}