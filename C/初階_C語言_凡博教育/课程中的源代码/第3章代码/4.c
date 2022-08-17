/*	条件表达式	
#include <stdio.h>
void main()
{
	int a;
	scanf("%d",&a);    //(a>10)?printf("a的值小于10\n"):printf("a的值不小于10\n")
	(a<10)? printf("a的值小于10\n"):printf("a的值不小于10\n");
}
*/

/*使用条件表达式实现如下要求：
1、输入一个字符
2、判别它是否为大写字母，如果是，将它转换为小写字母，否则不转换。
3、输出最后得到的字符

	
#include <stdio.h>
void main()
{
	char a;
	scanf("%c",&a);
	a = (a >='A' && a<= 'Z')? a+32 : a;
	printf("%c",a);
}
*/




