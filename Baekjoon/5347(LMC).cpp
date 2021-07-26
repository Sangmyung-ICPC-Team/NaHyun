#include<iostream>
using namespace std;
long gcd(long a, long b) {
	while (b != 0) {
		long r = a % b;
		a = b;
		b = r;
	}
	return a;
}
long lcm(long a, long b) {
	return a * b / gcd(a, b);
}
int main() {
	long N;
	cin >> N;
	long* A = new long[N];
	long* B = new long[N];

	for (long i = 0; i < N; i++) 
		cin >> A[i] >> B[i];
	
	for(long i=0; i<N; i++)
		cout << lcm(A[i], B[i]) << endl;

	return 0;
}
