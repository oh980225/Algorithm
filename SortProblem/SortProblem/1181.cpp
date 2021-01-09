//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//string a[20000];
//int n;
//
//bool compare(string a, string b) { // a가 자신이라 생각
//	if (a.length() < b.length()) { // 자신이 b보다 작으면 우선순위 높아짐
//		return 1;
//	}
//	else if (a.length() > b.length()) {
//		return 0;
//	}
//	else {
//		return a < b; // 사전순 정렬
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