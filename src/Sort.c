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

void BubbleSort(float *numbers,int n)  // 冒泡排序； T(N) = O(N^2)
{
	int i,j;
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

void InsertSort(float *numbers, int n)     // 插入排序；  T(N) = O(N^2)
{
	int i, j, k;
	for (i = 1; i <= n - 1; i++)  //从第二个元素开始，循环到最后一个元素；
	{
		for (j = 0; j < i; j++)  // 每一个元素与它前面的所有元素比较，插入到比它大的数前面；
		{
			if (*(numbers + i - j - 1) > *(numbers + i - j)) { // 判断此时前一项是否大于该项
				swap((numbers + i - j - 1), (numbers + i - j));
			}
		}
	}
}

void SelectionSort(float *numbers, int n) // 选择排序 T(N) = O(N^2)
{
	int i, j;
	for (i = 1; i <= n - 1; i++)  //一共循环 n-1次
	{
		swap((numbers + i - 1), (numbers + FindMin(numbers, i - 1, n))); //将每次找到的最小值依次放到数组前端；
	}
}



void DirectInsertionSort(float *nums, int gap, int n)  // 希尔排序需要用到的分组直接插入排序;
{
	
}

void ShellSort(float *numbers, int n)   //  希尔排序               T(N) = O(N^(1.3-2))????WTF
{
	int gap = n / 2;
	while (gap != 1) {  // 间隔不为1的时候进行分组直接插入排序
		
		gap = gap / 2;
	}
	//当间隔为1时进行全局插入排序；
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
	printf("请输入10个人的身高（米）：");
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