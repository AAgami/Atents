#include <iostream>
using namespace std;

class Pig {
private:
	int _health;
	int _weight;
	int _height;
	int age;

public:
	
	Pig() {   // �⺻������
		cout << "Pig ������" << endl;
	}

	~Pig() {
		cout << "Pig �Ҹ���" << endl;
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
		Pig a;   // ������
	}
	
	cout << "�Ǳ�" << endl;

	return 0;
}