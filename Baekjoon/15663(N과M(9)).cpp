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
	int before = 0;
	for (int i = 1; i <= N; i++) {
		if (!visited[i] && before != num[i]) {
			visited[i] = true;
			arr[cnt] = num[i];
			before = num[i];
			func(cnt + 1);
			visited[i] = false;
		}
	}

}
int main() {
	//int Max = 0;
	cin >> N >> M;
	for (int i = 1; i < N + 1; i++)
		cin >> num[i];
	sort(num, num + N + 1);
	func(0);
	return 0;
}