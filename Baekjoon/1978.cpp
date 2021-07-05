#include<stdio.h>
#define SIZE 100

int main() {

	int N;
	int number = 0;
	int count[SIZE] = { 0 };
	int arr[SIZE] = { 0 };

	scanf("%d", &N);
	for (int j = 0; j < N; j++) {
		scanf("%d", &arr[j]);
		for (int i = 0; i < arr[j]; i++) {
			if (arr[j] % (i + 1) == 0) {
				count[j]++;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		if (count[i] == 2) {
			number++;
		}
	}
	printf("%d", number);
	
	return 0;
}