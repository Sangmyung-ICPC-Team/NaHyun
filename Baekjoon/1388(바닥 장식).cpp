#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#define MAX 101
using namespace std;

int N, M;
char arr[MAX][MAX];
int visit[MAX][MAX];
int result;
char now = '-';

void dfs(int i, int j) {
	if (arr[i][j] != now) {
		return;
	}
	visit[i][j] = 1;
	if (arr[i][j] == '-') {
		if (j + 1 < M) {
			if (!visit[i][j + 1])
				dfs(i, j + 1);
		}
	}
	else if (arr[i][j] == '|') {
		if (i + 1 < N) {
			if (!visit[i + 1][j])
				dfs(i + 1, j);
		}
	}
	
}

int main() {
	cin >> N >> M;

	for (int i = 0; i < N;i++)
		for (int j = 0;j < M;j++)
			cin >> arr[i][j];
	
	for (int i = 0; i < N;i++) {
		for (int j = 0; j < M;j++) {
			if (!visit[i][j]) {
				visit[i][j] = 1;
				result++;
				if (arr[i][j] == '-') {
					if (j + 1 < M) {
						if (!visit[i][j + 1]) {
							now = '-';
							dfs(i, j + 1);
						}
					}
				}
				else if (arr[i][j] == '|') {
					if (i + 1 < N) {
						if (!visit[i + 1][j]) {
							now = '|';
							dfs(i + 1, j);
						}
					}
				}
			}
		}
	}
	
	cout << result;

	return 0;
}
