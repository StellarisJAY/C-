#include <stdio.h>

void swap(float *pa, float *pb)
{
	float temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void BubbleSort(float *numbers, int n)  // ð������ T(N) = O(N^2)
{
	int i, j;
	for (i = 1; i <= n - 1; i++)  // �ܹ�����n-1��ѭ��
	{
		for (j = n - 1; j >= i; j--)  // ��ÿ��ð�ݺ�������ĩβ��ʼ�Ƚ�
		{
			if (*(numbers + j) < *(numbers + j - 1))  // �жϸ����Ƿ�С��ǰһ��
			{                                         // True �򽻻�λ�ã�
				swap((numbers + j), (numbers + j - 1));
			}
		}
	}
}

int main(void)
{
	int i;
	float heights[10];
	printf("������������ݣ��ף���");
	for (i = 0; i < 10; i++) {
		scanf("%f", &heights[i]);
	}
	BubbleSort(heights, 10);
	putchar('\n');
	for (i = 0; i < 10; i++) {
		printf("%.2f\t", heights[i]);
	}
}