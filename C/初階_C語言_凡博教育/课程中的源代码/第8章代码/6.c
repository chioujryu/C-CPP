#include<stdio.h>


/*
void main()   
{
	enum cdk {jianzi,chui,baozi,ll,uu,ii,oo};		//cdk {jianzi=1,chui=0,baozi};	
	enum cdk xm;
	xm = jianzi;
	printf("%d\n",xm);
	printf("%d\n",jianzi);
	printf("%d\n",chui);
	printf("%d\n",baozi);
	printf("%d\n",ll);
	printf("%d\n",uu);
	printf("%d\n",ii);
	
}*/

/**/
void main()
{
	enum cdk {jianzi,baozi,chui};
	enum cdk xm,diannao;
	diannao = baozi;
	while(1)
	{	scanf("%d",&xm);
		if(xm == jianzi)	printf("你赢啦！\n");
		if(xm == baozi)		printf("平局\n");
		if(xm == chui)	printf("你输啦！\n");
	}
}







/*猜丁壳
void main()
{
	enum cdk {jianzi,chui,baozi};
	enum cdk diannao,you;
	srand((unsigned)time(NULL));//srand()就是给rand()提供种子seed

	while(1)
	{
		diannao = rand()%3;
		scanf("%d",&you);
		
		if(you - diannao == 0)
			printf("平局\n");
		if(you - diannao == 1)
			printf("你赢啦！\n");
		if(you - diannao == -1)
			printf("你输了！\n");
		if(you - diannao == 2)
			printf("你输啦！\n");
		if(you - diannao == -2)
			printf("你赢了！\n");

		printf("电脑出的是%d",diannao);
	}
}*/