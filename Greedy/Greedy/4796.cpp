//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<int> lV;
//vector<int> pV;
//vector<int> vV;
//
//int main() {
//	int L = -1;
//	int P = -1;
//	int V = -1;
//	int result = 0;
//	int share = 0;
//	int remainder = 0;
//
//	while (L != 0 && P != 0 && V != 0) {
//		cin >> L;
//		cin >> P;
//		cin >> V;
//		lV.push_back(L);
//		pV.push_back(P);
//		vV.push_back(V);
//	}
//
//	for (int i = 0; i < lV.size() - 1; i++) {
//		share = vV[i] / pV[i];
//		remainder = vV[i] - pV[i] * share;
//		if (remainder > lV[i]) {
//			remainder = lV[i];
//		}
//		result = lV[i] * share + remainder;
//		cout << "Case " << i + 1 << ": " << result << endl;
//	}
//
//	return 0;
//}