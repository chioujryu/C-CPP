#include<stdio.h>
/*��r����ģʽ��������ļ���ȡ��Ϣ��

void main()
{
	FILE *fp;
	int i;

	fp = fopen("aaa.txt","r");			
	for(i = 0;i<200;++i)							//ϵͳָ���ָ���ȡ��λ��
		printf("%c",fgetc(fp));
	fclose(fp);
}*/

/*��r����ģʽ��whileѭ����ȡ���ļ����,�ļ�������־EOF*/
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



/*��w��дģʽ���������ļ�д����Ϣ�����ļ������ڣ��򴴽�һ���ļ�

void main()
{
	FILE *fp;
	int i;
	char a = 'x';						//	\ת���ַ�

	fp = fopen("D://C_program//9//bbb.txt","w");		//		·��\ �滻Ϊ/  //  \\																//	printf("%d",fp->);
	for(i = 0;i<20;++i)					//ϵͳָ���ָ���ȡ��λ��
		fputc(a,fp);			

	fclose(fp);
}*/

/*��aaa.txt�����ݸ��Ƶ�ͬ�ļ��е�ccc.dat��
void main()
{
	FILE *fp1, *fp2;
	char a  ;

	fp1 = fopen("D://C_program//9//aaa.txt","r");					//Ȩ�޵��趨���Լ��������																//	printf("%d",fp->);
	fp2 = fopen("ccc.dat","w");
	while(a != EOF)
	{
		a = fgetc(fp1);
		fputc(a,fp2);
	}
	fclose(fp1);
	fclose(fp2);
}*/












/*   ���ļ���ȡ�ַ���   
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



/*   ���ļ�д���ַ���  
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


/*  ��ʽ����д����  
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


/*��fread ��fwrite��д�ļ�
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


/*��д�ṹ��

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

/*ASCII���ƶ������ļ�����
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


/*�������ļ�������ȷ����
void main()
{
	FILE *fp1, *fp2;
	char buf[128];
	int a;

	fp1 = fopen("D:\\C_program\\9\\Debug\\1.exe","rb");
	fp2 = fopen("D:\\C_program\\9\\Debug\\shiyan.exe","wb");
	a = fread(buf,1,128,fp1);			//��ȡ���ݸ���
	while (a != 0)
	{
		fwrite(buf,1,128,fp2);
		a = fread(buf,1,128,fp1);
	};
	fclose(fp1);
	fclose(fp2);
}*/