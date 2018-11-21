#include <stdio.h>

void swap(float *pa, float *pb)
{
	float temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void BubbleSort(float *numbers, int n)  // 冒泡排序； T(N) = O(N^2)
{
	int i, j;
	for (i = 1; i <= n - 1; i++)  // 总共进行n-1次循环
	{
		for (j = n - 1; j >= i; j--)  // 从每次冒泡后的数组的末尾开始比较
		{
			if (*(numbers + j) < *(numbers + j - 1))  // 判断该项是否小于前一项
			{                                         // True 则交换位置；
				swap((numbers + j), (numbers + j - 1));
			}
		}
	}
}

int main(void)
{
	int i;
	float heights[10];
	printf("请输入身高数据（米）：");
	for (i = 0; i < 10; i++) {
		scanf("%f", &heights[i]);
	}
	BubbleSort(heights, 10);
	putchar('\n');
	for (i = 0; i < 10; i++) {
		printf("%.2f\t", heights[i]);
	}
}