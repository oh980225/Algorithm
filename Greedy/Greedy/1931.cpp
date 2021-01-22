#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	else {
		return a.second < b.second;
	}
}

int main() {
	int n = 0;
	int start = 0;
	int end = 0;
	int num = 0;
	vector<pair<int, int>> pairTime;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> start;
		cin >> end;
		pairTime.push_back(pair<int, int>(start, end));
	}

	sort(pairTime.begin(), pairTime.end(), compare);

	end = pairTime[0].second;
	num++;

	for (int i = 1; i < n; i++) {
		if (pairTime[i].first >= end) {
			num++;
			end = pairTime[i].second;
		}
	}

	cout << num;

	return 0;
}