#include <iostream>
using namespace std;

class A {
private:
	int _value;
	int &_ref;//참조형 멤버 변수
	const int MAX;//상수형 변수

public:
	//생성자 초기화 리스트. C++에서 유리하다. 할당과 동시에 초기화
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
	a.info();//a.info로 적용되어 cout 설명

	
	int &ref = refvalue;
	ref = 2000;
	refvalue = 1500;

	cout << "&ref 값에는 refvalue값이 들어갔다"<<endl<<"이때 &ref의 값은 " << &ref << endl;
	cout << "ref 값 = " << ref << endl<<endl;
	cout << "&refvalue 값 = " << &refvalue << endl;
	cout << "refvalue 값 = " << refvalue << endl;

	//ref와 refvalue 둘 중에 하나라도 값을 바꾸면 둘의 전체 값이 바뀌는 것을 확인가능하다.


	return 0;
}
