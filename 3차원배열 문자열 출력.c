#include <stdio.h>

int main() 
{
	int i, j, k;
	char c[2][3][20];

	for (i = 0; i < 2; i++) {
		printf("\n �л� %d�� �̸�: ", i + 1);
		gets(c[i][0]);
		printf(" �л� %d�� �а�: ", i + 1);
		gets(c[i][1]);
		printf(" �л� %d�� �й�: ", i + 1);
		gets(c[i][2]);
	}

	for (i = 0; i < 2; i++) {
		printf("\n\n �л�%d", i + 1);
		for (j = 0; j < 3; j++) {
			printf("\n\t");
			for (k = 0; c[i][j][k] != '\0'; k++) {
				printf("%c", c[i][j][k]);
			}
		}
	}
	getchar();
}
