#include <stdio.h>


/*��������������
union info
{
	int a;
	char b;
	float c;
};

void main()
{
	union info x;				//ռ�ڴ�4�ֽ�

	x.a = 100;
	printf("%d\t%c\t%f\n",x.a,x.b,x.c);
}*/

/*�������ʼ��ʱ��ֻ�ܴ洢һ�����ݣ�����ͬʱ�洢�������
void main()
{
	union info
	{	int a;
		char b;
		float c;
	}x={100};				
	
	x.c = 3.14f;				
	x.b = 'y';										//ASCII��󲿷��ǳ�Աc������

	printf("%d\t%c\t%f\n",x.a,x.b,x.c);
	printf("%d\t%d\t%d\n",&x.a,&x.b,&x.c);
}*/






/*��д��˾Ա����Ϣ*/
struct	info											//һ�����struct���Ͻڿε�����һ���ڴ���������ݵ�ʱ��ʹ��
{	char name[20];
	int age;
	char work;
	union
	{	int gzsc;
		char xueli[10];		
	}fen;
};

void main()
{
	struct info a[2];
	int i;
	for(i = 0; i <2; ++i)
	{
		printf("����д��ְ��Ϣ������ ���� ְ��[c��ʾ����Ա��s��ʾ���ʦ]\n");
		scanf("%s %d %c",a[i].name,&a[i].age,&a[i].work);
		if(a[i].work == 's')
		{	printf("������������ʱ����");
			scanf("%d",&a[i].fen.gzsc);		
		}
		else
		{	printf("����������ѧ����");
			scanf("%s",a[i].fen.xueli);		
		}
	}
	for(i = 0; i <2 ; ++i)
	{
		if(a[i].work == 's') printf("����:%s\t����%d\tְ��:%c\t����ʱ��:%d\n",a[i].name,a[i].age,a[i].work,a[i].fen.gzsc);
		else 	printf("����:%s\t����%d\tְ��:%c\tѧ��:%s\n",a[i].name,a[i].age,a[i].work,a[i].fen.xueli);
	}
}