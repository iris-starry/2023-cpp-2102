#include<iostream>
#include<string>

using namespace std;

// ���� ���õ� ���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����
// ����ü, Ŭ������ �Ϲ������� �ܾ��� ù ���ڸ� �빮�ڷ� �սô�
// class�� ����Ʈ�� private (sttuct�� ����Ʈ�� public)
class Student {
public:
    string name;
    int id;
    // ���� ������ string���� ���� �ʴ´�.
    // �Ϲ������� string�� ���������ͺ��� ���� �޸� ������ �䱸�ϸ�
    // ������ �񱳿����� �ѹ��� �� �� ������, ���ڿ��� ���� �� ��ŭ �ݺ��Ͽ� ���ؾ���
    int age;
    // �������� ���������� ���� ������(enum)���� �ϴ� ���� ��õ
    // ���� : 0 , ���� : 1
    int sex;
    string department;

    void print(void) // �Ű������� �ʿ����� ������ (void)
    {
        cout << "�̸� : " << name << endl;
        cout << "�й� : " << id << endl;
        cout << "���� : " << age << endl;
        cout << "���� (0)����, (1)�� ���� : " << sex << endl;
        cout << "�а� : " << department << endl;
    }
};

int main() {
    class Student s1;
    Student s1;
    s1.name = "�輱��";
    s1.age = 18;
    s1.id = 2102;
    s1.sex = 1;
    s1.department = "���̵�� ����Ʈ�����";
    s1.print();
    return 0;
}
