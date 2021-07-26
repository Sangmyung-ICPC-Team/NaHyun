#include<iostream>
using namespace std;
int main() {
	long N;
	long Sum = 0;
	
	cin >> N;

	for (long i = 1; i < N; i++) {
		cout << (N * i) + i<<" ";
		Sum = (N * i) + i + Sum;
	}
	cout << Sum;

	return 0;
}