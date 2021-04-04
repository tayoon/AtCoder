#include <bits/stdc++.h>
using namespace std;

int main() {
    int w, h, n;
    cin >> w >> h >> n;

    int x, y, a;
    int num[w+1][h+1] = {};
    for (int i = 0; i < n; i++) {
        cin >> x >> y >> a;

        switch (a) {
            case 1:     // 長方形の x < xi をみたす領域を黒く塗る
                for (int i = 1; i < x+1; i++) {
                    for (int j = 1; j < h+1; j++) num[i][j]++;
                }
                break;
            case 2:     // 長方形の x > xi をみたす領域を黒く塗る
                for (int i = x+1; i < w+1; i++) {
                    for (int j = 1; j < h+1; j++) num[i][j]++;
                }
                break;
            case 3:     // 長方形の y < yi をみたす領域を黒く塗る
                for (int i = 1; i < w+1; i++) {
                    for (int j = 1; j < y+1; j++) num[i][j]++;
                }
                break;
            case 4:     // 長方形の y > yi をみたす領域を黒く塗る
                for (int i = 1; i < w+1; i++) {
                    for (int j = y+1; j < h+1; j++) num[i][j]++;
                }
                break;
        }
    }

    int res = 0;
    for (int i = 1; i < w+1; i++) {
        for (int j = 1; j < h+1; j++) {
            if (num[i][j] == 0) res++;
        }
    }

    cout << res << endl;
}
