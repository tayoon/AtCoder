#include <bits/stdc++.h>
using namespace std;

// using Graph = vector<vector<int>>;

int r, c;
int sx, sy, gx, gy;
int a[52][52];
char ch;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

// 未到達:0
// 壁:-1
// 到達済:1

int main(){
	cin >> r >> c >> sx >> sy >> gx >> gy;

	// Graph G((r-2)*(c-2));
	
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cin >> ch;
			if(ch == '.') a[i][j] = 0;
			else a[i][j] = -1;
        }
    }

	vector<vector<int> > dist(r, vector<int>(c, -1));
	dist[sx][sy] = 1;

	queue<pair<int, int> > que;
	que.push(make_pair(sx, sy));

	while (!que.empty()) {
		pair<int, int> current_pos = que.front();
		int x = current_pos.first;
		int y = current_pos.second;
		que.pop();

		for (int direction = 0; direction < 4; direction++) {
			int next_x = x + dx[direction];
			int next_y = y + dy[direction];
			if (next_x < 0 || next_x > c || next_y < 0 || next_y > r) continue;		// マスはみ出し
			if (a[next_x][next_y] == -1) continue;		// 壁

			if (dist[next_x][next_y] == -1) {
                dist[next_x][next_y] = dist[x][y] + 1;
                que.push(make_pair(next_x, next_y));
            }
		}
	}

}