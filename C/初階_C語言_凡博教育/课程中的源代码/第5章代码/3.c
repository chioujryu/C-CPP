/*�� �� �� ��
#include <stdio.h>
void main()
{
	int i;
	char  b[]={'g','o','o','d',' ','t','i','m','e','.'};
//	int  c[10] ={'g','o','o','d',' ','t','i','m','e','.'};	//���˷ѿռ�
	for(i=0;i<10;++i)
	{
		printf("%5c",b[i]);
	}

}*/


/*�������ͼ
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
//	for(i=0;i<5;++i)	//����1
//	{
//		printf("%c",a[i]);
//	}
//	printf("\n");
//	printf("%s\n",a);		//����2 ��a[1]����
//	scanf("%s",b);
//	printf("%s",b);
	scanf("%s%s%s",b,c,d);
	printf("%s\n",b);		
	printf("%s\n",c);	//  %o�������c����ʼ��ַ
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
//	puts(a);		//puts���ʱ���ַ���������־\0ת��Ϊ\n; 
//	puts(a);
//	char b[20];
//	gets(b);
//	printf("%s",b);
//	char c[]="I Love ", d[]="China";
//	printf("%s",strcat(c,d));
//	strcpy(c,"iiiii");
//	printf("%s\n",c);
//	c = "china";		//c[0] ='c'���ֿ��ԡ�
//	printf("%s",c);
//	strncpy(c,d,3);
//	printf("%s",c);

	char e[] ="learning",f[]="learninh";		
//	if(e>f)	printf("e����f\n");		//����
//	else	printf("e������f\n");
//	if(strcmp(e,f)>0)	printf("e���ڵ���f\n");		//��ȷ
//	else	printf("e������f\n");

//	printf("%d",strlen(e));	
	
	char g[]="LEARING";
//	printf("%s",strlwr(g));
	printf("%s",strupr(e));
}*/



/*
����һ���ַ���ͳ�������ж��ٸ����ʣ�����֮��ʹ�ÿո�ֿ�

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
	printf("����%s�ĸ���%d\n",danci,num+1);
}
*/




/*��д����ʵ��strcpy��������s2�е��ַ�ȫ����ֵ��s1��*/
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