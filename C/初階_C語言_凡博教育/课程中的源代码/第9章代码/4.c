#include<stdio.h>


/*���ļ�aaa.txt�����ݸ������ε��ļ�hhh.dat�У�����֮��������ÿհ��зָ� 
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
		fwrite(buf,1,a,fp2);		//size���ö�ȡ����С��Ԫ��
		a = fread(buf,1,10,fp1);
	}

	//��ѭ������һ��
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


/*ʹ��fseek�����ı��ļ�ָ���дλ��*/
void main()
{
	FILE * fp1, *fp2;
	char buf[10];
	int a;

	fp1 = fopen("aaa.txt","r");
	fp2 = fopen("ooo.dat","w");
//	fseek(fp1,10,0);					//�ļ�ָ�����ļ���ͷ����ƶ�10���ֽ�λ��
//	fseek(fp1,-10,2);					//�ļ�ָ�����ļ�ĩβ��ǰ�ƶ�10���ֽ�λ��	
	a = fread(buf,1,10,fp1);
	while(a != 0)
	{
		fwrite(buf,1,a,fp2);	
		fseek(fp1,10,1);				//�ļ�ָ���ڵ�ǰλ������ƶ�10���ֽ�λ��
		a = fread(buf,1,10,fp1);
	}
	fclose(fp1);
	fclose(fp2);
}