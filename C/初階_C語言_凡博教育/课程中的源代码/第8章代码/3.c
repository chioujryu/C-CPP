#include<stdio.h>

/*ָ��ָ��ṹ�������ʹ��
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
	printf("������%s\t���䣺%d\t�Ա�%d\tѧ�ţ�%d\n",p->name, p->age,p->sex,p->student_number);
}*/



/*ָ�� ָ�� �ṹ������
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
		printf("���������� ���� �Ա� ѧ��:");
		scanf("%s %d %c %d",p->name,&(p->age),&(p->sex),&(p->student_number));
	}
	for(p = student;p< student+3;p++)
		printf("������%s\t���䣺%d\t�Ա�%d\tѧ�ţ�%d\n",p->name, p->age,p->sex,p->student_number);
}*/




/*�ṹ���뺯������*/
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
	printf("�޸�%s����Ϣ\n",name);
	printf("�޸�Ϊ���� ���� �Ա� ѧ��:");
	scanf("%s %d %c %d",q->name,&(q->age),&(q->sex),&(q->student_number));
}

void main()
{
	struct test lisi, *p = &lisi;
	strcpy(lisi.name,"lisi");
	change_info(lisi.name,p );
	printf("������%s\t���䣺%d\t�Ա�%d\tѧ�ţ�%d\n",p->name, p->age,p->sex,p->student_number);
}