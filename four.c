#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define _e 2.718

void four_test1_1();
void four_test1_2();
void four_test2_1();
void four_test2_2();
void Feb_days();
void Tax();
void Func();
void Triangle();

void MathLearn();
int add();
int minus();
int multiply();
int divide();

void printLine(int length)
{
	printf("\n");
	for (int i = 0; i < length; i++) {
		printf("*");
	}
	printf("\n");
}

int four_Menu()
{
	int iSelect;
	printLine(25);
	printf("\n1. 运行函数 test1_1");
	printf("\n2. 运行函数 test1_2");
	printf("\n3. 运行函数 test2_1");
	printf("\n4. 运行函数 test2_2");
	printf("\n5. 运行函数 Feb_day");
	printf("\n6. 运行函数 Tax");
	printf("\n7. 运行函数 Func");
	printf("\n8. 运行函数 Triangle");
	printf("\n9. 运行函数 MathLearn");
	printf("\n0. 退出");
	printLine(25);

	printf("\n\n请输入你的选项：");
	scanf("%d", &iSelect);
	return iSelect;
}

int main(void)
{
	int choice = four_Menu();
	switch (choice)
	{
	case 1:four_test1_1(); break;
	case 2:four_test1_2(); break;
	case 3:four_test2_1(); break;
	case 4:four_test2_2(); break;
	case 5:Feb_days(); break;
	case 6:Tax(); break;
	case 7:Func(); break;
	case 8:Triangle(); break;
	case 9:MathLearn(); break;
	case 0:break;
	default:printf("\nThe select is unknown\n");
	}
	return 0;
}

void four_test1_1()
{
	int i, j;
	i = j = 2; // i = 2 j = 2;
	if (i == 1)  // False  该函数无输出结果
	{
		if (j == 2)
		{
			printf("i=%d", i = j + 1);
		}
		else
		{
			printf("i=%d", i = j - 1);
		}
	}
}


void four_test1_2()
{
	int x = 3;
	
	switch (x)
	{
	case 1:
	case 2: printf("x<3\n");
	case 3: printf("x = 3\n");  // 该条件符合后, 因为没有break，所以执行case 3: 之后所以语句。
	case 4:
	case 5: printf("x > 3\n");
	default: printf("x is unknown.\n");
	}
}


void four_test2_1()
{
	int iNum1, iNum2, iNum3, iMax;

	srand((unsigned)time(0));
	iNum1 = rand() % 101;
	iNum2 = rand() % 101;
	iNum3 = rand() % 101;

	printf("Three random numbers: %2d,%2d,%2d\n", iNum1, iNum2, iNum3);
	if (iNum1 > iNum2) {
		if (iNum1 > iNum3) {
			iMax = iNum1;
		}
		else {
			iMax = iNum3;
		}
	}
	else {
		if (iNum2 > iNum3) {
			iMax = iNum2;
		}
		else {
			iMax = iNum3;
		}
	}
	printf("Maxment: %2d\n", iMax);
}

void four_test2_2()
{
	int iNum1, iNum2, iNum3, iMax;
	srand((unsigned)time(0));
	iNum1 = rand() % 101;
	iNum2 = rand() % 101;
	iNum3 = rand() % 101;
	printf("Three random numbers: %2d,%2d,%2d.\n",iNum1,iNum2,iNum3);

	iMax = iNum1;
	if (iMax > iNum2) {
		if (iMax < iNum3) 
			iMax = iNum3;
	}
	else {
		iMax = iNum2;
		if (iNum3 > iMax) {
			iMax = iNum3;
		}
	}
	printf("Maxment: %2d\n", iMax);
}

void Feb_days()
{
	int days, year;
	printf("请输入年份:");
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0)
	{
		days = 29;
	}
	else {
		if (year % 400 == 0) {
			days = 29;
		}
		else {
			days = 28;
		}
	}
	printf("%d 年二月有 %d 天\n", year,days);
}

void Tax()
{
	double tax, bonus, rate,profit;
	printf("请输入奖金bonus：");
	scanf("%lf", &bonus);
	if (bonus < 500) {
		rate = 0;
	}
	else if (bonus < 1000) {
		rate = 0.05;
	}
	else if (bonus < 2000) {
		rate = 0.08;
	}
	else if (bonus < 5000) {
		rate = 0.10;
	}
	else {
		rate = 0.15;
	}
	tax = bonus * rate;
	profit = bonus - rate;
	printf("实得奖金数：%.2lf\n", profit);
}

void Func()
{
	double x, y;
	printf("请输入x:");
	scanf("%lf", &x);
	if (x > 0) {
		y = pow(_e, -x);
	}
	else if (x == 0) {
		y = 1;
	}
	else {
		y = -pow(_e, x);
	}
	printf("函数值 y = %lf\n", y);
}


void Triangle()
{
	int a, b, c;
	printf("判断三角形类型\n");
	printf("请输入三条边长:");
	scanf("%d,%d,%d", &a, &b, &c);
	if (a + b > c && b + c > a && a + c > b) {
		if (a == b && b == c) {
			printf("该三角形是等边三角形\n");
		}
		else if (a == b || a == c || b == c) {
			printf("该三角形是等腰三角形\n");
		}
		else if (a*a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
			printf("该三角形是直角三角形\n");
		}
		else {
			printf("该三角形是普通三角形\n");
		}
	}
	else {
		printf("三边不能构成三角形\n");
	}
}

int add()
{
	int a, b, sum, answer;
	a = rand() % 10 + 1;
	b = rand() % 10 + 1;
	printf("%d + %d = ", a, b);
	sum = a + b;
	scanf("%d", &answer);
	if (answer == sum)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int minus()
{
	int a, b, result, answer;
	while (1)
	{
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;
		if (a - b >= 0) {
			break;
		}
	}
	result = a - b;
	printf("%d - %d =",a,b);
	scanf("%d", &answer);
	if (answer == result)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int multiply()
{
	int a, b, result, answer;
	srand((unsigned)time(0));
	a = rand() % 10 + 1;
	b = rand() % 10 + 1;
	result = a * b;
	printf("%d x %d =",a,b);
	scanf("%d", &answer);
	if (answer == result)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}

int divide()
{
	int a, b, result, answer;
	while (1)
	{
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;
		if (a % b == 0) {
			break;
		}
	}
	result = a / b;
	printf("%d // %d =",a,b);
	scanf("%d", answer);
	if (answer == result)
	{
		return 1;
	}
	else {
		return 0;
	}
}

void MathLearn()
{
	int type,result;
	srand((unsigned)time(0));
	type = rand() % 4 + 1;
	switch (type) {
	case 1:result = add(); break;
	case 2:result = minus(); break;
	case 3:result = multiply(); break;
	case 4:result = divide(); break;
	}
	if (result == 1)
	{
		printf("正确\n");
	}
	else {
		printf("错误\n");
	}
}
