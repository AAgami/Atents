#include <iostream>
#include <string>

using namespace std;

// ������� �౸���ӿ��� �߻�ȭ�Ͻð�
// �ܼ�ȭ�� ����Ÿ�� ĸ��ȭ�ϼż�
// Ŭ������ ����Ÿ Ÿ���� ����ð�
// ����� ����Ÿ Ÿ������ ������ ����� 
// ��������� ���� ä��ð� ���� ����غ�����.

class SoccerSon {
private:
	float _height;
	float _weight;
	float _speed;
	string _teamname;

public:
	void SetHeight(float value) {
		_height = value;
	}

	float GetHeight() {
		return  _height;
	}

	void SetWeight(float value) {
		_weight = value;
	}

	float GetWeight() {
		return _weight;
	}

};

int main() {
	SoccerSon a; // Ŭ������ ����Ÿ Ÿ������ �������
			 // ������ ��ü��� �մϴ�.
	a.SetHeight(10);
	a.SetWeight(100);

	cout << a.GetHeight() << endl;
	cout << a.GetWeight() << endl;




	return 0;
}