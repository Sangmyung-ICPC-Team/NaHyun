#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char* argv[]) {
    long long X, Y, Z, K;
    long long start, end, mid;

    cin >> X >> Y;
    Z = Y * 100 / X;

    if (Z >= 99) {
        cout << -1;
    }
    else {
        start = 0;
        end = X;
        while (start <= end) {
            mid = (start + end) / 2;
            K = (Y + mid) * 100 / (X + mid);

            if (K != Z && (Y + mid - 1) * 100 / (X + mid - 1) == Z) {
                cout << mid;
                break;
            }
            else if (K == Z) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    }
    return 0;
}