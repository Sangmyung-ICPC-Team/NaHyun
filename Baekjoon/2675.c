#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int T=0;
	int R=0;
	char S[20];
	scanf("%d", &T);
	
	for (int i = 0; i < T;i++)
	{
		scanf("%d %s", &R, &S);
		for (int i = 0; i < strlen(S); i++)
		{
			for (int j = 0; j < R;j++)
			{
				printf("%c", S[i]);
			}
		}
		printf("\n");
	}
	return 0;
}