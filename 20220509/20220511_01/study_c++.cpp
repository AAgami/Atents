#include <iostream>
using namespace std;

class Pig {
private:
	int _health;
	int _weight;
	int _height;
	int age;

public:
	
	Pig() {   // 기본생성자
		cout << "Pig 생성자" << endl;
	}

	~Pig() {
		cout << "Pig 소멸자" << endl;
	}


	int GetHealth() {
		return _health;
	}

	void SetHealth(int value) {
		_health = value;
	}
};

int main() {
	
	{
		Pig a;   // 생성자
	}
	
	cout << "피그" << endl;

	return 0;
}