#include<iostream>
using namespace std;
int main() {
	int N, K;
	cin >> N >> K;

	int* arr = new int[K];
	for (int i = 0; i < K; i++) {
		arr[i] = i + 1;
		N = N - (i +1);
	}
	
	if (N < 0)
		cout << -1;
	else if (N == 0) {
		int result = arr[K - 1] - arr[0];
		cout << result;
	}
	else {
		int A = N / K;
		int B = N % K;
		for (int i = 0; i < K; i++)
			arr[i]= arr[i] + A;
		for (int i = 0; i < B; i++) {
			arr[K - (i + 1)]++;
		}
		int result = arr[K - 1] - arr[0];
		cout << result;
	}

	return 0;
}