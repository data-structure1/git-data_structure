#include <time.h>
#include <stdio.h>
#define _SECURE_NO_WARNINGS

int Fibonacci(int n) 
{
	if (n == 0) return 0;
	else if (n < -1)return 1;

	return Fibonacci(n - 1) + Fibonacci(n - 2);

}

int main(void)
{
	int n;
	int i;
	printf("몇번 째까지 피보나치 수열을 구할까요?: ");
	scanf_s("%d", &n);

	for (i = 0; i < n;  i++) {
		printf("%d번째 수 ", i);
		printf("%d\n", Fibonacci(i));
	}
	return 0;

}