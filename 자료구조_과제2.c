#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	char str[100];
	int length;

	printf("���ڿ��� �Է��ϼ���: ");
	scanf_s("%s", str, sizeof(str));
	printf("\n");

	length = strlen(str);

	printf("�Էµ� ���ڿ���\n\"%s\"\n�Դϴ�.\n", str);
	printf("\n");
	printf("�Էµ� ���ڿ� ���� = %d", length);

	return 0;

}