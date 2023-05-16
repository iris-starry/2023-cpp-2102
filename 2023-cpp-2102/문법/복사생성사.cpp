#include <iostream>
#include <string.h>

using namespace std;

class Munja{
public:	
	// 일반생성자
	Munja(const char* str) {
		// 3("abc") + 1('\0')
		str_ = new char[strlen(str) + 1];

		strcpy(str_, str); // str의 내용을 str_에 복사
		cout << "일반생성자 호출" << endl;
	}

	// 복사생성사
	Munja(const Munja& m) : str_(m.str_)
	{
		cout << "복사생성자 호출" << endl;
	}

	// 소멸자
	~Munja() {
		delete[] str_;
		cout << "소멸자 호출" << endl;
	}
private:
	char* str_;
};



int main(void) {

	Munja m1 = Munja("abc");  // 일반 생성자 호출
	Munja m2 = m1;			  // 복사 생성자 호출

}