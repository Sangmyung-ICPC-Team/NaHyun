#include<iostream>
#include<algorithm>
using namespace std;
int N, M;
int* num = new int[N + 1]();
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
		if (!visited[i] && arr[cnt - 1] < num[i]) {
			visited[i] = true;
			arr[cnt] = num[i];
			func(cnt + 1);
			visited[i] = false;
		}
	}
}

int main() {
	cin >> N >> M;
	for (int i = 1; i < N + 1; i++)
		cin >> num[i];
	sort(num, num + N + 1);
	for (int i = 1; i < N + 1; i++) {
		arr[0] = num[i];
		func(1);
	}
	return 0;
}