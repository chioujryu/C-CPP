/*
实现将公元0年~10000年的所有闰年都打印出来。

#include <stdio.h>
void main()
{
	int year = 0;
	while(year <= 10000)
	{
		if(((year%4==0) && (year%100!=0)) || (year%400 ==0))
		{
			printf("%d是闰年\n",year);
		}
		++year;   //10001
	}
	printf("结束\n");
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
			printf("%d是闰年\n",year);
		}
		++year;   //10001
	}
	printf("结束\n");
}

/*

#include <stdio.h>
void main()
{
	while(1)	;   //
}
*/
