#include<stdio.h>

/*
void main()
{
	typedef int y;				
	typedef char c;
	y a = 1;					//int a =1;
	c b = 'w';					//char b = 'w';
	printf("%d\n",a);
	printf("%c\n",b);	
}*/

/*�ṹ���������滻�ķ���
void main()
{	
	typedef struct test
	{
		char name[10];
		int age;	
	}yy;		
	yy lisi;			//struct test lisi ;
	lisi.age = 10;
	printf("%d\n",lisi.age);
}*/


/**/
#include <string.h>
void main()
{
	typedef int ii[100];				//int a[100];����һ�����ʹ�������
	typedef char cc[30];				// typedef char cc[30];
	typedef char *zhi;					//typedef char *zhi;
	ii a;			//a[100]
	cc s;				//char s[30]
	zhi p;			//char *p
	a[1] = 100;
	a[99] =201;
	strcpy(s,"hello world");
	p = s;
	printf("%d\t%d\t%s\t%s\n",a[1],a[99],s,p);
	
}