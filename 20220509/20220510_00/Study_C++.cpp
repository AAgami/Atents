#include <iostream>
#include <string>
using namespace std;

// ĸ��ȭ -> Ŭ������ ����Ÿ Ÿ��
// Son�̶�� Ŭ������ ����Ÿ Ÿ���� ��������ϴ�.
class Son {
public:
	string address;   // �������
	string juminNum;
	char bloodtype;
	int phoneNumber;
	int age;
	bool sungbyul;
};

int main() {
	Son a;
	a.address = "����";
	a.juminNum = "96000000";
	a.bloodtype = 'A';
	a.phoneNumber = 123123123;
	a.age = 30;
	a.sungbyul = true;

	cout << "�ּ�: " << a.address << endl;
	cout << "�ֹι�ȣ: " << a.juminNum << endl;
	cout << "������: " << a.bloodtype << endl;
	cout << "��ȭ��ȣ: " << a.phoneNumber << endl;
	cout << "����: " << a.age << endl;

	if (a.sungbyul) {
		cout << "����: ����" << endl;
	}
	else {
		cout << "����: ����" << endl;
	}

	Son b;

	b.address = "����";


	return 0;
}