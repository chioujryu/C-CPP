/*函数调用语句

#include <stdio.h>

void start()
{
	char b[5][5]={{' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},
					{' ','*',' ','*'},{' ',' ','*'}};
	int i,j;
	for(i = 0;i<5;i++)
	{
		for(j=0;j<5;j++)
			printf("%c",b[i][j]);
		printf("\n");
	}
}

void main()
{
	printf("打印菱形**\n");
	start();
	printf("再次打印菱形**\n");
	start();
	printf("再再次打印菱形**\n");
	start();
}
*/





/* 函数表达式 
#include <stdio.h>
int max(char x, int y)
{						//返回x和y中最大的值
	int z;
	z = x>y?x:y;
	return z;
}

void main()
{
	int a,b,c;
	scanf("%d,%d",&a,&b);
	c = max(4,a+3);
	printf("%d\n",c);
}
*/


/*函数参数
#include <stdio.h>
int max(int x, int y)
{						//返回x和y中最大的值
	int z;
	z = x>y?x:y;
	return z;
}

void start_num(int num)
{
	int i,j,k ;
	char b[5][5]={{' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'},{' ',' ','*'}};
	for(k= 0;k<num;++k)
	{
		for(i = 0;i<5;i++)
		{
			for(j=0;j<5;j++) printf("%c",b[i][j]);
			printf("\n");
		}
	}
}

void main()
{
	int a,b;
	scanf("%d,%d",&a,&b);
	start_num(max(a,b));	//函数参数：作为另一个函数调用时的参数。调用x函数后面不需要分号
}
*/




/*只有return语句的函数*/
#include <stdio.h>
int max(int a,int b)
{
	return (a>b?a:b);
}

void main()
{
	int a,b;
	scanf("%d,%d",&a,&b);
	printf("%d\n",max(a,b));

}