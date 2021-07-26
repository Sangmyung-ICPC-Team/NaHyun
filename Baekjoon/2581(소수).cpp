#include<iostream>
using namespace std;
int main() {
	int N,M;
	cin >> N;
	cin >> M;

	int flag = 0;
	int check = 0;
	int num = 0;
	int min=0;

	for (int i = N; i < M+1; i++) {
		for (int j = 1; j < i+1; j++) {
			if (i % j == 0)
				flag++;
		}
		if (flag == 2)
			num = i + num;
		flag = 0;
		if (check == 0 && num != 0) {
			min = i;
			check = 1;
		}
	}
	if (num == 0)
		num = -1;

	cout << num<<endl;
	if(min != 0)
		cout << min;

	return 0;
}