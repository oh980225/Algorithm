//#include <iostream>
//
//using namespace std;
//
//string s;
//long long zeroCnt;
//long long oneCnt;
//char prevNum = 'a';
//
//int main() {
//	cin >> s;
//
//	for (long long i = 0; i < s.length(); i++) {
//		if (s[i] != prevNum) {
//			if (s[i] == '0') {
//				zeroCnt++;
//				prevNum = s[i];
//			}
//			else {
//				oneCnt++;
//				prevNum = s[i];
//			}
//		}
//	}
//
//	long long result = min(zeroCnt, oneCnt);
//
//	cout << result;
//
//	return 0;
//}