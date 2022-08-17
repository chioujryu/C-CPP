/*  <	<=	>	>=	==	!= 
1、定义a,b,c变量，比较a和b的大小，将最小的数保存到c中
2、如果a和b相等的时候，c存储a和b任何一个数据
2、如果a和b相等的时候，提示a和b相等(==)
2、如果a和b不相等的时候，提示a和b不相等
#include <stdio.h>
void main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	if(a>=b)
	{
		c = b;
		printf("c=%d\n",c);
	}
	if(a!=b)
	{
		printf("a and b are not equal \n"); //a和b是不相等的
	}
}
*/



/*	1代表真，0代表假	
#include <stdio.h>
void main()
{
	int a=4,b =5,c =1,f;
//	printf("%d\n",3<4);
//	printf("%d\n",a<b==c);
//	d = a>b	;		// a>b为假0    d = 0
//	printf("%d\n",d);
	f = a<b>c;	// 运算符自左向右结合方向，不能這樣寫，所以為false
	printf("%d\n",f);
}
*/
