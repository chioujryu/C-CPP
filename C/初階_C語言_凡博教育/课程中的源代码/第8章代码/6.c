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
		if(xm == jianzi)	printf("��Ӯ����\n");
		if(xm == baozi)		printf("ƽ��\n");
		if(xm == chui)	printf("��������\n");
	}
}







/*�¶���
void main()
{
	enum cdk {jianzi,chui,baozi};
	enum cdk diannao,you;
	srand((unsigned)time(NULL));//srand()���Ǹ�rand()�ṩ����seed

	while(1)
	{
		diannao = rand()%3;
		scanf("%d",&you);
		
		if(you - diannao == 0)
			printf("ƽ��\n");
		if(you - diannao == 1)
			printf("��Ӯ����\n");
		if(you - diannao == -1)
			printf("�����ˣ�\n");
		if(you - diannao == 2)
			printf("��������\n");
		if(you - diannao == -2)
			printf("��Ӯ�ˣ�\n");

		printf("���Գ�����%d",diannao);
	}
}*/