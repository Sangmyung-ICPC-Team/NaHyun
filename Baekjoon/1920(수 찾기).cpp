#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int N, M;

	cin >> N;
	long* A = new long[N];
	for (int i = 0; i < N;i++)
		cin >> A[i];

	cin >> M;
	long* B = new long[M];
	for (int i = 0; i < M;i++)
		cin >> B[i];

	sort(A, A + N);

	for (int i = 0; i < M; i++) {
		int flag = 0;
		int left = 0;
		int right = N - 1;

		while (left <= right) {
			int mid = (left + right) / 2;
			if (B[i] == A[mid]) {
				flag = 1;
				cout << 1 << '\n';
				break;
			}
			if (A[mid] > B[i])
				right = mid - 1;
			else
				left = mid + 1;
		}
		if (flag == 0)
			cout << 0 << '\n';
	}

	return 0;
}