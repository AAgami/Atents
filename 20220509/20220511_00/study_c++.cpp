#include <iostream>
using namespace std;

//ĸ��ȭ
//........�ܺο��������ϴ°������¹��ö�

//����������
//private: ö���ϰ� �Ⱥ����ش�.
//protected: �ڽĿ��Ը� ����
//public: ����


class A {
public:
	int _value;
};
//--------------------------------------------------------

class B {
private:
	int _value;//�������

public:
	int GetValue() { //����Լ�
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