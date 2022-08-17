#include<stdio.h>


/*把文件aaa.txt的内容复制两次到文件hhh.dat中，两次之间的内容用空白行分隔 
void main()
{
	FILE *fp1,*fp2;
	char buf[10];
	int a;

	fp1 = fopen("aaa.txt","r");
	fp2 = fopen("hhh.dat","w");
	a = fread(buf,1,10,fp1);
	while(a != 0)
	{
		fwrite(buf,1,a,fp2);		//size设置读取的最小单元。
		a = fread(buf,1,10,fp1);
	}

	//在循环复制一次
	fputc('\n',fp2);
	fputc('\n',fp2);

	rewind(fp1);
	a = fread(buf,1,10,fp1);
	while(a != 0)
	{
		fwrite(buf,1,a,fp2);	
		a = fread(buf,1,10,fp1);
	}
	fclose(fp1);
	fclose(fp2);
}*/


/*使用fseek函数改变文件指针读写位置*/
void main()
{
	FILE * fp1, *fp2;
	char buf[10];
	int a;

	fp1 = fopen("aaa.txt","r");
	fp2 = fopen("ooo.dat","w");
//	fseek(fp1,10,0);					//文件指针在文件开头向后移动10个字节位置
//	fseek(fp1,-10,2);					//文件指针在文件末尾向前移动10个字节位置	
	a = fread(buf,1,10,fp1);
	while(a != 0)
	{
		fwrite(buf,1,a,fp2);	
		fseek(fp1,10,1);				//文件指针在当前位置向后移动10个字节位置
		a = fread(buf,1,10,fp1);
	}
	fclose(fp1);
	fclose(fp2);
}