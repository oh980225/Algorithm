//#include <iostream>
//#include <string>
//#include <queue>
//
//using namespace std;
//
//int main() {
//	priority_queue<int, vector<int>, less<int>> q; // less -> DESC, greater -> ASC
//
//	if (q.empty()) {
//		cout << "우선 순위 큐 empty" << endl;
//	}
//
//	q.push(4);
//	q.push(4);
//	q.push(1);
//	q.push(2);
//	q.push(3);
//
//	cout << "맨 위: " << q.top() << endl;
//
//	cout << "나가는 순서: ";
//
//	while (!q.empty()) {
//		cout << q.top() << " ";
//		q.pop();
//	}
//
//	cout << endl;
//
//	return 0;
//}