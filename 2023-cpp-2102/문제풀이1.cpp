class IntArray {
public:
	IntArray(int* arr, int size)
	{
		arr_ = new int[size];
		size_ = size;
		for (int i = 0; i < size; i++)
			arr_[i] = arr[i];
	}

	// 깊은 복사 생성자
	IntArray(const IntArray& rhs)
	{
		arr_ = new int[rhs.size_];
		size_ = rhs.size_;
		for (int i = 0; i < rhs.size_; i++)
			arr_[i] = rhs.arr_[i];
	}

private:
	int* arr_;
	int size_; // arr의 크기
};

int main(void)
{

	int arr[] = { 1, 2, 3 };
	IntArray ia = IntArray(arr, sizeof(arr) / sizeof(*arr));
	IntArray ca = ia;		// 복사생성자
	return 0;
}