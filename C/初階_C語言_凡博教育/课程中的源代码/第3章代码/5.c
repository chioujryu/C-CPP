/*	ѡ��ṹ��Ƕ��	
else�����������������δ��Ե� if ��ԡ�
����һ��tab��ʹ�����������׶���
*/
#include <stdio.h>
void main()
{
	int x;
	scanf("%d",&x);
	if(x<0)	printf("���������0����");
	if(x<18)
	{
		if(x<12) printf("�Ƕ�ͯ\n");	
		else	printf("��������\n");
	}
	else 
	{
		if(x<35)	printf("������\n");
		if(x<50)	printf("������\n");
		else	printf("������\n");
	}
}

