//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int N;
//int currentPayIdx = 0;
//int nextPayIdx = 1;
//int dstIdx = 0;
//vector<long long> pay;
//vector<long long> dst;
//
//int main() {
//	int num;
//	long long money = 0;
//
//	cin >> N;
//
//	for (int i = 0; i < N - 1; i++) {
//		cin >> num;
//		dst.push_back(num);
//	}
//
//	for (int i = 0; i < N; i++) {
//		cin >> num;
//		pay.push_back(num);
//	}
//
//	while (1) {
//		money += pay[currentPayIdx] * dst[dstIdx];
//		if (dstIdx == (dst.size() - 1)) {
//			break;
//		}
//		if (pay[currentPayIdx] > pay[nextPayIdx]) {
//			currentPayIdx = nextPayIdx;
//		}
//		nextPayIdx++;
//		dstIdx++;
//	}
//
//	cout << money;
//
//	return 0;
//}