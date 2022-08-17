#include<stdio.h>

/*“r”读模式；允许对文件读取信息。若文件名不正确，则报错*/
void main()
{
	FILE *fp;
	int i;
	char a = 'w';
	fp = fopen("aaa.txt","r+");			//aaa.txt文件是在代码文件同目录下可以省去路径。
																		//	printf("%d",fp->);
	for(i = 0;i<20;++i)
		printf("%c",fgetc(fp));
	for(i = 0;i<20;++i)
		fputc(a,fp);
	i= fclose(fp);
	printf("%d",i);
}

/*“w”写模式；允许向文件写入信息。若文件不存在，则创建一个文件
void main()
{
	FILE *fp;
	int i;
	char a = 'x';

	fp = fopen("D://C_program//9//bbb.txt","r+");																	//	printf("%d",fp->);
	for(i = 0;i<20;++i)
		fputc(a,fp);

	i= fclose(fp);
	printf("%d",i);
}*/


/*“a”追加模式，允许在文件末尾添加信息。若文件名不正确，则报错
void main()
{
	FILE *fp;
	int i;
	char a = 'x';

	fp = fopen("D://C_program//9//bbb.txt","a");																	//	printf("%d",fp->);
	for(i = 0;i<20;++i)

		fputc(a,fp);

	i= fclose(fp);
	printf("%d",i);
}*/