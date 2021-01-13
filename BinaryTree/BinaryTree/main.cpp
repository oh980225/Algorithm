#include <iostream>

using namespace std;

const int number = 15;

// 하나의 노드 정보를 선언합니다.
typedef struct node *treePointer; // node라는 구조체를 treePointer라는 이름으로 포인터형식으로 사용하겠다!
typedef struct node {
	int data;
	treePointer leftChild, rightChild;
} node;

// 전위 순회 구현
void preorder(treePointer ptr) {
	if (ptr) {
		cout << ptr->data << " ";
		preorder(ptr->leftChild);
		preorder(ptr->rightChild);
	}
}

// 중위 순회 구현
void inorder(treePointer ptr) {
	if (ptr) {
		inorder(ptr->leftChild);
		cout << ptr->data << " ";
		inorder(ptr->rightChild);
	}
}

// 후위 순회 구현
void postorder(treePointer ptr) {
	if (ptr) {
		postorder(ptr->leftChild);
		postorder(ptr->rightChild);
		cout << ptr->data << " ";
	}
}

int main() {
	node nodes[number + 1];

	for (int i = 1; i <= number; i++) {
		nodes[i].data = i;
		nodes[i].leftChild = NULL;
		nodes[i].rightChild = NULL;
	}

	// 짝수는 왼쪽자식으로 홀수는 오른쪽 자식으로 연결
	for (int i = 1; i <= number; i++) {
		if (i % 2 == 0) {
			nodes[i / 2].leftChild = &nodes[i];
		}
		else {
			nodes[i / 2].rightChild = &nodes[i];
		}
	}

	//preorder(&nodes[1]);

	//inorder(&nodes[1]);

	postorder(&nodes[1]);

	return 0;
}