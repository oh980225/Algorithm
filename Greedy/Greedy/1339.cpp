//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <cmath>
//
//using namespace std;
//
//bool compare(pair<char, int> a, pair<char, int> b) {
//	return b.second < a.second;
//}
//
//int main() {
//	string str;
//	int n;
//	int num = 0;
//	int idx = 0;
//	int maxNum = 9;
//	int result = 0;
//	vector<char> v[8];
//	vector<pair<char, int>> alph;
//	char exist[10];
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> str;
//		for (int j = str.size(); j > 0; j--) {
//			v[8 - j].push_back(str[str.size() - j]);
//		}
//	}
//
//	int existIdx = 0;
//
//	for (int i = 0; i < 8; i++) {
//		for (auto& element : v[i]) {
//			if (count(exist, exist + 10, element) == 0) {
//				alph.push_back(pair<char, int>(element, pow(10, 7 - i)));
//				exist[existIdx] = element;
//				existIdx++;
//			}
//			else {
//				idx = 0;
//				for (auto& a : alph) {
//					if (a.first == element) {
//						a.second += pow(10, 7 - i);
//					}
//					idx++;
//				}
//			}
//		}
//	}
//
//	sort(alph.begin(), alph.end(), compare);
//
//	for (auto& element : alph) {
//		result += maxNum * element.second;
//		if (maxNum == 0) {
//			continue;
//		}
//		maxNum--;
//	}
//
//	cout << result;
//
//	return 0;
//}