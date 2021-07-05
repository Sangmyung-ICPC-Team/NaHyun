#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 1000000
int main()
{
	char S[SIZE];
	int alp[26] = { 0 };
	int temp = 0;
	int flag = 0;
	int index = 0;
	scanf("%s", &S);
	int N = strlen(S);
	for (int i = 0; i <N;i++)
	{
		if (S[i] <= 122 && S[i] >= 97)
		{
			S[i] = S[i] - 32;
			S[i] = S[i] - 65;
			alp[S[i]]++;
		}
		else {
			S[i] = S[i] - 65;
			alp[S[i]]++;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (temp < alp[i]) {
			temp = alp[i];
			index = i;
			flag = 0;
		}
		else if (temp == alp[i])
			flag = 1;
	}
	if (flag == 1)
		printf("?");
	else
		printf("%c", index+65);

	
	
	return 0;
}