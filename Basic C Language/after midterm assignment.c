#include<stdio.h>
#include<stdio.h>
int main(void)
{
	printf("10���� ���ڸ� �Է��Ͻÿ� \n");
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
	
	
	printf("����; %d\n", total);
	printf("���: %.2lf\n", (double)total / 10);
	printf("�ִ�: %d", max);

	system("PAUSE");
	return 0;
}
