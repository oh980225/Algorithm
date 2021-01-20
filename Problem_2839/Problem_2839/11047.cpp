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
	
	int remainder = k; // 초기 나머지 값을 k로 설정

	while (remainder != 0) {
		if (coin[idx] > remainder) { // 나머지가 현재 idx인덱스의 코인보다 작으면 바로 다음으로
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