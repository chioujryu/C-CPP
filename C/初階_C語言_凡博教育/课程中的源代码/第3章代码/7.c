/*�ж�ĳһ���Ƿ�Ϊ����
���ܱ�4�����������ܱ�100��������2008
���ܱ�400�����������꣬��2000 
 ��ʹ���߼������((year%4==0) && (year%100!=0)) || (year%400 ==0)

#include <stdio.h>		//��bug
void main()
{
	int year;
	printf("��������ݣ�\n");
	scanf("%d",&year);
	if (year %4 == 0)
	{
		if(year %100 ==0)
			printf("��������\n");
		else
			printf("������\n");
		
	}
	else printf("��������\n");
	if(year % 400 == 0)
	{
		printf("������\n");
	}
	else printf("��������\n");

}


*/
/*
#include <stdio.h>
void main()
{
	int year,leap;
	printf("��������ݣ�\n");
	scanf("%d",&year);
	if(year%4 == 0)
	{
		if(year %100 == 0)	
		{
			if(year % 400 == 0)	leap = 1;
			else leap = 0;
		}
		else leap = 1	;		
	}
	else leap = 0;
	if(leap)
		printf("%d������\n",year);
	else
		printf("%d��������\n",year);
}
*/




/*��Ь��1~2˫������ 3~4˫ 9�� 5~6˫ 8�� 7~8˫ 7.5�� 9˫���� 7��
#include <stdio.h>
void main()
{
	int num,price;
	printf("�����빺���Ь�����͵���:\n");
	scanf("%d%d",&num,&price);
	printf("Ь�ӵĔ�����:%d\n",num);
	printf("Ь�ӵĆ΃r��:%d\n",price);
	printf("%d\n",(int)((num+1)/2));
	switch ((int)((num+1)/2))
	{
		case 1:	printf("�ܼ�Ϊ��%d\n",num *  price); break;
		case 2: printf("�ܼ�Ϊ��%f\n",num *  price*0.9);break;
		case 3: printf("�ܼ�Ϊ��%f\n",num *  price*0.8);break;
		case 4: printf("�ܼ�Ϊ��%f\n",num *  price*0.75);break;
		default: printf("�ܼ�Ϊ��%f\n",num *  price*0.7);
	}
}
*/

