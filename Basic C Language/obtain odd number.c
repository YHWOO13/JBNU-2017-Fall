#include<stdio.h>
#include<stdlib.h>
//홀수까지의 합 구하기


int main(void)
{
	int i = 1, j, result = 0;
	printf("몇까지의 홀수 합을 원하십니까? ");
	scanf("%d", &j);
	if (j % 2 == 1)
	{
		result = ((j / 2) + 1)*((j / 2) + 1);
		printf("답: %d\n", result);
	}
	else if (j % 2 == 0)
	{
		result = (((j - 1) / 2) + 1)*(((j - 1) / 2) + 1);
		printf("답: %d\n", result);
	}

	system("PAUSE");
	return 0;
}