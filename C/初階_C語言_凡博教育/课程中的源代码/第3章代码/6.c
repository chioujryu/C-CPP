/*

学生成绩分类（85分以上为A等，70~84分为B等，60~69分为C等，D等为60分以下,其他情况错误）



#include <stdio.h>
void main()
{
	char a;
	scanf("%c",&a);
	if(a<'A' || a>'D')	printf("输入情况错误\n");
	else
	{
		if(a == 'A')	printf("85~100\n");
		if(a == 'B')	printf("70~84\n");
		if(a == 'C')	printf("60~69\n");
		if(a == 'D')	printf("<60\n");
	}
}



*/

/*
学生成绩分类（85分以上为A等，70~84分为B等，60~69分为C等，D等为60分以下,其他情况错误）
用switch语句实现多分支选择结构
*/
#include <stdio.h>
void main()
{
	char a;
	scanf("%c",&a);
	switch(a)
	{

		case 'A':	
		case 'B':	
		case 'C':	printf("60~100\n");	break;
		case 'D':	printf("<60\n");break;	
		default:	printf("输入情况错误\n");
	
	}
	
}


