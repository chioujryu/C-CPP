/*编写代码实现strcpy函数，将s2中的字符全部赋值到s1中*/
#include <stdio.h>

char strcpy_new(char s1[100],char s2[100])
{
	unsigned int i;
	scanf("%s",s2);
	for(i=0;s2[i] != '\0';i++)
		s1[i] = s2[i];
	s1[i] ='\0';
	printf("%s",s1);
	return *s1;
}

void main()
{
	char a[100],b[100],c[100];
	printf("%s",strcpy_new(a,b));
}






/*无参函数
#include <stdio.h>

void start(void)
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
}

void main()
{
	printf("打印菱形**\n");
	start();
	printf("再次打印菱形**\n");
	start();
	printf("再再次打印菱形**\n");
	start();
}*/