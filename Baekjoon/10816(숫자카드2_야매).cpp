#include <iostream>
#define SIZE 10000001
using namespace std;


int main(int argc, const char* argv[]) {
    cin.tie(0);
    long long N, M, key;

    cin >> N;
    long long memo[SIZE * 2] = { 0 };
    for (int i = 0; i < N; i++) {
        cin >> key;
        memo[key + SIZE]++;

    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> key;
        cout << memo[key + SIZE] << " ";

    }


    return 0;
}