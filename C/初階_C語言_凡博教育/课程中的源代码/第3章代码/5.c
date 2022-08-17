/*	选择结构的嵌套	
else总是与它上面最近的未配对的 if 配对。
缩进一个tab，使程序清晰、易读。
*/
#include <stdio.h>
void main()
{
	int x;
	scanf("%d",&x);
	if(x<0)	printf("请输入大于0的数");
	if(x<18)
	{
		if(x<12) printf("是儿童\n");	
		else	printf("是青少年\n");
	}
	else 
	{
		if(x<35)	printf("是青年\n");
		if(x<50)	printf("是中年\n");
		else	printf("是老年\n");
	}
}

