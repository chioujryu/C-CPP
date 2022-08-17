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
		printf("%d",ferror(fp1));		//检查fread函数调用是否有错误。
		if(ferror(fp1)) clearerr(fp1);	//当ferror检查到读写函数出现错误，立即调用clearerr(fp)，使得下一轮能正常使用ferror函数进行检查。
	}
	fclose(fp1);
	printf("%d",ferror(fp1));
	fclose(fp2);
}
