#include <iostream>

using namespace std;

int main() {
	
	/*
	int a = 20;
	//if(조건식) {
	// }



	if (a > 10) {   // 단일 조건문
		cout << a << "가 10보다 크다" << endl;
	}

	if (a > 10) {   // 이중 조건문
		cout << a << "가 10보다 크다" << endl;
	}
	else {
		cout << a << "가 10보다 작거나 같다." << endl;
	}

	*/


	int money = 0;
	cout << "돈을 얼마나 가지고 있나요? : " << endl << endl;
	cin >> money;
	cout << endl;

	if (money > 9999) {   // 조건이 여러개일때 다중 조건문
		cout << "영화를 보러가요" << endl;
	}
	else if (money > 7000) {
		cout << "중국집에 짬뽕 먹으러가요" << endl;

	}
	else if (money > 5000) {
		cout << "PC방을 가요" << endl;
	}
	else {   // 생략가능
		cout << "낮잠이나 자요" << endl;
	}


	return 0;
}