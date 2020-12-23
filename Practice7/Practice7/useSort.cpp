#include <iostream>
#include <algorithm>

using namespace std;

class Student {
public:
	string name;
	int score;
	Student(string name, int score) {
		this->name = name;
		this->score = score;
	}
	// 정렬기준 -> 점수가 작은 순서
	bool operator <(Student& student) {
		return this->score < student.score;
	}
};

int main() {
	Student students[] = {
		Student("ABC", 100),
		Student("BCD", 50),
		Student("Tester", 90),
		Student("HelloMan", 22),
		Student("HiMan", 87),
	};

	sort(students, students + 5);

	for (int i = 0; i < 5; i++) {
		cout << students[i].name << " ";
	}

	return 0;
}