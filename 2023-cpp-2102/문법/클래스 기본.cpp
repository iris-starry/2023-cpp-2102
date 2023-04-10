#include <iostream>
#include <string> 

using namespace std;

//���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����
//����ü,Ŭ������ �Ϲ������� �ܾ��� ù ���ڸ� �빮�ڷ� �Ѵ�
//class�� default�� private(struct�� default�� public)--����
class Student {

public:
    //������(constructor) : ��ü�� ������ �� ȣ��Ǵ� �Լ�
    //�����ڸ� �������� ������ �ڵ�(default)���� �Ű������� ���� �����ڰ� ���ǵȴ�
    //Student(){ }
    //Student() {
        // name = "�輱��";
        //student_num = 2102;
        //age = 18;
        // gender = 1;
        //department = "����Ʈ�����";

    //}
    // : ������� �ʱ�ȭ�� �ϸ� const��������� �ʱ�ȭ �� �� �ִ�
    Student(string _name, int _student_num, int _age, int _gender, string _department)
        :name(_name), student_num(_student_num), age(_age)
        , gender(_gender), department(_department)
    {
    }

    //Student(string _name, int _student_num, int _age, int _gender, string _department)
    //{

    //    //this : ��ü �ڱ��ڽ��� ����Ű�� ������
    //    //�Ű�������� ����������� ���Ƶ� ���� ����
    //    this->name = name;
    //    this->student_num = student_num;
    //    this->age = age;
    //    this->gender = gender;
    //    this->department = department;
    //}
    //class�� ��������� ���� �� �ִ�--����Լ�
    void print(void)
    {
        cout << "�̸�: " << name << endl;
        cout << "�й�: " << student_num << endl;
        cout << "����: " << age << endl;
        cout << "����(0)����,(1)����: " << gender << endl;
        cout << "�й�: " << department << endl;
    }
private:
    string name;
    //����X: �й��� ���ɶ����� ���ڿ��� ���� ����
    //�Ϲ������� ���ڿ��� ���������ͺ��� ���� �޸� ������ �䱸�ϸ�
    //������ �񱳿����� �ѹ��� �� �� ������, ���ڿ��� ���� �� ��ŭ �ݺ��Ͽ� ���ؾ���
    int student_num;
    int age;
    //�������� ���������� ���� ������(enum)���� �ϴ� ���� ��õ
    //0:���� 1:����
    int gender;
    string department;
};

int main() {

    //�����Ҵ� : �޸��� ũ�Ⱑ �������� �� ������
    Student stu1 = Student("�輱��", 2102, 18, 1, "���̵�� ����Ʈ�����");
    //stu1.print();

    //�����Ҵ��� ������ �����ͷ� �ؾ���
    //TODO: �����Ҵ� �����ϱ�
    //�����Ҵ� : �޸��� ũ�Ⱑ ������ ��(runtime) ������. heap����
    Student* stu2 = new Student("������", 3100, 31, 0, "��ۿ�����");
    stu2->print();

   delete stu2;
    
    return 0;
}