#include <stdio.h>

void tableDown()
{
	int i, j, space = 8, k;
	for (int i = 1; i <= 9; i++) {
		for (k = 1; k <= i; k++) {
			printf("%3d", i * k);
		}
		for (j = 1; j <= space; j++) {
			printf("   ");
		}
		space--;
		printf("\n");
	}
}

void tableUp()
{
	int i, j, space = 0, k;
	for (i = 9; i >= 1; i--) {
		for (j = 1; j <= space; j++) {
			printf("   ");
		}
		for (k = i; k >= 1; k--) {
			printf("%3d", k * i);
		}
		space++;
		printf("\n");
	}
}

void Triangle(int n,char type)
{
	int i, j, k, c,m;
	c = 2 * n - 1;
	k = 1;
	for (i = (c + 1) / 2; i <= c; i++)
	{
		for (j = 1; j <= i - k; j++)
		{
			printf(" ");
		}
		for (m = 1; m <= k; m++)
		{
			printf("%c",type);
		}
		printf("\n");
		k += 2;
	}
}

int main(void)
{
	int x = 0;
	tableUp();
	tableDown();
	printf("请输入三角形层数：");
	scanf("%d", &x);
	if (x > 0)
	{
		Triangle(x,'*');
	}
	return 0;
}