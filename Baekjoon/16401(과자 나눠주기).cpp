#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	long long M, N, sum = 0;
	cin >> M >> N;

	long long* L = new long long[N];
	for (int i = 0;i < N; i++) {
		cin >> L[i];
		sum += L[i];
	}
	sort(L, L + N);

	long long mid = 0;
	long long left = 1;
	long long right = L[N - 1];
	long long cut = 0;

	while (left <= right) {
		cut = 0;
		mid = (left + right) / 2;
		for (int i = 0;i < N;i++) {
			cut = (L[i] / mid) + cut;
		}
		if (cut < M)
			right = mid - 1;
		else
			left = mid + 1;
	}
	cout << right;

	return 0;
}