#include<iostream>
#include<algorithm>
using namespace std;
int N, M;
int num[9];
int arr[9];
bool visited[9];
void func(int cnt,int check) {
	if (cnt == M) {
		for (int i = 0; i < M; i++)
			cout << arr[i] << " ";
		cout << "\n";
		
	}
	int before = 0;
	for (int i = 1; i <= N; i++) {
		if (!visited[i] && before != num[i] && check <=num[i]) {
			visited[i] = true;
			arr[cnt] = num[i];
			before = num[i];
			func(cnt + 1,arr[cnt]);
			visited[i] = false;
			
		}
	}
}
int main() {
	cin >> N >> M;
	for (int i = 1; i < N + 1; i++)
		cin >> num[i];
	sort(num, num + N + 1);
	func(0, 0);
	return 0;
}