//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> plusV;
//vector<int> minusV;
//vector<int> resultV;
//bool hasZero = false;
//
//bool compare(int a, int b) {
//	return a > b;
//}
//
//void addResult(vector<int> &v) {
//	int first = 0;
//	int second = 0;
//	while (v.size() >= 2) {
//		first = v.back();
//		v.pop_back();
//		second = v.back();
//		v.pop_back();
//		if (first == 1 || second == 1) {
//			resultV.push_back(first);
//			resultV.push_back(second);
//		}
//		else {
//			resultV.push_back(first * second);
//		}
//	}
//	if (v.size() == 0) {
//		return;
//	}
//	else {
//		if (v[0] > 0) {
//			resultV.push_back(v[0]);
//		}
//		else {
//			if (hasZero) {
//				resultV.push_back(0);
//			}
//			else {
//				resultV.push_back(v[0]);
//			}
//		}
//	}
//}
//
//int main() {
//	int N;
//	int num;
//	int result = 0;
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		cin >> num;
//		if (num > 0) {
//			plusV.push_back(num);
//		}
//		else if (num < 0) {
//			minusV.push_back(num);
//		}
//		else {
//			hasZero = true;
//		}
//	}
//
//	sort(plusV.begin(), plusV.end());
//	sort(minusV.begin(), minusV.end(), compare);
//
//	addResult(plusV);
//	addResult(minusV);
//
//	for (auto& element : resultV) {
//		result += element;
//	}
//
//	cout << result;
//
//	return 0;
//}