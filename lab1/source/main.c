#include<stdio.h>
#include<stdlib.h>
int odd(int U);
int even(int U);
int totalsum(int U);
int main(void)
{
	int n, sum;
	char addchoice;
	printf("1+2+...+n=?�п�Jn=");
	scanf_s("%d",&n);
	getchar();
	printf("�аݭn���_�ƩM(O),���ƩM(E),�٬O��ƩM(I)?�п��:");
	scanf_s("%c",&addchoice);
	switch (addchoice)
	{
	case 'O':
		sum = odd(n);
		break;
	case'E':
		sum = even(n);
		break;
	case 'I':
		sum = totalsum(n);
		break;
	default:
		printf("��ܿ��~\n");
		return -1;
	}
	printf("�`�X��%d\n",sum);
	system("pause");
	return 0;
}
int odd(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
		if (i % 2 == 1)
			total = total + i;
	return total;
}
int even(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
		if (i % 2 == 0)
			total = total + i;
	return total;
}
int totalsum(int U)
{
	return odd(U)+even(U);
}