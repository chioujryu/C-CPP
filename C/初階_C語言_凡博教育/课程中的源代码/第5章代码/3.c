/*字 符 数 组
#include <stdio.h>
void main()
{
	int i;
	char  b[]={'g','o','o','d',' ','t','i','m','e','.'};
//	int  c[10] ={'g','o','o','d',' ','t','i','m','e','.'};	//会浪费空间
	for(i=0;i<10;++i)
	{
		printf("%5c",b[i]);
	}

}*/


/*输出菱形图
#include <stdio.h>
void main()
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
}*/


/*
#include <stdio.h>
void main()
{
	char c[]="good time.";	//c[]={"good time."};  //c[] = "good time."
	int i ;
	for(i=0;i<10;i++)
		printf("%c",c[i]);
	printf("\n");
}*/



/*
#include <stdio.h>
void main()
{	
//	int i;
	char a[] = {'l','e','n','i'};
//	char b[10], c[10],d[10];
//	for(i=0;i<5;++i)	//方法1
//	{
//		printf("%c",a[i]);
//	}
//	printf("\n");
//	printf("%s\n",a);		//方法2 ，a[1]错误
//	scanf("%s",b);
//	printf("%s",b);
	scanf("%s%s%s",b,c,d);
	printf("%s\n",b);		
	printf("%s\n",c);	//  %o输出数组c的起始地址
	printf("%s\n",d);
}
*/



/*
#include <stdio.h>
void main()
{
	char a[5]={'h','e','l','l','o'};
	printf("%s",a);
}*/







/*
#include <stdio.h>
#include <string.h>
void main()
{
//	char a[30]="I Love China";		
//	puts(a);		//puts输出时将字符串结束标志\0转换为\n; 
//	puts(a);
//	char b[20];
//	gets(b);
//	printf("%s",b);
//	char c[]="I Love ", d[]="China";
//	printf("%s",strcat(c,d));
//	strcpy(c,"iiiii");
//	printf("%s\n",c);
//	c = "china";		//c[0] ='c'这种可以。
//	printf("%s",c);
//	strncpy(c,d,3);
//	printf("%s",c);

	char e[] ="learning",f[]="learninh";		
//	if(e>f)	printf("e大于f\n");		//错误
//	else	printf("e不大于f\n");
//	if(strcmp(e,f)>0)	printf("e大于等于f\n");		//正确
//	else	printf("e不大于f\n");

//	printf("%d",strlen(e));	
	
	char g[]="LEARING";
//	printf("%s",strlwr(g));
	printf("%s",strupr(e));
}*/



/*
输入一行字符，统计其中有多少个单词，单词之间使用空格分开

#include <stdio.h>
void main()
{
	char danci[100];
	int i , num = 0;

	gets(danci);
	for(i=0;danci[i]!='\0';++i)
	{
		if(danci[i] == ' ')	num++;
	
	}
	printf("单词%s的个数%d\n",danci,num+1);
}
*/




/*编写代码实现strcpy函数，将s2中的字符全部赋值到s1中*/
#include <stdio.h>
#include <string.h>
void main()
{
	char s1[100],s2[100];
	unsigned int i;
	scanf("%s",s2);
	for(i=0;i <= strlen(s2);i++)
		s1[i] = s2[i];
	printf("%s",s1);

}