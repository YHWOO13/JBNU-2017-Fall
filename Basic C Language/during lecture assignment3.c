#include<stdio.h>
struct student
{
	char sno[30];
	char name[20];
	int age;
	char department[30];
	int year;

	struct student * link;
};
int main(void)
{
	struct student stu1 = { "201715529","woo",21,"산공",1997 };
	struct student stu2 = { "201715119","go",21,"산공",1997 };
	struct student stu3 = { "201715239","conscripted",21,"산공",1997 };
	struct student stu4 = { "201715329","police",21,"산공",1997 };
	struct student stu5 = { "201715429","man",21,"산공",1997 };

	stu1.link = &stu2;
	stu2.link = &stu3;
	stu3.link = &stu4;
	stu4.link = &stu5;
	
	printf("%s %s %d %s %d \n", stu1.sno, stu1.name, stu1.age, stu1.department, stu1.year);
	printf("%s %s %d %s %d \n", stu1.link->sno, stu1.link->name, stu1.link->age, stu1.link->department, stu1.link->year);
	printf("%s %s %d %s %d \n", stu1.link->link->sno, stu1.link->link->name, stu1.link->link->age, stu1.link->link->department, stu1.link->link->year);
	printf("%s %s %d %s %d \n", stu1.link->link->link->sno, stu1.link->link->link->name, stu1.link->link->link->age, stu1.link->link->link->department, stu1.link->link->link->year);
	printf("%s %s %d %s %d \n", stu1.link->link->link->link->sno, stu1.link->link->link->link->name, stu1.link->link->link->link->age, stu1.link->link->link->link->department, stu1.link->link->link->link->year);

	return 0;
}