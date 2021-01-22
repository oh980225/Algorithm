//#include <iostream>
//
//using namespace std;
//
//int coinArr[6] = { 500, 100, 50, 10, 5 ,1 };
//
//int main() {
//	int money;
//	int change;
//	int result = 0;
//
//	cin >> money;
//
//	change = 1000 - money;
//
//	for (auto& coin : coinArr) {
//		if (coin <= change) {
//			result += change / coin;
//			change %= coin;
//		}
//	}
//
//	cout << result;
//
//	return 0;
//}