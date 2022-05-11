#include <iostream>
#include <string>

using namespace std;

//손흥민 축구게임에서 추상화
//단순화한 데이터 캡슐화
//클래스형 데이터 타입
//만든것으로 변수 만들고
//변수 값 채워서 값 출력등급
//축구게임
//킥력, 축구화, 지구력, 신장, 몸값, 체력 

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
	a.PlayerName = "손흥민";
	a.ShoesName = "나이키 축구화";
	a.PlayerRank = 'S';
	a.PlayerHeight = 183;
	a.PlayerWeight = 80;
	a.PlayerBool = true;

	cout << "이름: " << a.PlayerName << endl;
	cout << "축구화: " << a.ShoesName << endl;
	cout << "등급: " << a.PlayerRank << endl;
	cout << "키: " << a.PlayerHeight << endl;
	cout << "몸무게: " << a.PlayerWeight << endl;
	/*if (a.playerBool) {
		cout << "진짜 손흥민입니다." << endl;
	}
	else {
		cout << "아닙니다" << endl;
	}
	*/


	return 0;
}