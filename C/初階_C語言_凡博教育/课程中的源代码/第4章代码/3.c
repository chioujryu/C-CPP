/*	ʵ�ֽ���Ԫ0��~10000����������궼��ӡ������
#include <stdio.h>
void main()
{
	int year,i;				//i;
	for(year = 0 ,i=100; year <= 10000; year++,i--)	 //i++
	{
		if(((year%4==0) && (year%100!=0)) || (year%400 ==0))
		{
			printf("%d������\n",year);
		}
		
	}
	printf("�������\n");
//	printf("%d\n",i);
}
*/


/*
#include <stdio.h>
int main()
{
	int i = 0, x;
	x = i++; //��׌x׃��i��ֵ���ټ�1
	x = ++i; //��׌x���1���ټ�i
}
*/

/*  
#include <stdio.h>
void main()
{
	char c;
	for(;(c = getchar())!='\n';)
		printf("%c\n",c);
		
} 
*/
