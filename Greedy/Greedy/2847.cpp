//#include <iostream>
//
//using namespace std;
//
//int level[100];
//int N;
//int index;
//int num = 0;
//int result = 0;
//
//int main() {
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		cin >> level[i];
//	}
//
//	num = level[N - 1];
//
//	for (int i = N - 2; 0 <= i; i--) {
//		if (num <= level[i]) {
//			--num;
//			result += level[i] - num;
//		}
//		else {
//			num = level[i];
//		}
//	}
//
//	cout << result;
//
//	return 0;
//}