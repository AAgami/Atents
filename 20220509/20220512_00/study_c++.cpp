#include <iostream>
using namespace std;

int global = 100;//괄호 밖에서도 변수 만들기 ok.--->외부변수

class A { //클래스 안에서도 변수 만들기  ok
public:
	int value;//클래스 안 멤버변수

	int add(int a, int b) {
		int temp = a + b;//함수 안 일반변수
		return temp;
	}
};



int main() {
	int a=100; //로컬변수

	{
		int a=200;// 블럭안에서만 존재한다. 위와 다른 a이다. 이 안에서만 존재
		cout << a << endl;

	}

	cout << a << endl;

	return 0;
}