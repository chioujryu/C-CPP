#include<stdio.h>

/*��r����ģʽ��������ļ���ȡ��Ϣ�����ļ�������ȷ���򱨴�*/
void main()
{
	FILE *fp;
	int i;
	char a = 'w';
	fp = fopen("aaa.txt","r+");			//aaa.txt�ļ����ڴ����ļ�ͬĿ¼�¿���ʡȥ·����
																		//	printf("%d",fp->);
	for(i = 0;i<20;++i)
		printf("%c",fgetc(fp));
	for(i = 0;i<20;++i)
		fputc(a,fp);
	i= fclose(fp);
	printf("%d",i);
}

/*��w��дģʽ���������ļ�д����Ϣ�����ļ������ڣ��򴴽�һ���ļ�
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


/*��a��׷��ģʽ���������ļ�ĩβ�����Ϣ�����ļ�������ȷ���򱨴�
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