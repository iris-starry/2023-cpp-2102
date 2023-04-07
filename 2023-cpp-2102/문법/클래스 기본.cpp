#include<iostream>
#include<string>
using namespace std;
// ���� ���õ� ���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����
// ����ü, Ŭ������ �Ϲ������� �ܾ��� ù ���ڸ� �빮�ڷ� �սô�
// class�� ����Ʈ�� private (sttuct�� ����Ʈ�� public)
class Student {
public:
    // ������(constructor) : ��ü�� ������ �� ȣ��Ǵ� �Լ�
    // �����ڸ� �������� ������ default��(�ڵ�����) �Ű������� ���� �����ڰ� ���ǵȴ�.
    // Student() {}
    Student()
    {
        name = "�輱��";
        age = 18;
        id = 2102;
        sex = 1;
        department = "���̵�� ����Ʈ�����";
    }

        // Ŭ������ �Ű������� ���� �� ������ �Ű������� �ʿ����� ������ (void)
        void print(void) {
        cout << "�̸� : " << name << endl;
        cout << "�й� : " << id << endl;
        cout << "���� : " << age << endl;
        cout << "���� (0)����, (1)�� ���� : " << sex << endl;
        cout << "�а� : " << department << endl;
        }


private:
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

};

int main()
{
    // Student s1;
    Student s1 = Student();

    s1.print();

    return 0;
}