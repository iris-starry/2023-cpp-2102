#include<stdio.h>
#include<string.h>

int main(void) {

	char str[30] = "Jiwoo";
	int size = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		size++;
	}

	printf("������ ���̴� %d \n", size);

	return 0;
}