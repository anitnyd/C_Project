/*����
���� ������ �Է¹޾� 90 ~ 100���� A, 80 ~ 89���� B, 70 ~ 79���� C, 60 ~ 69���� D, ������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ���� ������ �־�����. ���� ������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�.

���
���� ������ ����Ѵ�.*/

#include <stdio.h>

int main(void)
{
	int score=0;
	scanf("%d", &score);
	while (((score >= 0) && (score <= 100)) == 0)
		scanf("%d", &score);

	if ((score >= 90)&&(score<=100))
		printf("A");
	else if (score >= 80) 
		printf("B");
	else if (score >= 70) 
		printf("C");
	else if (score >= 60) 
		printf("D");
	else 
		printf("F");

	return 0;
}