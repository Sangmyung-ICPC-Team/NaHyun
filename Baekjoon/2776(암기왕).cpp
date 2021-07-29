#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int T, N, M;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N;
		int* A = new int[N];
		for (int i = 0; i < N; i++)
			cin >> A[i];
		cin >> M;
		int* B = new int[M];
		for (int i = 0; i < M; i++)
			cin >> B[i];

		sort(A, A + N);
		for (int i = 0; i < M; i++) {
			int flag = 0;
			int left = 0;
			int right = N - 1;
			while (left <= right) {
				int mid = (left + right) / 2;
				if (A[mid] == B[i]) {
					flag = 1;
					cout << 1 << "\n";
					break;
				}
				if (A[mid] > B[i])
					right = mid - 1;
				else
					left = mid + 1;
			}
			if (flag == 0)
				cout << 0 << "\n";
		}
	}

	return 0;
}