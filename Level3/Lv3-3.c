/*����
n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� n (1 �� n �� 10,000)�� �־�����.

���
1���� n���� ���� ����Ѵ�.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = '\0', i, sum=0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("%d", sum);

	return 0;
}