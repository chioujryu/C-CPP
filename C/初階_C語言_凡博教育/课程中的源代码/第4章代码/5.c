/*
计算机1+2+3+… <x时，一共累加了几个数？

#include <stdio.h>
void main()
{
	int i,total,x ;
	scanf("%d",&x);
	for(i = 1,total = 0; ;i++)
	{
		total += i;  //total = total + i ;  1
		if(total > x)
		{
			printf("一共累加了%d\n",i);
			break;
		}
	}
}

*/



/* 
#include<stdio.h>
void main()
{
	int i=1,j=1;
	while(i<=9)
	{
		while(j<=9)
		{
			printf("%d*%d=%d\n",i,j,i*j);
			++j; 
		}
		++i;
		j=1;
	}
}
 */






/*  */
#include<stdio.h>
void main()
{
	int i=1,j=0;
	while(i<=9)  //i =3
	{
		while(j<9)
		{
			++j;  //j=3
			if(i<=j)
				printf("%d*%d=%d\n",i,j,i*j);
			else  continue;
			printf("1++++++\n");
		}
		++i;  
		j=0;
	}
}