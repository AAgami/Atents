#include<iostream>

using namespace std;
//ĸ��ȭ�� �⺻��å�� ��������
//�̶� ����ϴ� ���� ����������
//private(default), protected(�ڽ����׸� ����), public(�ܺο� ����)
//��������� ���߰� ����Լ��� �����ϰ� �Ұ�

class Dragon {
private:
	int _health; //�������

public:
	Dragon() { //�⺻ ������. 

	}

	Dragon(int health) { //���ڸ� �޴� ������
		_health = health;
	}

	Dragon(Dragon& ref) { //���۷����� �޴� ������
		_health = ref._health;
	}

	int GetHealth() { //����Լ�
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