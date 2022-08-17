#include<stdio.h>
#include <string.h>
#include <stdlib.h>


struct test
{
	char name[30];
	int age; 
	int student_number;
	struct test *next;			//指向struct test类型数据的指针。
};

/* 创建一个简单链表 
void main()
{
	struct test a,b,c , *head,*p;

	strcpy(a.name,"zhangsan");		//给各个结构体赋值
	a.age = 16;
	a.student_number = 1001;
	strcpy(b.name,"lisi");
	b.age = 19;
	b.student_number = 1102;
	strcpy(c.name,"wangwu");
	c.age = 18;
	c.student_number = 1009;

	head =&a;					//把3个结构体构建成链表
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	p = head;
	while(p!= NULL)					//输出链表内容
	{
		printf("%d\n",p);
		printf("姓名:%s\t年龄:%d\t学号:%d\n",p->name,p->age,p->student_number);
		p = p->next;
	}
}*/

/**/
void main()
{
	struct test *head, *p1,*p2;
	int n = 0;
	
	p1 = p2 = malloc(sizeof(struct test));			//添加第一个表的内容
	printf("请输入姓名 年龄 学号:");
	scanf("%s %d %d",p1->name,&p1->age,&p1->student_number);
	head = NULL;
	while(p1->student_number > 0)
	{
		n = n+1;								//	n =3
		if(n == 1)	head = p1;						//创建链表
		else p2->next = p1;
		p2 = p1;
		p1 = malloc(sizeof(struct test));			//循环添加表的内容
		printf("请输入姓名 年龄 学号:");
		scanf("%s %d %d",p1->name,&p1->age,&p1->student_number);
	}
	p2->next = NULL;
													
	p1 = head;
	while(p1 != NULL)				//检查链表是否有内容，如果有内容就打印输出
	{
		printf("姓名:%s\t年龄:%d\t学号:%d\n",p1->name,p1->age,p1->student_number);
		p1 = p1->next;
	}
}