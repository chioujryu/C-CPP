#include<stdio.h>

void main()
{
	FILE * fp1, *fp2;
	char buf[10];
	int a;

	fp1 = fopen("aaa.txt","r");
	fp2 = fopen("ppp.dat","w");	
	a = fread(buf,1,10,fp1);
	while(a != 0)
	{
		fwrite(buf,1,a,fp2);	
		a = fread(buf,1,10,fp1);
		printf("%d",ferror(fp1));		//���fread���������Ƿ��д���
		if(ferror(fp1)) clearerr(fp1);	//��ferror��鵽��д�������ִ�����������clearerr(fp)��ʹ����һ��������ʹ��ferror�������м�顣
	}
	fclose(fp1);
	printf("%d",ferror(fp1));
	fclose(fp2);
}
