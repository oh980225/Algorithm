//#include <iostream>
//
//using namespace std;
//
//int numArray[1001];
//
//int main() {
//	int min, number, temp, index;
//
//	cin >> number;
//
//	for (int i = 0; i < number; i++) {
//		cin >> numArray[i];
//	}
//
//	for (int i = 0; i < number; i++) {
//		min = 1001;
//
//		for (int j = i; j < number; j++) {
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
//	for (int i = 0; i < number; i++) {
//		cout << numArray[i] << endl;
//	}
//
//	return 0;
//}