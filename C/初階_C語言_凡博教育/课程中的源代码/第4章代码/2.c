/*
ʵ�ֽ���Ԫ0��~10000����������궼��ӡ������

#include <stdio.h>
void main()
{
	int year = 0;
	do
	{
		if(((year%4==0) && (year%100!=0)) || (year%400 ==0))
			printf("%d������\n",year);
		++year;   //10001
	}
	while(year <= 10000);
	printf("����\n");
}


*/




/*   ��1+2+3+4+��.+x�Ľ����x���û���������֣�      */
#include <stdio.h>
void main()
{
	int i = 1,total = 0,x;
	
	scanf("%d",&x);
	do
	{
		total += i;
		printf("ÿ��ѭ�����ۼӺ�Ϊ��%d\n",total);
		++i;
	}
	while(i <= x);
	printf("�����ۼӺ�Ϊ��%d\n",total);
}

