#include <iostream>
#include <string> 

using namespace std;

struct Actor {
    string name;
    string dialog;
};

//여러 data들을 하나의 의미있는 구조체로 묶어서 관리
//구조체,클래스는 일반적으로 단어의 첫 글자를 대문자로 한다
//class는 default가 private(struct는 default가 public)--시험
class Student {

public:
    //생성자(constructor) : 객체가 생성될 때 호출되는 함수
    //생성자를 정의하지 않으면 자동(default)으로 매개변수가 없는 생성자가 정의된다
    //Student(){ }
    //Student() {
        // name = "김선희";
        //student_num = 2102;
        //age = 18;
        // gender = 1;
        //department = "소프트웨어과";

    //}
    Student(string name, int student_num, int age, int gender, string department) {
        //this : 객체 자기자신을 가리키는 포인터
        //매개변수명과 멤버변수명이 같아도 구별 가능
        this->name = name;
        this->student_num = student_num;
        this->age = age;
        this->gender = gender;
        this->department = department;
    }
    //class는 멤버변수를 가질 수 있다--멤버함수
    void print(void)
    {
        cout << "이름: " << name << endl;
        cout << "학번: " << student_num << endl;
        cout << "나이: " << age << endl;
        cout << "성별(0)남자,(1)여자: " << gender << endl;
        cout << "학번: " << department << endl;
    }
private:
    string name;
    //시험X: 학번을 성능때문에 뮨자열로 하지 않음
    //일반적으로 문자열은 정수데이터보다 많은 메모리 공간을 요구하며
    //정수는 비교연산을 한번에 할 수 있으나, 문자열은 글자 수 만큼 반복하여 비교해야함
    int student_num;
    int age;
    //가독성과 유지보수를 위해 열거형(enum)으로 하는 것을 추천
    //0:남자 1:여자
    int gender;
    string department;
};

int main() {

    //(struct drink)자료형(C++에서는 drink만 써도  됨)/struct 자체가 자료형
    Student stu1 = Student("김선희", 2102, 18, 1, "뉴미디어 소프트웨어과");
    stu1.print();

    return 0;
}