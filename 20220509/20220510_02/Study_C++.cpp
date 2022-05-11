#include <iostream>
#include <string>

using namespace std;

// 손흥민을 축구게임에서 추상화하시고
// 단순화한 데이타를 캡슐화하셔서
// 클래스형 데이타 타입을 만드시고
// 만드신 데이타 타입으로 변수를 만들고 
// 멤버변수에 값을 채우시고 값을 출력해보세요.

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
	SoccerSon a; // 클래스형 데이타 타입으로 만들어진
			 // 변수를 객체라고 합니다.
	a.SetHeight(10);
	a.SetWeight(100);

	cout << a.GetHeight() << endl;
	cout << a.GetWeight() << endl;




	return 0;
}