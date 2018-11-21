#include <stdio.h>

void swap(float *p1, float *p2)
{
	float temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int FindMin(float *nums, int start, int n)
{
	int i = start;
	float min = *(nums + start);
	int position = start;
	for (i; i < n; i++) {
		if (*(nums + i) < min) {
			min = *(nums + i);
			position = i;
		}
	}
	return position;
}

void BubbleSort(float *numbers,int n)  // ð������ T(N) = O(N^2)
{
	int i,j;
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

void InsertSort(float *numbers, int n)     // ��������  T(N) = O(N^2)
{
	int i, j, k;
	for (i = 1; i <= n - 1; i++)  //�ӵڶ���Ԫ�ؿ�ʼ��ѭ�������һ��Ԫ�أ�
	{
		for (j = 0; j < i; j++)  // ÿһ��Ԫ������ǰ�������Ԫ�رȽϣ����뵽���������ǰ�棻
		{
			if (*(numbers + i - j - 1) > *(numbers + i - j)) { // �жϴ�ʱǰһ���Ƿ���ڸ���
				swap((numbers + i - j - 1), (numbers + i - j));
			}
		}
	}
}

void SelectionSort(float *numbers, int n) // ѡ������ T(N) = O(N^2)
{
	int i, j;
	for (i = 1; i <= n - 1; i++)  //һ��ѭ�� n-1��
	{
		swap((numbers + i - 1), (numbers + FindMin(numbers, i - 1, n))); //��ÿ���ҵ�����Сֵ���ηŵ�����ǰ�ˣ�
	}
}



void DirectInsertionSort(float *nums, int gap, int n)  // ϣ��������Ҫ�õ��ķ���ֱ�Ӳ�������;
{
	
}

void ShellSort(float *numbers, int n)   //  ϣ������               T(N) = O(N^(1.3-2))????WTF
{
	int gap = n / 2;
	while (gap != 1) {  // �����Ϊ1��ʱ����з���ֱ�Ӳ�������
		
		gap = gap / 2;
	}
	//�����Ϊ1ʱ����ȫ�ֲ�������
	InsertSort(&numbers, n); 
}





void printArray(float *numbers, int n)
{
	for (int i = 0; i < n; i++) {
		printf("%.2f\t", *(numbers + i));
	}
}

int main(void)
{
	float nums[10];
	printf("������10���˵���ߣ��ף���");
	for (int i = 0; i < 10; i++) {
		scanf("%f", &nums[i]);
	}

	//BubbleSort(nums, 10);
	//InsertSort(nums, 10);
	//SelectionSort(nums, 10);
	printArray(nums,5);

	putchar('\n');
	return 0;
}