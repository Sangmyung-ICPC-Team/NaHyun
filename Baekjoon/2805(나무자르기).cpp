#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	long long N, M;
	cin >> N >> M;
	long long* A = new long long[N];
	long long cut = 0;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	sort(A, A + N);

	int right = A[N - 1];
	int left = 0;
	int mid;
	while (left <= right) {
		mid = (left + right) / 2;
		cut = 0;
		for (int i = 0; i < N; i++) {
			if (mid < A[i]) {
				cut = A[i] - mid + cut;
			}
		}
		if (cut >= M)
			left = mid + 1;
		else
			right = mid - 1;
	}
	cout << right;
		
	return 0;
}