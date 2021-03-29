#include<iostream>
using namespace std;

int r, c;
int sx, sy, gx, gy;
int a[52][52];
char ch;

void bfs(int x1, int y1, int g){
	if(a[x1][y1] == -1) return;
	if(a[x1][y1] != 0 && a[x1][y1] <= g) return;
	a[x1][y1] = g;

	bfs(x1+1, y1, g+1);
	bfs(x1-1, y1, g+1);
	bfs(x1, y1+1, g+1);
	bfs(x1, y1-1, g+1);
}

int main(){
	cin >> r >> c >> sx >> sy >> gx >> gy;
	for(int i = 0; i <= 51; i++){
		for(int j = 0; j <= 51; j++){
			a[i][j]=-1;
        }
    }

	for(int i = 1; i <= r; i++){
		for(int j = 1; j <= c; j++){
			cin >> ch;
			if(ch == '.')
				a[i][j] = 0;
		}
    }

	bfs(sx, sy, 0);
	cout << a[gx][gy] << endl;
	return 0;
}