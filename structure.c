#include<stdio.h>
struct college
{
	int clgid;
	char clgname[10];
};
struct student
{
	int stid;
	char stname[10];
	float per;
	struct college clg;
};
int main()
{
	struct student stu=(105,"bhui",85.6,450,"sv");
		printf("%d\n",stu.stid);
		printf("%s\n",stu.stname);
		printf("%f\n",stu.per);
		printf("%d\n",stu.clg.clgid);
		printf("%d\n",stu.clg.clgname);

		return o;
}


