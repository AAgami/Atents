#include <iostream>
using namespace std;

int global = 100;//��ȣ �ۿ����� ���� ����� ok.--->�ܺκ���

class A { //Ŭ���� �ȿ����� ���� �����  ok
public:
	int value;//Ŭ���� �� �������

	int add(int a, int b) {
		int temp = a + b;//�Լ� �� �Ϲݺ���
		return temp;
	}
};



int main() {
	int a=100; //���ú���

	{
		int a=200;// ���ȿ����� �����Ѵ�. ���� �ٸ� a�̴�. �� �ȿ����� ����
		cout << a << endl;

	}

	cout << a << endl;

	return 0;
}