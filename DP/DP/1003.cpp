//#include <iostream> 
//#include <vector>
//
//using namespace std;
//
//int zero[41];
//int one[41];
//int N, T;
//vector<int> v;
//
//int fiboZero(int n) {
//	if (n == 0) {
//		return zero[n] = 1;
//	}
//	if (n == 1) {
//		return zero[n] = 0;
//	}
//	if (zero[n]) {
//		return zero[n];
//	}
//	return zero[n] = fiboZero(n - 1) + fiboZero(n - 2);
//}
//
//int fiboOne(int n) {
//	if (n == 0) {
//		return one[n] = 0;
//	}
//	if (n == 1) {
//		return one[n] = 1;
//	}
//	if (one[n]) {
//		return one[n];
//	}
//	return one[n] = fiboOne(n - 1) + fiboOne(n - 2);
//}
//
//int main() {
//	cin >> T;
//
//	for (int i = 0; i < T; i++) {
//		cin >> N;
//		v.push_back(N);
//		fiboZero(N);
//		fiboOne(N);
//	}
//
//	for (int i = 0; i < T; i++) {
//		cout << zero[v[i]] << ' ' << one[v[i]] << '\n';
//	}
//
//	return 0;
//}