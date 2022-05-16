#include <iostream>
#include <stdlib.h>
using namespace std;


//변수
//변수를 정의된 위치에 따라서 변수의 성격이 틀려진다
//접근범위, 존속기간

class A {
private:
	int nop;


public:
	int _value;
	A() {
		cout << "A::생성자" << endl;
	}
	~A() {
		cout << "A::소멸자" << endl;
	}

};

int main() {
	//C스타일 메모리 동적 할당
	int *pa = (int*)malloc(sizeof(int));
	int *pb = (int*)malloc(sizeof(int));

	*pa = 100;
	printf("*pa = %d\n", *pa);
	free(pa);//동적 메모리 할당 해제


	//C++스타일 동적메모리 할당
	pa = new int;
	pb = new int;


	*pa = 200;
	*pb = 100;
	cout << "*pa= " << *pa << endl;
	cout << "*pb= " << *pb << endl;

	delete pa; // 동적 메모리 해제
	delete pb; // 동적 메모리 해제

	//C 객체 할당
	//malloc은 생성자를 호출해주지 않습니다
	//객체는 new 연산자로 할당해야한다

	A* pA = (A*)malloc(sizeof(A));
	A* pB = (A*)malloc(sizeof(A));

	pA->_value = 100;
	
	cout << "pA->_value= " << pA->_value << endl;
	
	pB->_value = 200;
	cout << "pB->_value= " << pB->_value << endl;


	free(pA);
	free(pB);
	//c++스타일

	pA = new A;
	pB = new A;

	pA->_value = 200;

	cout << "pA->_value= " << pA->_value << endl;

	pB->_value = 500;

	cout << "pB->_value= " << pB->_value << endl;


	delete(pA);
	delete(pB);


	return 0;
}