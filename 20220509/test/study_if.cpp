#include <iostream>

using namespace std;

int main() {
	
	/*
	int a = 20;
	//if(���ǽ�) {
	// }



	if (a > 10) {   // ���� ���ǹ�
		cout << a << "�� 10���� ũ��" << endl;
	}

	if (a > 10) {   // ���� ���ǹ�
		cout << a << "�� 10���� ũ��" << endl;
	}
	else {
		cout << a << "�� 10���� �۰ų� ����." << endl;
	}

	*/


	int money = 0;
	cout << "���� �󸶳� ������ �ֳ���? : " << endl << endl;
	cin >> money;
	cout << endl;

	if (money > 9999) {   // ������ �������϶� ���� ���ǹ�
		cout << "��ȭ�� ��������" << endl;
	}
	else if (money > 7000) {
		cout << "�߱����� «�� ����������" << endl;

	}
	else if (money > 5000) {
		cout << "PC���� ����" << endl;
	}
	else {   // ��������
		cout << "�����̳� �ڿ�" << endl;
	}


	return 0;
}