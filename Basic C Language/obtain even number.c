#include<stdio.h>
#include<stdlib.h>
int main(void)

{
	int i, k;
	int j, result = 0;
	printf("������� ¦������ ���Ͻʴϱ�? ");
	scanf("%d", &i);
	if (i % 2 == 0)
	{
		for (j = 1;j <= (i / 2);j++)
		{
			result = result + j;
			k = (result) * 2;
		}
		printf("0���� %d���� ¦������ ����?: %d\n", i, k);
	}


	if (i % 2 == 1)
	{
		for (j = 1;j <= ((i - 1) / 2);j++)
		{
			result = result + j;
			k = (result) * 2;
		}
		printf("0���� %d���� ¦������ ����?: %d\n", i,k);
	}

	system("PAUSE");
	return 0;

}