#include <iostream>
#include <string>

using namespace std;

//����� �౸���ӿ��� �߻�ȭ
//�ܼ�ȭ�� ������ ĸ��ȭ
//Ŭ������ ������ Ÿ��
//��������� ���� �����
//���� �� ä���� �� ��µ��
//�౸����
//ű��, �౸ȭ, ������, ����, ����, ü�� 

class son {
public:
	string PlayerName;
	string ShoesName;
	char PlayerRank;
	int PlayerHeight;
	int PlayerWeight;
	bool PlayerBool;
};

int main() {
	son a;
	a.PlayerName = "�����";
	a.ShoesName = "����Ű �౸ȭ";
	a.PlayerRank = 'S';
	a.PlayerHeight = 183;
	a.PlayerWeight = 80;
	a.PlayerBool = true;

	cout << "�̸�: " << a.PlayerName << endl;
	cout << "�౸ȭ: " << a.ShoesName << endl;
	cout << "���: " << a.PlayerRank << endl;
	cout << "Ű: " << a.PlayerHeight << endl;
	cout << "������: " << a.PlayerWeight << endl;
	/*if (a.playerBool) {
		cout << "��¥ ������Դϴ�." << endl;
	}
	else {
		cout << "�ƴմϴ�" << endl;
	}
	*/


	return 0;
}