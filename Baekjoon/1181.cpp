#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool compare(string arr[]){
	
	if (arr[i].size() < arr[i + 1].size())
			return arr[i] < arr[i + 1];
	
}

int main() {
	int N;
	string temp;

	cin >> N;
	string *arr = new string [N];

	for (int i= 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N,compare);

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {

		}
	}

	for (int i = 0; i < N; i++) {
		if (arr[i] != "\0"){
			cout << arr[i] << endl;
		}
	}

	return 0;
}