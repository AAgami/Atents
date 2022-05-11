#include <iostream>
using namespace std;

//캡슐화
//........외부에서접근하는것을막는뭐시라

//접근제어자
//private: 철저하게 안보여준다.
//protected: 자식에게만 공개
//public: 공개


class A {
public:
	int _value;
};
//--------------------------------------------------------

class B {
private:
	int _value;//멤버변수

public:
	int GetValue() { //멤버함수
		return _value;
	}

	void SetValue(int value) {
		_value = value;

		if (_value >= 200) {
			cout << _value;
		}
	}
};
//--------------------------------------------------------

void func1(A& ref, B& ref2) {
	ref._value = 100;
	ref2.SetValue(100);
}



void func2(A& ref, B& ref2) {
	ref._value = 200;
	ref2.SetValue(200);
}
//-------------------------------------------------------

int main() {
	A a;
	B b;

	func1(a, b);

	cout << "A.a=" << a._value << endl << "B.b=" << b.GetValue() << endl;

	func2(a, b);
	cout << endl;

	cout << "A.a=" << a._value << endl << "B.b=" << b.GetValue() << endl;
	return 0;
}