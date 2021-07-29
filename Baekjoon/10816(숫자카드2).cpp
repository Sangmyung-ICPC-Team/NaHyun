#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	long N, M;
	cin >> N;

	long* A = new long[N];
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	cin >> M;
	long* B = new long[M];
	long* C = new long[M]();
	for (int i = 0; i < M; i++) {
		cin >> B[i];
	}

	sort(A, A + N);

	for (int i = 0; i < M; i++) {
		int left = 0;
		int right = N - 1;
		while (left <= right) {
			int mid = (left + right) / 2;
			if (A[mid] == B[i]) {
				C[i] = 1;
				int left_ = mid - 1;
				int right_ = mid + 1;

				while (A[left_] == A[mid]) {
					if (A[left_] == A[mid]) {
						C[i]++;
						left_--;
					}
				}
				while (A[right_] == A[mid]) {
					if (A[right_] == A[mid]) {
						C[i]++;
						right_++;
					}
				}
				break;
			}
			if (A[mid] > B[i])
				right = mid - 1;
			else
				left = mid + 1;
		}
	}
	for (int i = 0; i < M; i++)
		cout << C[i] << " ";

	return 0;
}