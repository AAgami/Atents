#include <iostream>
using namespace std;
//기본생성자, 인자를 받는 생성자, 복사생성자, 이동생성자

class Student {
	int _grade;
	int _classNum;
	string _name;

public:
	static int count;

	Student(int grade, int classNum, string name)
		:_grade(grade), _classNum(classNum), _name(name) {
		count++;
	}

	~Student() {//~ 소멸자
		count--;
	}

};

int Student::count = 0; //Student 에 속해있는 count 변수를 초기화해주는 줄이다.

int main() {
	Student a(3, 10, "Monster");
	cout << "Student::count=" << Student::count << endl;

	Student b(1, 5, "Monster2");
	cout << "Student::count=" << Student::count << endl;

	Student c(4, 6, "Monster3");
	cout << "Student::count=" << Student::count << endl;



	return 0;
}