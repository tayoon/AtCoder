#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    char a[h+2][w+2] = {};
    int cnt[h+2][w+2] = {};
    for (int i = 1; i < h+1; i++) {
        for (int j = 1; j < w+1; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i < h+1; i++) {
        for (int j = 1; j < w+1; j++) {
            if (a[i][j] == '#') {
                for (int k = 0; k < 4; k++) {
                    if (a[i+dx[k]][j+dy[k]] == '#'){
                        cnt[i+dx[k]][j+dy[k]]++;
                    }
                }
            }
        }
    }

    bool test = false;
    for (int i = 1; i < h+1; i++) {
        for (int j = 1; j < w+1; j++) {
            if (a[i][j] == '#' && cnt[i][j] == 0) {
                test = true;
                break;
            }
        }
    }

    if (test) cout << "No" << endl;
    else cout << "Yes" << endl;
}