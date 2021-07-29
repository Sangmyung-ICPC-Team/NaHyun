#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	cin.tie(0);
	long long N,M;
	cin >> N;
	long long answer = 0;
	long long *A = new long long[N];
	for (int i = 0; i < N; i++)
		cin >> A[i];
	cin >> M;
	sort(A, A + N);
	long long cut = 0;
	long long h = M / N;
	for (int i = 0; i < N; i++) {
		if (h >= A[i]) {
			M = M - A[i];
			cut = A[i];
		}
		else {
			answer = ( M / (N - i));
			if (answer > A[i]) {
				M = M - A[i];
				cut = A[i];
			}
			else {
				cut = answer;
				i = N ;
			}
		}
	}
	if (M < 0)
		cut = A[N - 1];

	cout << cut;

	return 0;
}