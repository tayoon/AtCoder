#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i > 0 && i < s.size()-1) cnt++;
    }

    cout << s[0] << cnt << s[s.size()-1] << endl;
}