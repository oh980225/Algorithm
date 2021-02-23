#include <iostream>
#include <vector>

using namespace std;

int t, c, q, d, n, p;
vector<int> v;

int main() {
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> c;
		v.push_back(c);
	}

	for (auto& element : v) {
		q = element / 25;
		element -= q * 25;
		d = element / 10;
		element -= d * 10;
		n = element / 5;
		element -= n * 5;
		p = element;
		cout << q << " " << d << " " << n << " " << p << '\n';
	}

	return 0;
}