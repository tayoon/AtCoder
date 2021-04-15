#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    int dx[8] = {1, 0, -1, -1, -1, 0, 1, 1};
    int dy[8] = {1, 1, 1, 0, -1, -1, -1, 0};

    char a[h+2][w+2] = {};
    int cnt[h+2][w+2] = {};
    for (int i = 1; i < h+1; i++) {
        for (int j = 1; j < w+1; j++) {
            cin >> a[i][j];
            if (a[i][j] == '#') {
                for (int k = 0; k < 8; k++) {
                    cnt[i+dx[k]][j+dy[k]]++;
                }
            }
        }
    }

    for (int i = 1; i < h+1; i++) {
        for (int j = 1; j < w+1; j++) {
            if (a[i][j] == '#') {
                cout << "#";
            } else {
                cout << cnt[i][j];
            }
        }
        cout << endl;
    }
}