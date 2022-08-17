/*只有return语句的函数*/
int max(int ,int );
#include <stdio.h>


void main()
{	

	int a,b;
	scanf("%d,%d",&a,&b);
	printf("%d\n",max(a,b));

}

int max(int a,int b)
{
	return (a>b?a:b);
}

