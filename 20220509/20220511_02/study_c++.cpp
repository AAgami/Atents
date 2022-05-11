#include <iostream>

using namespace std;

struct Student {
	int age;
	int grade;
	char name[100];
};


void func(int &ref) {
	ref = 1000;
}


void funcp(int * pa) {
	int a;
	*pa = 1000;

	pa = &a;
}


void funcs(Student &value) {

	value.age = 10;
	value.grade = 3;
	value.name[0] = 'M';
	value.name[1] = 'O';
	value.name[2] = '\0';

}


int main() {
	// 참조형


	int a = 20;
	int b = 30;

	int & ref = a;   // 참조형 
	//ref = a;

	cout << "ref = " << ref << endl;

	ref = 100;

	cout << "a = " << a << endl;

	func(a);

	cout << "a = " << a << endl;

	int *pa = &a;

	pa = &b;

	cout << "*pa = " << *pa << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	pa = &a;
	cout << "*pa = " << *pa << endl;


	Student st;

	funcs(st);

	cout << "st.age = " << st.age << endl;
	cout << "st.grade = " << st.grade << endl;
	cout << "st.name = " << st.name << endl;





	return 0;
}