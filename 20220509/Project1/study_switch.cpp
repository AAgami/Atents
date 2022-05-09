#include <iostream>
using namespace std;

int main() {
	int buttonNum = 0;

	cout << endl << "  무슨 버튼을 입력하실래요?" << endl << endl;
	cout << "  *------------------*" << endl;
	cout << "  l  0 -   볼륨 업   l" << endl;
	cout << "  l  1 -   볼륨 다운 l" << endl;
	cout << "  l  2 -   채널 업   l" << endl;
	cout << "  l  3 -   채널 다운 l" << endl;
	cout << "  *------------------*" << endl << endl;

	cin >> buttonNum;
	cout << endl;

	//정수 값의 변화에 따라서 분기시킬 때 
	switch (buttonNum) {
	case 0:
		cout << "  *------------------*" << endl;
		cout << "  l      볼륨 업~    l" << endl;
		cout << "  *------------------*" << endl;
		break;

	case 1:
		cout << "  *------------------*" << endl;
		cout << "  ㅣ   볼륨 다우운  ㅣ" << endl;
		cout << "  *------------------*" << endl;

		break;

	case 2:
		cout << "  *------------------*" << endl;
		cout << "  ㅣ    채널 업~~~  ㅣ" << endl;
		cout << "  *------------------*" << endl;
		break;

	case 3:
		cout << "  *------------------*" << endl;
		cout << " ㅣ  채널 다운우운.  ㅣ" << endl;
		cout << "  *------------------*" << endl;
		break;

	default://이도저도 아닐때
		cout << "  *--------------------------*" << endl;
		cout << " ㅣ   값을 찾을 수 없습니다.ㅣ" << endl;
		cout << "  *--------------------------*" << endl;
		break;
	}


	/*
		int buttonNum = 0;

	cout << "버튼 번호를 입력하세요" << endl;
	cin >> buttonNum;
	cout << endl;

		switch (buttonNum) {
	case 0:
		cout << "볼륨 업~" << endl;
		break;
	case 1:
		cout << "볼륨 다우운" << endl;
		break;
	case 2:
		cout << "채널 업~~~" << endl;
		break;
	case 3:
		cout << "채널 다운우운." << endl;
		break;

	default://이도저도 아닐때
		cout << "값을 찾을 수 없습니다." << endl;
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
   로 할 수도 있지만 가독성이 좋지않고 switch문이 더 적절하다.

	*/
}