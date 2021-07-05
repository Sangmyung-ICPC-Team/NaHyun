#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int N;
	char S[101] = { "" };
	scanf("%d", &N);
	int index = N;
	for (int i = 0; i < N;i++){
		scanf("%s", &S);

		for (int j = 0; j < strlen(S); j++){
			for (int t = j+1; t < strlen(S);t++){
				if (S[j] == S[t] && S[j] != S[t - 1]){
					index--;
					j = strlen(S);
				}
			}
		}
	}                                                     
	printf("%d", index);
	return 0;
}