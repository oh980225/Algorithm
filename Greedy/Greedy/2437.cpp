#include <iostream>
#include <queue>

using namespace std;

int N;
priority_queue<int, vector<int>, greater<int>> q;

int main() {
	int num;
	int sum = 1;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		q.push(num);
	}

	while (!q.empty()) {
		if (sum < q.top()) {
			break;
		}
		sum += q.top();
		q.pop();
	}

	cout << sum;

	return 0;
}