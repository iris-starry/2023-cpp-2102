#include <iostream>
#include <string.h>

using namespace std;

class Munja{
public:	
	// �Ϲݻ�����
	Munja(const char* str) {
		// 3("abc") + 1('\0')
		str_ = new char[strlen(str) + 1];

		strcpy(str_, str); // str�� ������ str_�� ����
		cout << "�Ϲݻ����� ȣ��" << endl;
	}

	// ���������
	Munja(const Munja& m) : str_(m.str_)
	{
		cout << "��������� ȣ��" << endl;
	}

	// �Ҹ���
	~Munja() {
		delete[] str_;
		cout << "�Ҹ��� ȣ��" << endl;
	}
private:
	char* str_;
};



int main(void) {

	Munja m1 = Munja("abc");  // �Ϲ� ������ ȣ��
	Munja m2 = m1;			  // ���� ������ ȣ��

}