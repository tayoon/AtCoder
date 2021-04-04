#include <bits/stdc++.h>
using namespace std;

int main() {
    int c[3][3] = {};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> c[i][j];
        }
    }

    int dij[3][2] = {};
    int cnt = 0;
    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < 3; i++) {
            dij[i][j] = c[i][j+1] - c[i][j];
        }
        if (dij[0][j] == dij[1][j] && dij[0][j] == dij[2][j]) cnt++;
    }

    int dji[2][3] = {};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            dji[i][j] = c[i+1][j] - c[i][j];
        }
        if (dji[i][0] == dji[i][1] && dji[i][0] == dji[i][2]) cnt++;
    }

    if (cnt == 4) cout << "Yes" << endl;
    else cout << "No" << endl;
}