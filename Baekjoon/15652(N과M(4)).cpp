#include<iostream>
using namespace std;
int N, M;
int arr[9];
bool visited[9];
void func(int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = 1; i <= N; i++) {
		if (!visited[i] && arr[cnt - 1] <= i) {
			//visited[i] = true;
			arr[cnt] = i;
			func(cnt + 1);
			visited[i] = false;
		}
	}
}

int main() {
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		arr[0] = i;
		func(1);
	}
	return 0;
}