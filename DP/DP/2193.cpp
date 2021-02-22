#include <iostream>

using namespace std;

int n;
long long int number[90];

int main() {
	cin >> n;

	number[0] = 1;
	number[1] = 1;

	for (int i = 2; i < n; i++) {
		number[i] = number[i - 1] + number[i - 2];
	}

	cout << number[n - 1];

	return 0;
}