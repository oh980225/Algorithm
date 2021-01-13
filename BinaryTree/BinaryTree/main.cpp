#include <iostream>

using namespace std;

const int number = 15;

// �ϳ��� ��� ������ �����մϴ�.
typedef struct node *treePointer; // node��� ����ü�� treePointer��� �̸����� �������������� ����ϰڴ�!
typedef struct node {
	int data;
	treePointer leftChild, rightChild;
} node;

// ���� ��ȸ ����
void preorder(treePointer ptr) {
	if (ptr) {
		cout << ptr->data << " ";
		preorder(ptr->leftChild);
		preorder(ptr->rightChild);
	}
}

// ���� ��ȸ ����
void inorder(treePointer ptr) {
	if (ptr) {
		inorder(ptr->leftChild);
		cout << ptr->data << " ";
		inorder(ptr->rightChild);
	}
}

// ���� ��ȸ ����
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

	// ¦���� �����ڽ����� Ȧ���� ������ �ڽ����� ����
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