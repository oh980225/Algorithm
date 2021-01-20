//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int n;
//	vector<int> perTime;
//	int num;
//	int result = 0;
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> num;
//		perTime.push_back(num);
//	}
//
//	sort(perTime.begin(), perTime.end()); // 오름차순 정렬
//
//	for (int i = 0; i < n; i++) {
//		result += perTime[i] * (n - i); // 중복되는 만큼 곱해서 결과에 더하기
//	}
//
//	cout << result;
//
//	return 0;
//}