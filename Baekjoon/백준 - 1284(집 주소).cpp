#include<iostream>
using namespace std;
int main() {
    int N=1;
    int num[4];
    int size = 0;
    int check = 0;
    int count = 0;

    while (1) {
        cin >> N;
        if (N == 0)
            break;
        size = 0;
        count = 0;
        check = 0;
        num[0] = N / 1000;
        num[1] = (N - (num[0]* 1000))/ 100;
        num[2] = (N - ((num[0] * 1000) + (num[1] * 100))) / 10;
        num[3] = (N - ((num[0] * 1000) + (num[1] * 100) + (num[2] * 10))) / 1;

        for (int i = 0; i < 4; i++) {
            if (num[i] == 0 && check == 0) {
                continue;
            }
            else if (num[i] != 0 && check == 0){
                check = 1;
                if (num[i] == 1)
                    size = size + 2;
                else
                    size = size + 3;
            }
            else {
                if (num[i] == 0)
                    size = size + 4;
                else if (num[i] == 1)
                    size = size + 2;
                else
                    size = size + 3;

            }
            if (check != 0)
                count++;
        }
        size = size + count + 1;
        cout << size << endl;
    }

    return 0;
}