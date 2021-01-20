#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n = 0;
	int k = 0;
	int result = 0;
	int num = 0;
	int idx = 0;
	vector<int> coin;

	cin >> n;
	cin >> k;

	for (int i = 0; i < n; i++) {
		cin >> num;
		coin.push_back(num);
		if (num <= k) {
			idx = i;
		}
	}
	
	int remainder = k; // �ʱ� ������ ���� k�� ����

	while (remainder != 0) {
		if (coin[idx] > remainder) { // �������� ���� idx�ε����� ���κ��� ������ �ٷ� ��������
			idx--;
			continue;
		}
		result += remainder / coin[idx];
		remainder = remainder % coin[idx];
		idx--;
	}

	cout << result;

	return 0;

}