#include <iostream>	// cout, endl 사용
#include <string.h>	// strcpy() 사용

using namespace std;

class Student
{
private:
	int nHakbun;
	char* sName;

public:
	// 생성자 : 객체가 생성되면 자동으로 호출되는 함수
	// 반환형을 갖고있지 않는다
	Student();
	Student(int Hakbun, const char* Name);
	Student(const Student& rhs);
	~Student();

	void show();

};

Student::Student()
{
	nHakbun = 0;
	sName = nullptr;
}

// 멤버변수를 초기화 할 수 있으며 따라서,
// const형 변수와 참조형 변수를 멤버변수로 할 수 있다.
Student::Student(int Hakbun, const char* Name)
	: nHakbun(Hakbun)	// 멤버변수(매개변수)
{
	cout << "일반생성자 호출." << endl;
	int len = strlen(Name) + 1;		// 공간의 갯수 파악
	sName = new char[len];			// 갯수만큼 메모리 할당
	strcpy(sName, Name);
}

// 직접 작성 안해도 컴파일러가 알아서 만들어주는
// 복사생성자
Student::Student(const Student& rhs)
	:nHakbun(rhs.nHakbun), sName(rhs.sName)
{
	cout << "복사 생성자 호출." << endl;
	int len = strlen(rhs.sName) + 1;
	sName = new char[len];
	strcpy(sName, rhs.sName);
}

Student::~Student()
{
	delete[] sName;
	cout << "소멸자 호출" << endl;
}

void Student::show()
{
	cout << "학번은 " << nHakbun << "입니다" << endl;
	cout << "이름은 " << sName << "입니다" << endl << endl;
}

int main(void)
{
	// "일반생성자 호출" 출력
	Student stu1 = Student(1111, "JWP");
	// (1111, "JWP")가 복사됨. 일반생성자 호출X
	Student stu2 = stu1;

	stu1.show();
	stu2.show();

	return 0;
}



