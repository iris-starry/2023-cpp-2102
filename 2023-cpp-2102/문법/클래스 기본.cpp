#include<iostream>
#include<string>

using namespace std;

//���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����
struct drink {
	string subun;
	string chumga;
};


int main(void) {

	// (struct drink)�ڷ���(c++������ drink�� �ᵵ �˴ϴ�.)
	struct drink �������;
	�������.subun = "�������";
	�������.chumga = "ŷ������";

	cout << "���� : " << �������.subun << "÷���� " << �������.chumga << endl;
	

	return 0;
}