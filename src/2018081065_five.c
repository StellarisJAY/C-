#include <stdio.h>
#include <math.h>

void StatisticsNum()
{
	int a, i, sum = 0, cnt = 0;
	printf("������10��������");
	for (i = 1; i <= 10; i++)
	{
		scanf("%d", &a);
		if (a > 0) {
			sum += a;
		}
		if (a % 2 == 0) {
			cnt += 1;
		}
	}
	printf("ż����%2d��\n",cnt);
	printf("�����ͣ�%2d\n",sum);
}

void StatisticsChar()
{
	char ch;
	int cntChar = 0, cntSmall = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch != '\n') {
			cntChar++;
		}
		if (ch >= 97 && ch <= 122) {
			cntSmall++;
		}
	}
	cntChar += 1;
	printf("���ַ�����%2d\n",cntChar);
	printf("Сд�ַ���%2d\n",cntSmall);
}

void Apple()
{
	float total = 0;
	int day = 2;
	total = 0.8 * 2;
	printf("��1�죺%2d��ƻ����%.2fԪ\n", 2, 1.6);
	while (total < 100.0)
	{

		total = 0.8*(2 * day - 1);
		printf("��%2d�죺%2d��ƻ����%.5fԪ\n", day, (2 * day - 1), total);
		day++;
	}
}

void Count_e()
{
	int i = 2;
	double result = 2;         //�ۼӺ�������2��ʼ��
	double add = 1,before; // addΪԭ�ۼ��beforeΪ�����ۼ��
	while (1) {
		before = add;
		add = add / i;
		result += add;
		i++;
		if (before - add <= 1.0e-5) {  // ���ۼ�����ԭ�ۼ������ 10^-5; (���ƾ��ȣ�
			break;
		}
	}
	printf("e = %lf\n", result);
}

void SumPolynomial(int n)
{
	int sum = 0;
	int i, j;
	int t;
	for (i = 1; i <= n; i++)
	{
		t = i;
		for (j = 1; j < i; j++)
		{
			t = t * 10 + i;
		}
		sum += t;
	}
	printf("%d\n", sum);
}


void TimesTable()
{
	int i, j;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d*%d=%-3d ", i, j, i*j);
		}
		putchar('\n');
	}
	putchar('\n');
}

void Pattern(int c)
{
	if (c >= 40 || c % 2 == 0) {
		printf("Error...\n");
	}
	else {
		int n = (c+1) / 2;
		int i, j, k, count, space = 0;
		count = 2 * n - 1;
		for (i = 1; i <= n; i++)
		{
			for (k = 1; k <= space; k++)
				putchar(' ');
			for (j = 1; j <= count; j++)
				putchar('*');
			putchar('\n');
			count -= 2;
			space += 1;
		}
		count += 4;
		space -= 2;
		for (i = 2; i <= n; i++)
		{
			for (k = 1; k <= space; k++)
				putchar(' ');
			for (j = 1; j <= count; j++)
				putchar('*');
			space -= 1;
			count += 2;
			putchar('\n');
		}
	}
}

void PerfectNum()
{
	int sum = 0, m = 2;
	int k, j,n,count = 0;
	for (; m <= 1000; m++)
	{
		k = m / 2;
		n = 0;
		for (j = 1; j <= k; j++)
		{
			if (m % j == 0) {
				n = n + j;
			}
		}
		if (m == n) {
			sum += m;
			count += 1;
		}
	}
	int i;
	for (i = 1; i < count; i++)
	{
		printf("����%d + ", i);
	}
	printf("����%d = %d\n", i, sum);
}

void DaffodilNum()
{
	int a, b, c, num;

	printf("\nˮ�ɻ�����\n");
	for (num = 100; num <= 999; num++)
	{
		a = num / 100;
		b = (num - a * 100) / 10;
		c = (num - a * 100 - b * 10);
		if (a * a * a + b * b * b + c * c *c == num)
		{
			printf("%d = %d^3 + %d^3 + %d^3\n", num, a, b, c);
		}
	}
}

int setQuestion(int *pNum1, int *pNum2, int *pOp)
{
	int num1, num2;
	*pOp = rand() % 4 + 1;
	int answer;
	if (*pOp == 4) //����
	{
		do{
			num1 = rand() % 10 + 1;
			num2 = rand() % 10 + 1;
		} while (num1 % num2 != 0);
		*pNum1 = num1;
		*pNum2 = num2;
		answer = num1 / num2;
	}
	else {
		*pNum1 = rand() % 10 + 1;
		*pNum2 = rand() % 10 + 1;
		switch (*pOp) {
		case 1:answer = *pNum1 + *pNum2; break;
		case 2:answer = *pNum1 - *pNum2; break;
		case 3:answer = *pNum1 * *pNum2;
		}
	}
	return answer;
}

int MathLearn()
{
	int i, j;
	int num1, num2, op, result, answer;
	int cntWrong = 0, cntRight = 0;
	for (i = 1; i <= 10; i++)
	{
		result = setQuestion(&num1, &num2, &op);
		printf("\n%2d ",num1);
		switch (op) {
		case 1:putchar('+'); break;
		case 2:putchar('-'); break;
		case 3:putchar('x'); break;
		case 4:printf("��"); break;
		}
		printf(" %d = \n",num2);
		for (j = 1; j <= 3; j++)
		{
			printf("\n��%d�λ���:", j);
			scanf("%d", &answer);
			if (answer == result) {
				printf("\n��ȷ\n");
				break;
			}
			else {
				printf("\n����\n");
			}
		}
		if (j == 4) {
			cntWrong += 1;
		}
	}
	cntRight = 10 - cntRight;
	if (cntWrong == 0)
	{
		printf("��ϲ�㣬ȫ�ԣ�\n");
	}
	else {
		printf("ʮ����Ŀ������%d�������%d��\n",cntRight,cntWrong);
	}
}

void GetBall()
{
	int red, black, white;
	int count = 0;
	for (black = 0; black <= 6; black++) {
		for (red = 0; red <= 3; red++) {
			white = 8 - red - black;
			if (white <= 3 && white >= 0) {
				printf("\nȡ����%d�ţ�����%d�ţ�����%d��\n", red, white, black);
				count += 1;
			}
		}
	}
	printf("\nһ��%d��ȡ��\n", count);
}

int main(void)
{
	srand((unsigned)time(0));
	StatisticsNum();
	StatisticsChar();
	Apple();
	Count_e();
	SumPolynomial(5);
	
	TimesTable();
	Pattern(9);
	PerfectNum();
	DaffodilNum();
	GetBall();
	MathLearn();
	return 0;
}
