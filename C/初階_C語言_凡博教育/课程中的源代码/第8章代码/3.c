#include<stdio.h>

/*指针指向结构体变量的使用
#include <string.h>
void main()
{	
	struct test
	{
		char name[30];
		int age; 
		char sex;
		int student_number; 
	}lisi ={"lisi",32,'M',20190305};

	struct test *p;
	p = &lisi;

	strcpy((*p).name,"caojiu");
	(*p).age = 28;
	printf("姓名：%s\t年龄：%d\t性别%d\t学号：%d\n",p->name, p->age,p->sex,p->student_number);
}*/



/*指针 指向 结构体数组
void main()
{	
	struct test
	{
		char name[30];
		int age; 
		char sex;
		int student_number; 
	}student[3];
	struct test *p;

	for(p = student;p< student+3; p++)
	{
		printf("请输入姓名 年龄 性别 学号:");
		scanf("%s %d %c %d",p->name,&(p->age),&(p->sex),&(p->student_number));
	}
	for(p = student;p< student+3;p++)
		printf("姓名：%s\t年龄：%d\t性别%d\t学号：%d\n",p->name, p->age,p->sex,p->student_number);
}*/




/*结构体与函数传递*/
#include <string.h>
struct test
{
	char name[30];
	int age; 
	char sex;
	int student_number; 
};

void change_info(char name[30],struct test *q)
{
	printf("修改%s的信息\n",name);
	printf("修改为姓名 年龄 性别 学号:");
	scanf("%s %d %c %d",q->name,&(q->age),&(q->sex),&(q->student_number));
}

void main()
{
	struct test lisi, *p = &lisi;
	strcpy(lisi.name,"lisi");
	change_info(lisi.name,p );
	printf("姓名：%s\t年龄：%d\t性别%d\t学号：%d\n",p->name, p->age,p->sex,p->student_number);
}