#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define SIZE 100
int visit[SIZE][SIZE] = { 0 };
int paper[SIZE][SIZE] = { 0 };
int M, N, K;

int dy[4] = { 1,-1,0,0 };
int dx[4] = { 0,0,1,-1 };

int dfs(int y, int x) {
	int cnt = 1;

	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || ny >= M || nx < 0 || nx >= N)
			continue;
		if (paper[ny][nx] || visit[ny][nx])
			continue;

		visit[ny][nx] = 1;
		cnt = cnt + dfs(ny, nx);
	}

	return cnt;
}

int main() {
	int x1, y1, x2, y2;
	cin >> M >> N >> K;

	for (int i = 0; i < K; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		for (int y = y1; y < y2; y++)
			for (int x = x1;x < x2;x++)
				paper[y][x] = 1;
	}

	vector <int>a;

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (!paper[i][j] && !visit[i][j]) {
				visit[i][j] = 1;
				a.push_back(dfs(i, j));
			}
		}
	}
	cout << a.size() << endl;
	sort(a.begin(), a.end());
	for (int i = 0; i < a.size();i++)
		cout << a[i] << " ";


	//È®ÀÎ¿ë 
	/*for (int i = 0; i <M; i++)
	{
		for (int j = 0; j < N;j++) {
			cout << paper[i][j];
		}
		cout << endl;
	}*/
	return 0;
}