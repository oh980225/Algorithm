//#include <cstdio>
//
//using namespace std;
//
//int G;
//int P;
//int gate[100001];
//
//int getParent(int x) {
//	if (gate[x] == x) {
//		return x;
//	}
//	return gate[x] = getParent(gate[x]);
//}
//
//void unionParent(int a, int b) {
//	a = getParent(a);
//	b = getParent(b);
//	gate[a] = b;
//}
//
//int main() {
//	int num;
//	int result = 0;
//	int parent;
//
//	scanf("%d", &G);
//	scanf("%d", &P);
//
//	for (int i = 1; i <= G; i++) {
//		gate[i] = i;
//	}
//
//	for (int i = 0; i < P; i++) {
//		scanf("%d", &num);
//		parent = getParent(num);
//
//		if (parent == 0) {
//			break;
//		}
//		result++;
//		unionParent(parent, parent - 1);
//	}
//
//	printf("%d", result);
//
//	return 0;
//}