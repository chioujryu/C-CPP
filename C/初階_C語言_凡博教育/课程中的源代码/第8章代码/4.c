#include<stdio.h>
#include <string.h>
#include <stdlib.h>


struct test
{
	char name[30];
	int age; 
	int student_number;
	struct test *next;			//ָ��struct test�������ݵ�ָ�롣
};

/* ����һ�������� 
void main()
{
	struct test a,b,c , *head,*p;

	strcpy(a.name,"zhangsan");		//�������ṹ�帳ֵ
	a.age = 16;
	a.student_number = 1001;
	strcpy(b.name,"lisi");
	b.age = 19;
	b.student_number = 1102;
	strcpy(c.name,"wangwu");
	c.age = 18;
	c.student_number = 1009;

	head =&a;					//��3���ṹ�幹��������
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	p = head;
	while(p!= NULL)					//�����������
	{
		printf("%d\n",p);
		printf("����:%s\t����:%d\tѧ��:%d\n",p->name,p->age,p->student_number);
		p = p->next;
	}
}*/

/**/
void main()
{
	struct test *head, *p1,*p2;
	int n = 0;
	
	p1 = p2 = malloc(sizeof(struct test));			//��ӵ�һ���������
	printf("���������� ���� ѧ��:");
	scanf("%s %d %d",p1->name,&p1->age,&p1->student_number);
	head = NULL;
	while(p1->student_number > 0)
	{
		n = n+1;								//	n =3
		if(n == 1)	head = p1;						//��������
		else p2->next = p1;
		p2 = p1;
		p1 = malloc(sizeof(struct test));			//ѭ����ӱ������
		printf("���������� ���� ѧ��:");
		scanf("%s %d %d",p1->name,&p1->age,&p1->student_number);
	}
	p2->next = NULL;
													
	p1 = head;
	while(p1 != NULL)				//��������Ƿ������ݣ���������ݾʹ�ӡ���
	{
		printf("����:%s\t����:%d\tѧ��:%d\n",p1->name,p1->age,p1->student_number);
		p1 = p1->next;
	}
}