/*����
������ ���� ��Ģ�� ������ �ڿ� ���� ��� ������.

�Է�
ù° �ٿ� N(1 �� N �� 100)�� �־�����.

���
ù° �ٺ��� 2��N-1��° �ٱ��� ���ʴ�� ���� ����Ѵ�.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0, i, j;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < i + 1; j++) {
			printf(" ");
		}
		for (j = 0; j < (2 * (n - i) - 3); j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}