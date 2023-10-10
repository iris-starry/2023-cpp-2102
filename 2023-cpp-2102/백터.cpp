#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
	// 전통적인 배열은 크기가 고정되어 있으나,
	// 벡터는 크기가 자유롭게 변할 수 있는 동적배열이다.
	vector<int> arr;
	arr.reserve(4);		// 벡터의 크기를 4로 한다
	arr.push_back(10);
	arr.push_back(20);
	arr.push_back(30);
	arr.push_back(40);

	// 4개가 꽉 찬 공간에 데이터 하나를 더 집어넣어보자
	arr.push_back(50);

	// 원소의 주소를 나타내는 반복자(iterator)
	vector<int>::iterator iter;

	for (iter = arr.begin(); iter != arr.end(); iter++)
		cout << *iter << " ";
}