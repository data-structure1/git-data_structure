#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

long int fact(int);

int main() 
{
	int num, result;
	printf("\n������ �Է��ϼ���: ");
	scanf_s("%d", &num);
	result = fact(num);
	printf("\n\n %d�� ���丮�� ���� %ld�Դϴ�.\n", num, result);
	getchar(), getchar();
}

long int fact(int num) {
	int value;
	if (num <= 1) {
		printf("\n fact(1) �Լ� ȣ��!");
		printf("\n fact(1) �� 1 ��ȯ!!");
		return 1;
	}
	else {
		printf("\n fact(%d) �Լ� ȣ��!", num);
		value = (num * fact(num - 1));
		printf("\n fact(%d)�� %ld ��ȯ!!", num, value);
		return value;
	}
}
