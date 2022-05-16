#include <iostream>
using namespace std;

class A {
private:
	int _value;
	int &_ref;//������ ��� ����
	const int MAX;//����� ����

public:
	//������ �ʱ�ȭ ����Ʈ. C++���� �����ϴ�. �Ҵ�� ���ÿ� �ʱ�ȭ
	A(int value, int &ref, int max)
		:_value(value), _ref(ref), MAX(max)
	{
		_value = value;
	}
	

	void info() {
		cout << "_value=" << _value << endl;
		cout << "_ref=" << _ref << endl;
		cout << "MAX=" << MAX << endl;
	}

};



int main() {
	int refvalue = 100;
	A a(100, refvalue, 200); //value 100, ref 100, MAX 200
	refvalue = 1000;//value 100, ref 1000, MAX 200
	a.info();//a.info�� ����Ǿ� cout ����

	
	int &ref = refvalue;
	ref = 2000;
	refvalue = 1500;

	cout << "&ref ������ refvalue���� ����"<<endl<<"�̶� &ref�� ���� " << &ref << endl;
	cout << "ref �� = " << ref << endl<<endl;
	cout << "&refvalue �� = " << &refvalue << endl;
	cout << "refvalue �� = " << refvalue << endl;

	//ref�� refvalue �� �߿� �ϳ��� ���� �ٲٸ� ���� ��ü ���� �ٲ�� ���� Ȯ�ΰ����ϴ�.


	return 0;
}
