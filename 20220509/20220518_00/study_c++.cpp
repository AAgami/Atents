#include<iostream>

using namespace std;
//캡슐화의 기본정책은 정보은닉
//이때 사용하는 것이 접근제어자
//private(default), protected(자식한테만 공개), public(외부에 공개)
//멤버변수는 감추고 멤버함수를 접근하게 할것

class Dragon {
private:
	int _health; //멤버변수

public:
	Dragon() { //기본 생성자. 

	}

	Dragon(int health) { //인자를 받는 생성자
		_health = health;
	}

	Dragon(Dragon& ref) { //레퍼런스를 받는 생성자
		_health = ref._health;
	}

	int GetHealth() { //멤버함수
		return _health;
	}

	void SetHealth(int value) {
		if(value > 100) {
			value = 100;
		}


		_health = value;


	}

	void Attack() {

	}

	void info() {

	}
};

int main() {
	Dragon dragon;

	return 0;
}