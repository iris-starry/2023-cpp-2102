#include<iostream>
#include<string>

using namespace std;

// 서로 관련된 여러 data들을 하나의 의미있는 구조체로 묶어서 관리
// 구조체, 클래스는 일반적으로 단어의 첫 글자를 대문자로 합시다
// class는 디폴트가 private (sttuct는 디폴트가 public)
class Student {
public:
    string name;
    int id;
    // 성능 때문에 string으로 하지 않는다.
    // 일반적으로 string은 정수데이터보다 많은 메모리 공간을 요구하며
    // 정수는 비교연산을 한번에 할 수 있으나, 문자열은 글자 수 만큼 반복하여 비교해야함
    int age;
    // 가독성과 유지보수를 위해 열거형(enum)으로 하는 것을 추천
    // 남자 : 0 , 여자 : 1
    int sex;
    string department;

    void print(void) // 매개변수가 필요하지 않으니 (void)
    {
        cout << "이름 : " << name << endl;
        cout << "학번 : " << id << endl;
        cout << "나이 : " << age << endl;
        cout << "성별 (0)남자, (1)은 여자 : " << sex << endl;
        cout << "학과 : " << department << endl;
    }
};

int main() {
    class Student s1;
    Student s1;
    s1.name = "김선희";
    s1.age = 18;
    s1.id = 2102;
    s1.sex = 1;
    s1.department = "뉴미디어 소프트웨어과";
    s1.print();
    return 0;
}
