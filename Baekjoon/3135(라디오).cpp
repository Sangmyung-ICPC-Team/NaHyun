#include<iostream>
using namespace std;
int main() {
	int A, B, N;
	cin >> A >> B;
	cin >> N;

	int flag = 0;
	int min = 0;
	int* S = new int[N];

	for (int i = 0; i < N; i++) 
		cin >> S[i];

	min = B - A;
	if (min < 0)
		min = min* (-1);

	for (int i = 0; i < N; i++) {
		if (B == S[i]) {
			min = 1;
		}
		else {
			int M = S[i] - B;
			if (M < 0)
				M = M* (-1);

			if (min > M)
				min = M+1;
		}
	}

	cout << min;

	return 0;
}