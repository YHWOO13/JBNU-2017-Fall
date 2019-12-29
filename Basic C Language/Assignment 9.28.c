#include<stdio.h>

int main(void)
{
	char name[100];
	char sno[100];
	int birthyear;
	printf("What is your name?: ");
	scanf("%s",name);
	printf("What is student number?: ");
	scanf("%s",sno);
	printf("What is your department?: ");
	scanf("%s", dep);
	printf("What is your grade?: ");
	scanf("%s", grd);
	printf("When is your birthday year?: ");
	scanf("%d",&birthyear);
	printf("How much your weight?: ");
	scanf("%d", wgt);

	printf("Name: %s,\n", name);
	printf("Number: %s.\n", sno);
	printf("Department: %s.\n", dep);
	printf("Grade: %s.\n", grd);
	printf("Birthyear: %d, Age: %d.\n", birthyear, 2017-birthyear);
	printf("Weight: %ds.\n", wgt);

	getchar();
	getchar();
	return 0;
}