#include<iostream>
#include<string>

using namespace std;

//����X
//���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����
//����ü, Ŭ������ �Ϲ������� �ܾ��� ù ���ڸ� �빮�ڷ� �սô�.
//class�� ����Ʈ�� private (struct�� ����Ʈ�� public)
class Studnet {
public:
	string name;

	//���ɶ����� hakbun�� ���ڿ��� ���� ����
	//�Ϲ������� ���ڿ��� ���������ͺ��� ���� �޸� ������ �䱸�ϸ�
	//������ �񱳿����� �ѹ��� �� �� ������, ���ڿ��� ���ڼ� ��ŭ �ݺ��Ͽ� ���ؾ���
	int hakbun;
	int age;
	//�������� ���������� ���� ������(enum)���� �ϴ� ���� ��õ
	//0: ����, 1: ����
	int sex;               
	string department;
};


int main(void) {

	// (struct drink)�ڷ���(c++������ drink�� �ᵵ �˴ϴ�.)
	struct Studnet stu1;
	stu1.name = "�ڳ���";
	stu1.hakbun = 200;
	stu1.age = 18;
	stu1.sex = 0;
	stu1.department = "���̵�����Ʈ�����";

	cout << "�̸� " << stu1.name << endl;
	cout << "�й� " << stu1.name << endl;
	cout << "���� " << stu1.name << endl;
	cout << "����(0)����, (1)���� " << stu1.name << endl;
	cout << "�а� " << stu1.name << endl;
	return 0;
}