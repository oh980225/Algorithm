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
//	sort(perTime.begin(), perTime.end()); // �������� ����
//
//	for (int i = 0; i < n; i++) {
//		result += perTime[i] * (n - i); // �ߺ��Ǵ� ��ŭ ���ؼ� ����� ���ϱ�
//	}
//
//	cout << result;
//
//	return 0;
//}