#include <iostream>
#include <string>
using namespace std;

// 캡슐화 -> 클래스형 데이타 타입
// Son이라는 클래스형 데이타 타입을 만들었습니다.
class Son {
public:
	string address;   // 멤버변수
	string juminNum;
	char bloodtype;
	int phoneNumber;
	int age;
	bool sungbyul;
};

int main() {
	Son a;
	a.address = "런던";
	a.juminNum = "96000000";
	a.bloodtype = 'A';
	a.phoneNumber = 123123123;
	a.age = 30;
	a.sungbyul = true;

	cout << "주소: " << a.address << endl;
	cout << "주민번호: " << a.juminNum << endl;
	cout << "혈액형: " << a.bloodtype << endl;
	cout << "전화번호: " << a.phoneNumber << endl;
	cout << "나이: " << a.age << endl;

	if (a.sungbyul) {
		cout << "성별: 여자" << endl;
	}
	else {
		cout << "성별: 남자" << endl;
	}

	Son b;

	b.address = "런던";


	return 0;
}