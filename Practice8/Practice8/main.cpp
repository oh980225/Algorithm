//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	vector<pair<int, string> > v; // 한쌍(pair -> 라이브러리)의 데이터를 int, string으로 묶어준 것!
//	v.push_back(pair<int, string>(100, "l0_0l"));
//	v.push_back(pair<int, string>(70, "tester"));
//	v.push_back(pair<int, string>(85, "helloMan"));
//	v.push_back(pair<int, string>(95, "hiMan"));
//	v.push_back(pair<int, string>(67, "heyMan"));
//
//	sort(v.begin(), v.end()); // 첫번째 인자로 비교해서 정렬
//
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i].second << ' '; // 두번째 값 출력
//	}
//
//	return 0;
//}