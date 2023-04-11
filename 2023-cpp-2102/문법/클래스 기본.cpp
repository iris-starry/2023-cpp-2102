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
    Student(){}

    // : ������� �ʱ�ȭ�� �ϸ� const��������� �ʱ�ȭ �� �� �ִ�
    Student(string _name, int _hakbun, int _age, int _sex, string _department)
        :name(_name), hakbun(_hakbun), age(_age)
        , sex(_sex), department(_department)
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
        cout << "�й�: " << hakbun << endl;
        cout << "����: " << age << endl;
        cout << "����(0)����,(1)����: " << sex << endl;
        cout << "�а�: " << department << endl;
    }

    void set_name(string _name) { name = _name; }
    void set_hakbun(int _hakbun) { hakbun = _hakbun;}
    void set_age(int _age) { age = _age; }
    void set_sex(int _sex) { sex = _sex;  }
    void set_department(string _department) { department = _department; }

private:
    string name;
    //����X: �й��� ���ɶ����� ���ڿ��� ���� ����
    //�Ϲ������� ���ڿ��� ���������ͺ��� ���� �޸� ������ �䱸�ϸ�
    //������ �񱳿����� �ѹ��� �� �� ������, ���ڿ��� ���� �� ��ŭ �ݺ��Ͽ� ���ؾ���
    int hakbun;
    int age;
    //�������� ���������� ���� ������(enum)���� �ϴ� ���� ��õ
    //0:���� 1:����
    int sex;
    string department;
};

int main() {

    //�����Ҵ� : �޸��� ũ�Ⱑ �������� �� ������
    //Student stu1 = Student("�輱��", 2102, 18, 1, "���̵�� ����Ʈ�����");
    //stu1.print();
    /*Student stu3[2];
    for (int i = 0; i < 2; i++)
        stu3[i].print();*/

    //�����Ҵ��� ������ �����ͷ� �ؾ���
    //TODO: �����Ҵ� �����ϱ�
    //�����Ҵ� : �޸��� ũ�Ⱑ ������ ��(runtime) ������. heap����
    // c++ �� �����Ҵ��� �ݵ�� delete�� ��ü�ؾ� �޸� ������ ���� �� ����
    //Student* stu2 = new Student("������", 3100, 31, 0, "��ۿ�����");
    //stu2->print();
   //delete stu2;
    Student* stu4 = new Student[2];
    stu4[0].set_age(18);
    stu4[0].set_name("����");
    stu4[0].set_hakbun(2112);
    stu4[0].set_sex(1);
    stu4[0].set_department("���̵�����Ʈ�����");

    stu4[1].set_age(18);
    stu4[1].set_name("����");
    stu4[1].set_hakbun(2118);
    stu4[1].set_sex(0);
    stu4[1].set_department("���̵�����Ʈ����");



    for (int i = 0; i < 2; i++)
        stu4[i].print();  //�迭�� ��ҿ� �ش��ϴ� ��ü�� ����� .���� ����
    delete[] stu4;
    
    return 0;
}