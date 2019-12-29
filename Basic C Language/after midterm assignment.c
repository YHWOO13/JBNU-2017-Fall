#include<stdio.h>
#include<stdio.h>
int main(void)
{
	printf("10개의 숫자를 입력하시오 \n");
	int n[10];
	int i, total = 0;
	int max;
	
	for (i = 0;i <= 9;i++)
	{
		scanf("%d", &n[i]);

	
		total = total + n[i];
		if (n[i] >= max)
		{
			max = n[i];
		}
	

	}
	
	
	printf("총합; %d\n", total);
	printf("평균: %.2lf\n", (double)total / 10);
	printf("최댓값: %d", max);

	system("PAUSE");
	return 0;
}
