#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int N;
	int M;
	int num = 0;
	int temp = 0;

	scanf("%d", &N);
	scanf("%d", &M);

	int arr[101] = { 0 };
	int save = 0;

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	
	for (int a = 0; a < N-2; a++){
		for (int b = a + 1; b < N-1;b++) {
			for (int c = b + 1; c < N; c++) {
				if (arr[a] +arr[b] + arr[c] <= M) {
					if(save <= arr[a] + arr[b] + arr[c])
						save = arr[a] + arr[b] + arr[c];
					
				}
			}
		}
	}
	
	printf("%d", save);

	return 0;
}