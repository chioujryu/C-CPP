/*

#include <stdio.h>
void main()
{
//	int stdu0,stdu1,stdu2,stdu3,stdu4,stdu5,stdu6,stdu7,stdu8,stdu9;
	int n =10;
	int stud[10]={98,99,97,96,95,97,93,90,91,99};
	printf("������%d\n",stud[3-2]);
}
*/

/*
��10�������θ�ֵΪ5,6,7,8,9,10,11,12,13,14�������ӡ����Ļ�С�
Ҳ����ͨ��ѭ����ֵ�ķ�ʽ�����鸳ֵ

#include <stdio.h>
void main()
{
	int i;
	int num[] ={5,6,7,8,9,10,11,12,13,14};
	for(i=9;i>=0;--i)
	{
		printf("%d\t",num[i]);
	}
}
*/



/* ��쳲��������е�ǰ40�������ص㣬��1,2����Ϊ1���ӵ���������ʼ��������ǰ��������֮��
 ���磺1,1,2,3,5,8,13,...
ʹ�����齫쳲���������ǰ40�����ݱ���������
#include <stdio.h>
void main()
{
	int a = 1;
	int b = 1;
	int c,i;
	printf("%d\n%d\n",a,b);
	for(i = 1; i <= 38; i++)
	{
		c = a + b;
		printf("%d\n",c);
		a = b;
		b = c;	
	}
}
   */
/**/
#include <stdio.h>
void main()
{
	int i;
	int fib[40]={1,1};  
	for(i = 2; i < 40; ++i)	//i=3
	{
		fib[i] = fib[i-1]+fib[i-2];	//2
	}
	for(i=0;i<40;++i)
	{
		printf("%d\t",fib[i]);
	}
}
