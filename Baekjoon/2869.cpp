#include<iostream>
using namespace std;
int main() {
	long A, B, V;
	cin >> A >> B >> V;

	long Date = 0;

	int Y =(V - A) / (A - B);
	Date = (V - A) % (A - B);
	if (Date == 0)
		Y = Y + 1;
	else
		Y = Y + 2;
	
	cout << Y;

	return 0;
}