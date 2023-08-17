#include <iostream>
#include <string>

using namespace std;

template <typename T>
class MyData {
public:
	MyData(T data) : data_(data)
	{
	}

	T get_data(void) { return data_; }
	void set_data(T data) { data_ = data; }
private:
	T data_;
};

int main(void)
{
	MyData<int> md = MyData<int>(3);
	cout << md.get_data() << endl;
}