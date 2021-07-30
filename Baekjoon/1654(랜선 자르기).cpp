#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	cin.tie(0);
	long long  K, N;
 	cin >> K >> N;
	long long*A = new long long[K];
	for (int i = 0; i < K; i++)
		cin >> A[i];
	sort(A, A + K);

	long long mid = 0;
	long long cut = 0;
	long long left = 1;
	long long right = A[K - 1];

	while (left <= right) {
		cut = 0;
		mid = (left + right) / 2;
		for (int i = 0; i < K;i++) {
			cut = (A[i] / mid) + cut;
		}
		if (cut < N)
			right = mid - 1;
		else
			left = mid + 1;
	}
	cout << right;

	return 0;
}