//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//string a[20000];
//int n;
//
//int getSum(string a) {
//	int length = a.length();
//	int sum = 0;
//
//	for (int i = 0; i < length; i++) {
//		if (a[i] - '0' <= 9 && a[i] - '0' >= 0) { // 숫자인 경우만 골라내는 것
//			sum += a[i] - '0';
//		}
//	}
//	return sum;
//}
//
//bool compare(string a, string b) { 
//	if (a.length() < b.length()) { 
//		return 1;
//	}
//	else if (a.length() > b.length()) {
//		return 0;
//	}
//	else {
//		int aSum = getSum(a);
//		int bSum = getSum(b);
//		
//		if (aSum != bSum) {
//			return aSum < bSum;
//		}
//		else {
//			return a < b;
//		}
//	}
//}
//
//int main() {
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//
//	sort(a, a + n, compare);
//
//	for (int i = 0; i < n; i++) {
//		if (i > 0 && a[i] == a[i - 1]) {
//			continue;
//		}
//		else {
//			cout << a[i] << endl;
//		}
//	}
//
//	return 0;
//}