//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main() {
//	string str;
//	int start = 0;
//	int number = 0;
//	vector<string> strArr;
//	vector<string> calArr;
//
//	cin >> str;
//
//	for (int i = 0; i < str.size(); i++) {
//		if (str[i] == '-') {
//			strArr.push_back(str.substr(start, i-start));
//			start = i + 1;
//		}
//	}
//	strArr.push_back(str.substr(start, str.size()));
//
//	for (auto& cal : strArr) {
//		start = 0;
//		calArr.clear();
//		for (int i = 0; i < cal.size(); i++) {
//			if (cal[i] == '+') {
//				calArr.push_back(cal.substr(start, i - start));
//				start = i + 1;
//			}
//		}
//
//		calArr.push_back(cal.substr(start, cal.size()));
//
//		for (auto& num : calArr) {
//			int n = atoi(num.c_str());
//			number += n;
//		}
//		cal = to_string(number);
//		number = 0;
//	}
//
//	int result = 0;
//	
//	result += atoi(strArr[0].c_str());
//	strArr.erase(strArr.begin());
//
//	for (auto& cal : strArr) {
//		result -= atoi(cal.c_str());
//	}
//
//	cout << result;
//
//	return 0;
//}