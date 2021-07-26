#include<iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	
	int sum = 0;
	int* arr = new int[N];


	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	sum = sum / 2;
	for (int i = 0; i < N; i++) {
		int temp = 0;
		for (int j = 0; j < N; j += 2)
			temp += arr[(i + j) % N];
		cout << temp - sum << endl;
	}

	return 0;
}