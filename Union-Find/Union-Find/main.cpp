#include <stdio.h>

int getParent(int parent[], int x) {
	if (parent[x] == x) return x;
	return parent[x] = getParent(parent, parent[x]);
}

void unionParent(int parent[], int a, int b) {
	a = getParent(parent, a);
	b = getParent(parent, b);
	if (a < b) parent[b] = a;
	else parent[a] = b;
}

int findParent(int parent[], int a, int b) {
	a = getParent(parent, a);
	b = getParent(parent, b);
	if (a == b) return 1;
	return 0;
}

int main() {
	int parent[9];
	for (int i = 1; i <= 8; i++) {
		parent[i] = i;
	}
	unionParent(parent, 4, 6);
	unionParent(parent, 2, 3);
	unionParent(parent, 3, 4);

	unionParent(parent, 5, 6);
	unionParent(parent, 6, 7);
	unionParent(parent, 1, 6);

	printf("1 and 5 -> %d\n", findParent(parent, 1, 5));
	unionParent(parent, 1, 5);
	printf("union!\n");
	printf("1 and 5 -> %d", findParent(parent, 1, 5));

	return 0;
}