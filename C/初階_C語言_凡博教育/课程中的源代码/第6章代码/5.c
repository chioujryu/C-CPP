/*找到4个数字中最大的*/
int max(int a,int b,int c,int d);
int max_2(int x,int y);
#include <stdio.h>
void main()
{	
	
	int a,b,c,d;
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	printf("%d\n",max(a,b,c,d));

}

int max(int a,int b,int c,int d)//
{
	
	int m;
	m = max_2(a,b);		//9
	m = max_2(m,c);
	m = max_2(m,d);
	return m;
}

int max_2(int x,int y)
{
	return x>y?x:y;

}