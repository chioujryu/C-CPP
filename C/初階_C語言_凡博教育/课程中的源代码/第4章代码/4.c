/* ʹ��ѭ������ӡ��9*9�˷��ھ�  */

/*   while + while
#include <stdio.h>
void main()
{
	int i=0,j=0;
	while(i<=9)
	{
		while(j<=9)
		{
			printf("%d*%d=%d\n",i,j,i*j);
			++j; //j =10
		}
		++i;//i=1
		j=0;//����ȱ��
	}
}
*/


/*while + do while
#include<stdio.h>
void main()
{
	int i=0,j=0;
	while(i<=9)
	{
		do
		{
			printf("%d*%d=%d\n",i,j,i*j);
			++j;
		}while(j<=9);
		++i;
		j=0;//����ȱ��
	}
}
*/



/*for + for
#include<stdio.h>
void main()
{
	int i=0,j=0;
	for(; i<= 9;++i)
	{
		for(j=0;j<=9;++j)
		{
			printf("%d*%d=%d\n",i,j,i*j);
		}
	}
}*/


/*  ʵ��ʱ��
#include <stdio.h>
#include <windows.h> 
void main()
{
	int miao,fen,shi;
	for(shi = 0;shi<= 24; ++shi)
	{
		for(fen= 0;fen<=60; ++fen)
		{
			for(miao = 0;miao<=60;++miao)
			{
				Sleep(100);
				printf("\r%dh-%dm-%ds",shi,fen,miao);
			}
		}
	}
}
*/
#include <stdio.h>
#include <windows.h> 
void main()
{
	int miao,fen,shi;
	for(shi = 0;shi<= 24; ++shi)
	{
		for(fen= 0;fen<=60; ++fen)
		{
			for(miao = 0;miao<=60;++miao)
			{
				Sleep(100);
				printf("\r%dh-%dm-%ds",shi,fen,miao);
			}
		}
	}
}