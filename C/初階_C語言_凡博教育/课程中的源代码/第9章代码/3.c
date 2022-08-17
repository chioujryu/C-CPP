#include<stdio.h>
/*“r”读模式；允许对文件读取信息。

void main()
{
	FILE *fp;
	int i;

	fp = fopen("aaa.txt","r");			
	for(i = 0;i<200;++i)							//系统指针会指向读取的位置
		printf("%c",fgetc(fp));
	fclose(fp);
}*/

/*“r”读模式；while循环读取到文件最后,文件结束标志EOF*/
void main()
{
	FILE *fp;
	char a ;

	fp = fopen("aaa.txt","r");	
	a = fgetc(fp);
	while(a != EOF)
	{
		printf("%c",a);
		a = fgetc(fp);
	}
	fclose(fp);
}



/*“w”写模式；允许向文件写入信息。若文件不存在，则创建一个文件

void main()
{
	FILE *fp;
	int i;
	char a = 'x';						//	\转义字符

	fp = fopen("D://C_program//9//bbb.txt","w");		//		路径\ 替换为/  //  \\																//	printf("%d",fp->);
	for(i = 0;i<20;++i)					//系统指针会指向读取的位置
		fputc(a,fp);			

	fclose(fp);
}*/

/*将aaa.txt的内容复制到同文件夹的ccc.dat中
void main()
{
	FILE *fp1, *fp2;
	char a  ;

	fp1 = fopen("D://C_program//9//aaa.txt","r");					//权限的设定可以减少误操作																//	printf("%d",fp->);
	fp2 = fopen("ccc.dat","w");
	while(a != EOF)
	{
		a = fgetc(fp1);
		fputc(a,fp2);
	}
	fclose(fp1);
	fclose(fp2);
}*/












/*   向文件读取字符串   
void main()
{
	FILE *fp;
	char str[50]; 

	fp = fopen("aaa.txt","r");
	fgets(str,50,fp);			//fgets(str,50,fp);
		printf("%s",str);
	fgets(str,50,fp);
	printf("%s",str);
	fclose(fp);
}*/ 



/*   向文件写入字符串  
void main()
{
	FILE *fp;
	char s[100];
	fp = fopen("ddd.txt","w");
	fputs("good time\n",fp);		
	gets(s);
	fputs(s,fp);
	fclose(fp);
}	 */ 


/*  格式化读写内容  
void main()
{
	FILE *fp;
	int a = 123;
	float b = 3.1415f;

	fp = fopen("eee.txt","w");
	fprintf(fp,"%d %5.3f",a,b);
	fclose(fp);
} */

/*
void main()
{
	FILE *fp;
	int a;
	float b;

	fp = fopen("eee.txt","r");
	fscanf(fp,"%d %f",&a,&b);
	printf("%d %f",a,b);
	fclose(fp);
}*/


/*用fread 、fwrite读写文件
#include <stdlib.h>
void main()
{
	FILE *fp1,*fp2;
	char *a = "I love china";
	char *s;
	s = malloc(100);
	fp1 = fopen("aaa.txt","r");
	fread(s,1,100,fp1);
//	s[50]='\0';
	printf("%s",s);

	fp2 = fopen("fff.dat","w");
	fwrite(a,1,15,fp2);
	fclose(fp2);
	fclose(fp1);
}*/


/*读写结构体

struct test 
{
	char name[20];
	int age ;
}stu = {"lisi",21};
void main()
{
	FILE *fp;
	fp = fopen("ggg.txt","w");			
	fwrite(&stu,sizeof(struct test),1,fp);
	fclose(fp);
}*/

/*ASCII复制二进制文件出错！
void main()
{
	FILE *fp1, *fp2;
	char a;

	fp1 = fopen("D:\\C_program\\9\\Debug\\1.exe","r");
	fp2 = fopen("D:\\C_program\\9\\Debug\\shiyan.exe","w");
	while (a != EOF)
	{
		a = fgetc(fp1);
		fputc(a,fp2);
	};
	fclose(fp1);
	fclose(fp2);
}*/


/*二进制文件复制正确方法
void main()
{
	FILE *fp1, *fp2;
	char buf[128];
	int a;

	fp1 = fopen("D:\\C_program\\9\\Debug\\1.exe","rb");
	fp2 = fopen("D:\\C_program\\9\\Debug\\shiyan.exe","wb");
	a = fread(buf,1,128,fp1);			//读取数据个数
	while (a != 0)
	{
		fwrite(buf,1,128,fp2);
		a = fread(buf,1,128,fp1);
	};
	fclose(fp1);
	fclose(fp2);
}*/