#include <iostream>
using namespace std;

int main() {
	int buttonNum = 0;

	cout << endl << "  ���� ��ư�� �Է��ϽǷ���?" << endl << endl;
	cout << "  *------------------*" << endl;
	cout << "  l  0 -   ���� ��   l" << endl;
	cout << "  l  1 -   ���� �ٿ� l" << endl;
	cout << "  l  2 -   ä�� ��   l" << endl;
	cout << "  l  3 -   ä�� �ٿ� l" << endl;
	cout << "  *------------------*" << endl << endl;

	cin >> buttonNum;
	cout << endl;

	//���� ���� ��ȭ�� ���� �б��ų �� 
	switch (buttonNum) {
	case 0:
		cout << "  *------------------*" << endl;
		cout << "  l      ���� ��~    l" << endl;
		cout << "  *------------------*" << endl;
		break;

	case 1:
		cout << "  *------------------*" << endl;
		cout << "  ��   ���� �ٿ��  ��" << endl;
		cout << "  *------------------*" << endl;

		break;

	case 2:
		cout << "  *------------------*" << endl;
		cout << "  ��    ä�� ��~~~  ��" << endl;
		cout << "  *------------------*" << endl;
		break;

	case 3:
		cout << "  *------------------*" << endl;
		cout << " ��  ä�� �ٿ���.  ��" << endl;
		cout << "  *------------------*" << endl;
		break;

	default://�̵����� �ƴҶ�
		cout << "  *--------------------------*" << endl;
		cout << " ��   ���� ã�� �� �����ϴ�.��" << endl;
		cout << "  *--------------------------*" << endl;
		break;
	}


	/*
		int buttonNum = 0;

	cout << "��ư ��ȣ�� �Է��ϼ���" << endl;
	cin >> buttonNum;
	cout << endl;

		switch (buttonNum) {
	case 0:
		cout << "���� ��~" << endl;
		break;
	case 1:
		cout << "���� �ٿ��" << endl;
		break;
	case 2:
		cout << "ä�� ��~~~" << endl;
		break;
	case 3:
		cout << "ä�� �ٿ���." << endl;
		break;

	default://�̵����� �ƴҶ�
		cout << "���� ã�� �� �����ϴ�." << endl;
		break;
	}
	*/


	/*
	
	  if (buttonNum == 0) {

   }
   else if (buttonNum == 1) {

   }
   else if (buttonNum == 2) {

   }
   �� �� ���� ������ �������� �����ʰ� switch���� �� �����ϴ�.

	*/
}