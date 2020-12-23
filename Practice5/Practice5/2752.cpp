//#include <iostream>
//
//using namespace std;
//
//int numArray[4];
//
//int main() {
//	int min, temp, index = 0;
//
//	for (int i = 0; i < 3; i++) {
//		cin >> numArray[i];
//	}
//
//	for (int i = 0; i < 3; i++) {
//		min = 1000001;
//
//		for (int j = i; j < 3; j++) {
//			if (numArray[j] < min) {
//				min = numArray[j];
//				index = j;
//			}
//		}
//
//		temp = numArray[index];
//		numArray[index] = numArray[i];
//		numArray[i] = temp;
//	}
//
//	for (int i = 0; i < 3; i++) {
//		cout << numArray[i] << " ";
//	}
//
//	return 0;
//}