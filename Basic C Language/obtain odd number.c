#include<stdio.h>
#include<stdlib.h>
//Ȧ�������� �� ���ϱ�


int main(void)
{
	int i = 1, j, result = 0;
	printf("������� Ȧ�� ���� ���Ͻʴϱ�? ");
	scanf("%d", &j);
	if (j % 2 == 1)
	{
		result = ((j / 2) + 1)*((j / 2) + 1);
		printf("��: %d\n", result);
	}
	else if (j % 2 == 0)
	{
		result = (((j - 1) / 2) + 1)*(((j - 1) / 2) + 1);
		printf("��: %d\n", result);
	}

	system("PAUSE");
	return 0;
}