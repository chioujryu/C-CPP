#include<stdio.h>


/*
void main()
{
	char name[30];
	int age; 
	char sex;
	int student_number;
		
	char name_2[30];
	int age_2; 
	char sex_2;
	int student_number_2;

	//����ѧ����д��Ϣ��
	printf("������ѧ�������� ���� �Ա� ѧ��:");
	scanf("%s %d %c %d",name,&age,&sex,&student_number);
	printf("�μӱ�����ѧ����%s\t���䣺%d\t�Ա�%c\tѧ�ţ�%d\n",name,age,sex,student_number);
	
	printf("������ѧ�������� ���� �Ա� ѧ��:");
	scanf("%s %d %c %d",name_2,&age_2,&sex_2,&student_number_2);
	printf("�μӱ�����ѧ����%s\t���䣺%d\t�Ա�%c\tѧ�ţ�%d\n",name_2,age_2,sex_2,student_number_2);
}
*/

/**/
struct test
{
	char name[30];
	int age; 
	char sex;
	int student_number; 
};

void main()
{
	struct test lisi , zhaoliu;  

	printf("������ѧ�������� ���� �Ա� ѧ��:");
	scanf("%s %d %c %d",lisi.name,&lisi.age,&lisi.sex,&lisi.student_number);
	printf("�μӱ�����ѧ����%s\t���䣺%d\t�Ա�%c\tѧ�ţ�%d\n",lisi.name,lisi.age,lisi.sex,lisi.student_number);
	printf("������ѧ�������� ���� �Ա� ѧ��:");
	scanf("%s %d %c %d",zhaoliu.name,&zhaoliu.age,&zhaoliu.sex,&zhaoliu.student_number);
	printf("�μӱ�����ѧ����%s\t���䣺%d\t�Ա�%c\tѧ�ţ�%d\n",zhaoliu.name,zhaoliu.age,zhaoliu.sex,zhaoliu.student_number);
}




/*
struct score
{
	int shuxue;
	int yuwen;
	int zhengzhi;
	char tiyu;
}

struct test
{
	char name[30];
	int age; 
	char sex;
	int student_number; 
	struct score gaokao;
};
*/

/*2���ڴ�������ͬʱ����
void main()
{
	struct test
	{
		char name[30];
		int age; 
		char sex;
		int student_number; 
	}lisi,zhaoliu;
	printf("������ѧ�������� ���� �Ա� ѧ��:");
	scanf("%s %d %c %d",lisi.name,&lisi.age,&lisi.sex,&lisi.student_number);
	printf("�μӱ�����ѧ����%s\t���䣺%d\t�Ա�%c\tѧ�ţ�%d\n",lisi.name,lisi.age,lisi.sex,lisi.student_number);
		
	printf("������ѧ�������� ���� �Ա� ѧ��:");
	scanf("%s %d %c %d",zhaoliu.name,&zhaoliu.age,&zhaoliu.sex,&zhaoliu.student_number);
	printf("�μӱ�����ѧ����%s\t���䣺%d\t�Ա�%c\tѧ�ţ�%d\n",zhaoliu.name,zhaoliu.age,zhaoliu.sex,zhaoliu.student_number);
}*/


/*3����ָ���ṹ������ֱ�Ӷ���*/
void main()
{
	struct 
	{
		char name[30];
		int age; 
		char sex;
		int student_number; 
	}lisi,zhaoliu;

	printf("������ѧ�������� ���� �Ա� ѧ��:");
	scanf("%s %d %c %d",lisi.name,&lisi.age,&lisi.sex,&lisi.student_number);
	printf("�μӱ�����ѧ����%s\t���䣺%d\t�Ա�%c\tѧ�ţ�%d\n",lisi.name,lisi.age,lisi.sex,lisi.student_number);
		
	printf("������ѧ�������� ���� �Ա� ѧ��:");
	scanf("%s %d %c %d",zhaoliu.name,&zhaoliu.age,&zhaoliu.sex,&zhaoliu.student_number);
	printf("�μӱ�����ѧ����%s\t���䣺%d\t�Ա�%c\tѧ�ţ�%d\n",zhaoliu.name,zhaoliu.age,zhaoliu.sex,zhaoliu.student_number);
}



/*
struct score
{
	int shuxue;
	int yuwen;
	int zhengzhi;
	char tiyu;
}

struct test
{
	char name[30];
	int age; 
	char sex;
	int student_number; 
	struct score gaokao;
};

void main()
{
	struct test lisi;
	lisi.gaokao.tiyu = 'A';
	printf("��������Ϊ��%c\n",lisi.gaokao.tiyu);
}*/