#include<stdio.h>
int main() {
	
	int A=0, B=0, C=0;
	while (1) {
		scanf("%d %d %d", &A, &B, &C);
		if (A == 0 && B == 0 && C == 0)
			break;
		if (A <= B) {
			if (B <= C) { //C
				if (C * C == (A * A) + (B * B))
					printf("right\n");
				else
					printf("wrong\n");
			}	
			else//B
				if (B * B == (A * A) + (C * C))
					printf("right\n");
				else
					printf("wrong\n");
		}
		else {
			if (A <= C) { // C
				if (C * C == (A * A) + (B * B))
					printf("right\n");
				else
					printf("wrong\n");
			}
			else // A
			{
				if (A * A == (C * C) + (B * B))
					printf("right\n");
				else
					printf("wrong\n");
			}
		}
	}
}