//����� �Ѱ���

/*����
���л� ��������� 90%�� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�. ����� �׵鿡�� ���� ������ �˷���� �Ѵ�.

�Է�
ù° �ٿ��� �׽�Ʈ ���̽��� ���� C�� �־�����.

��° �ٺ��� �� �׽�Ʈ ���̽����� �л��� �� N(1 �� N �� 1000, N�� ����)�� ù ���� �־�����, �̾ N���� ������ �־�����. ������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�.

���
�� ���̽����� �� �پ� ����� �Ѵ� �л����� ������ �ݿø��Ͽ� �Ҽ��� ��° �ڸ����� ����Ѵ�.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int c = 0, n = 0, score[1000] = {'\0'},over_avg;
	double  avg, over_avg_rate[1000] = {0};
	scanf("%d", &c);	//�׽�Ʈ ���̽� �� C

	for (int i = 0; i < c; i++) {
		scanf("%d", &n);		// �� �׽�Ʈ ���̽��� �л� �� N
		avg = 0, over_avg = 0;
		for (int j = 0; j < n; j++) {
			scanf("%d", &score[j]);
			avg += score[j];
		}
		avg /= ((double)n);
		for (int j = 0; j < n; j++) {
			if (score[j] > avg) {
				over_avg++;
			}
		}
		over_avg_rate[i] = ((double)over_avg / n) * 100;
	}

	for (int i = 0; i < c; i++) {
		printf("%.3lf%%\n", over_avg_rate[i]);
	}

	return 0;
}