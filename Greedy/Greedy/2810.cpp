#include <iostream>

using namespace std;

int N;
string str;

int main() {
	int lCount = 0;
	int count = 0;
	bool isL = false;

	cin >> N;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'S') {
			count += 2;
		}
		else {
			isL = true;
			if (lCount == 1) {
				count += 2;
				lCount = 0;
			}
			else {
				lCount++;
			}
		}
	}

	int result = count / 2 + 1;

	if (!isL) {
		cout << result - 1;
	}
	else {
		cout << result;
	}

	return 0;
}