#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int N = 0; 
	int temp = 0;
	int sum = 0;
	cin >> N;
	int* arr = new int[N];
	int* num = new int[N];
	
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		sum = arr[i] + sum;
	}
	sort(arr, arr + N);

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (arr[i] == arr[j])
				num[i]++;
		}
	}

	cout << sum / N << endl;
	cout << arr[N/2] << endl;
	cout << temp << endl;
	cout << arr[N - 1] - arr[0];


}