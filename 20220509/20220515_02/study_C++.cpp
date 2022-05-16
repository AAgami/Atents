#include <iostream>
using namespace std;
//�⺻������, ���ڸ� �޴� ������, ���������, �̵�������

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

	~Student() {//~ �Ҹ���
		count--;
	}

};

int Student::count = 0; //Student �� �����ִ� count ������ �ʱ�ȭ���ִ� ���̴�.

int main() {
	Student a(3, 10, "Monster");
	cout << "Student::count=" << Student::count << endl;

	Student b(1, 5, "Monster2");
	cout << "Student::count=" << Student::count << endl;

	Student c(4, 6, "Monster3");
	cout << "Student::count=" << Student::count << endl;



	return 0;
}