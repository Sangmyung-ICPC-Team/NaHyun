#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char W_f[8] = { 'W', 'B', 'W', 'B', 'W','B','W','B' };
char B_f[8] = { 'B', 'W', 'B', 'W','B','W','B', 'W' };
char board[50][50] = { NULL };

int W_check(int a, int b) {
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i % 2 == 0 && W_f[j] != board[a + i][b + j]) {
                cnt++;
            }
            else if (i % 2 == 1 && B_f[j] != board[a + i][b + j]) {
                cnt++;
            }
        }
    }
    return cnt;
}

int B_check(int a, int b) {
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i % 2 == 0 && B_f[j] != board[a + i][b + j]) {
                cnt++;
            }
            else if (i % 2 == 1 && W_f[j] != board[a + i][b + j]) {
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    int N, M;
    int cnt = 100;

    scanf("%d%d", &N, &M);
    for (int i = 0; i < N; i++) {
        scanf("%s", board[i]);
    }

    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            if (cnt > W_check(i, j)) {
                cnt = W_check(i, j);
            }
            if (cnt > B_check(i, j)) {
                cnt = B_check(i, j);
            }
        }
    }

    printf("%d", cnt);

    return 0;
}
