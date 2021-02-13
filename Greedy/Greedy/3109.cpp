#include <iostream>
#include <vector>

using namespace std;

int R;
int C;
bool check[10000][500];
string table[10000];
int moveArr[3][2] = { {-1 , 1}, {0, 1}, {1, 1} };

bool isLoad(int i, int j) {
	check[i][j] = true;

	if (j == (C - 1)) {
		return true;
	}

	for (int k = 0; k < 3; k++) {
		int nextI = i + moveArr[k][0];
		int nextJ = j + moveArr[k][1];
		if (0 <= nextI && nextI < R && 0 <= nextJ && j < nextJ && !check[nextI][nextJ] && table[nextI][nextJ] == '.') {
			bool flag = isLoad(nextI, nextJ);
			if (flag) {
				return flag;
			}
		}
	}

	return false;
}

int main() {
	int result = 0;
	
	cin >> R >> C;

	for (int i = 0; i < R; i++) {
		cin >> table[i];
	}

	for (int i = 0; i < R; i++) {
		if (isLoad(i, 0)) {
			result++;
		}
	}

	cout << result;

	return 0;
}