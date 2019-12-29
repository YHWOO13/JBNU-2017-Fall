#include<stdio.h>
#include<stdlib.h>
int main(void)

{
	int i, k;
	int j, result = 0;
	printf("몇까지의 짝수합을 원하십니까? ");
	scanf("%d", &i);
	if (i % 2 == 0)
	{
		for (j = 1;j <= (i / 2);j++)
		{
			result = result + j;
			k = (result) * 2;
		}
		printf("0부터 %d까지 짝수들의 합은?: %d\n", i, k);
	}


	if (i % 2 == 1)
	{
		for (j = 1;j <= ((i - 1) / 2);j++)
		{
			result = result + j;
			k = (result) * 2;
		}
		printf("0부터 %d까지 짝수들의 합은?: %d\n", i,k);
	}

	system("PAUSE");
	return 0;

}