#include <iostream>
#include <stdlib.h>
using namespace std;


//����
//������ ���ǵ� ��ġ�� ���� ������ ������ Ʋ������
//���ٹ���, ���ӱⰣ

class A {
private:
	int nop;


public:
	int _value;
	A() {
		cout << "A::������" << endl;
	}
	~A() {
		cout << "A::�Ҹ���" << endl;
	}

};

int main() {
	//C��Ÿ�� �޸� ���� �Ҵ�
	int *pa = (int*)malloc(sizeof(int));
	int *pb = (int*)malloc(sizeof(int));

	*pa = 100;
	printf("*pa = %d\n", *pa);
	free(pa);//���� �޸� �Ҵ� ����


	//C++��Ÿ�� �����޸� �Ҵ�
	pa = new int;
	pb = new int;


	*pa = 200;
	*pb = 100;
	cout << "*pa= " << *pa << endl;
	cout << "*pb= " << *pb << endl;

	delete pa; // ���� �޸� ����
	delete pb; // ���� �޸� ����

	//C ��ü �Ҵ�
	//malloc�� �����ڸ� ȣ�������� �ʽ��ϴ�
	//��ü�� new �����ڷ� �Ҵ��ؾ��Ѵ�

	A* pA = (A*)malloc(sizeof(A));
	A* pB = (A*)malloc(sizeof(A));

	pA->_value = 100;
	
	cout << "pA->_value= " << pA->_value << endl;
	
	pB->_value = 200;
	cout << "pB->_value= " << pB->_value << endl;


	free(pA);
	free(pB);
	//c++��Ÿ��

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