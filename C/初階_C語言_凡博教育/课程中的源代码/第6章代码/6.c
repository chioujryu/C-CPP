/* �����ݹ�����ѭ��
#include <stdio.h>
int fun(int i)		//12
{
	printf("%d\n",i);
	return fun(i+1);
}

void main()
{
	int num;//9
	scanf("%d",&num);
	fun(num);
}*/



/*	��һ�����Ľ׳�	*/
#include <stdio.h>

int fact(int n)
{
	int f;
	if(n==1)
		f = 1;
	else f = fact(n-1)*n;
	return f;
}
void main()
{	
	int i;
	scanf("%d",&i);
	printf("%d\n",fact(i));
}


