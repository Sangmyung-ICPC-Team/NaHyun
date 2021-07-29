#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main() {
	long long N;
	cin >> N;

	long long A = sqrt(N);
	
	if (A * A < N)
		cout << A + 1;
	else
		cout << A;

	return 0;
}