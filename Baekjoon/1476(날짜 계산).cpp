#include<iostream>
using namespace std;
int main() {
	int E, S, M;
	cin >> E >> S >> M;
	 
	int E_f = 0, S_f = 0, M_f = 0;
	int Date = 0;
	
	while (1) {
		if (E == E_f && S == S_f && M == M_f)
			break;

		E_f++;S_f++;M_f++;Date++;

		if (E_f > 15) {
			E_f = 1;
		}
		if (S_f > 28) {
			S_f = 1;
		}
		if (M_f > 19) {
			M_f = 1;
		}
	}
	
	cout << Date;

	return 0;
}