/*
ʵ�ֽ���Ԫ0��~10000����������궼��ӡ������

#include <stdio.h>
void main()
{
	int year = 0;
	while(year <= 10000)
	{
		if(((year%4==0) && (year%100!=0)) || (year%400 ==0))
		{
			printf("%d������\n",year);
		}
		++year;   //10001
	}
	printf("����\n");
}

*/
#include <stdio.h>
void main()
{
	int year = 0;
	while(year <= 10000)
	{
		if(((year%4==0) && (year%100!=0)) || (year%400 ==0))
		{
			printf("%d������\n",year);
		}
		++year;   //10001
	}
	printf("����\n");
}

/*

#include <stdio.h>
void main()
{
	while(1)	;   //
}
*/
