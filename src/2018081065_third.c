#include <stdio.h>
#include <stdlib.h>

double fun(double x)
{
	double result;
	result = x * x + 4 * x - 5;
	return result;
}

void fun2()
{
	double x, result;
	printf("计算x^2+4x-5的值，请输入x:");
	scanf("%lf", &x);
	result = x * x + 4 * x - 5;
	printf("结果：%.2f\n", result);
}

int randInt(int min, int max)
{
	return (rand() % (max - min + 1) + min);
	// rand() % a 返回一个0~a-1的随机数，rand() % (a+1) + b得到一个b~a+b+1的随机数
}

void MathLearn()
{
	int a, b, sum, answer;
	srand((unsigned)time(0));
	while (1) {
		a = randInt(0, 100);
		b = randInt(0, 100);
		sum = a + b;
		printf("%d+%d=", a, b);
		scanf("%d", &answer);
		if (answer == sum)
			printf("正确!\n");
		else
			printf("错误!\n");
	}
	
}

int main(void)
{
	srand(time(0));
	MathLearn();
	return 0;
}