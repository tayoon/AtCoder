#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    int dx[8] = {1, 0, -1, -1, -1, 0, 1, 1};
    int dy[8] = {1, 1, 1, 0, -1, -1, -1, 0};

    char a[h][w];
    int cnt[h][w] = {};
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> a[i][j];
            if (a[i][j] == '#') {
                for (int i = 0; i < 8; i++) {
                    cnt[i-dx[i]][j-dy[i]]++;
                }
            }
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (a[i][j] == '#') {
                cout << "#";
            } else {
                cout << cnt[i][j];
            }
        }
        cout << endl;
    }
}