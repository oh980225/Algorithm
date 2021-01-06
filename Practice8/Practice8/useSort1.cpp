// 이중 pair (정렬기준이 2개 이하일 경우 pair 사용)
// 단 정렬 기준이 3개 이상일 경우 클래스로 하는 것이 좋음
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b) {
	if (a.second.first == b.second.first) {
		return a.second.second > b.second.second;
	}
	else {
		return a.second.first > b.second.first;
	}
}

int main() {
	vector<pair<string, pair<int, int>>> v; 
	v.push_back(pair<string, pair<int, int>>("l0_0l", pair<int, int>(100, 19980225)));
	v.push_back(pair<string, pair<int, int>>("tester", pair<int, int>(60, 19980325)));
	v.push_back(pair<string, pair<int, int>>("helloMan", pair<int, int>(60, 19990225)));
	v.push_back(pair<string, pair<int, int>>("hiMan", pair<int, int>(80, 20000225)));
	v.push_back(pair<string, pair<int, int>>("heyMan", pair<int, int>(80, 20020225)));

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << ' '; 
	}

	return 0;
}