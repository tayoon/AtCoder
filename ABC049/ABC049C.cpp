#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string t[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
    string s;
    cin >> s;

    // 反転
    reverse(s.begin(), s.end());
    for (int i = 0; i < 4; i++){
        reverse(t[i].begin(), t[i].end());
    }

    bool test = true;
    for (int i = 0; i < s.size();) {
        bool test2 = false;
        for (int j = 0; j < 4; j++) {
            if (s.substr(i, t[j].size()) == t[j]) {
                test2 = true;
                i += t[j].size();
            }
        }
        if (!test2){
            test = false;
            break;
        }
    }

    if (test) cout << "YES" << endl;
    else cout << "NO" << endl;
}