/*

ѧ���ɼ����ࣨ85������ΪA�ȣ�70~84��ΪB�ȣ�60~69��ΪC�ȣ�D��Ϊ60������,�����������



#include <stdio.h>
void main()
{
	char a;
	scanf("%c",&a);
	if(a<'A' || a>'D')	printf("�����������\n");
	else
	{
		if(a == 'A')	printf("85~100\n");
		if(a == 'B')	printf("70~84\n");
		if(a == 'C')	printf("60~69\n");
		if(a == 'D')	printf("<60\n");
	}
}



*/

/*
ѧ���ɼ����ࣨ85������ΪA�ȣ�70~84��ΪB�ȣ�60~69��ΪC�ȣ�D��Ϊ60������,�����������
��switch���ʵ�ֶ��֧ѡ��ṹ
*/
#include <stdio.h>
void main()
{
	char a;
	scanf("%c",&a);
	switch(a)
	{

		case 'A':	
		case 'B':	
		case 'C':	printf("60~100\n");	break;
		case 'D':	printf("<60\n");break;	
		default:	printf("�����������\n");
	
	}
	
}


