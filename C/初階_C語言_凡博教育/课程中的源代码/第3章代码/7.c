/*判断某一年是否为闰年
①能被4整除，但不能被100整除，如2008
②能被400整除都是闰年，如2000 
 不使用逻辑运算符((year%4==0) && (year%100!=0)) || (year%400 ==0)

#include <stdio.h>		//有bug
void main()
{
	int year;
	printf("请输入年份：\n");
	scanf("%d",&year);
	if (year %4 == 0)
	{
		if(year %100 ==0)
			printf("不是闰年\n");
		else
			printf("是闰年\n");
		
	}
	else printf("不是闰年\n");
	if(year % 400 == 0)
	{
		printf("是闰年\n");
	}
	else printf("不是闰年\n");

}


*/
/*
#include <stdio.h>
void main()
{
	int year,leap;
	printf("请输入年份：\n");
	scanf("%d",&year);
	if(year%4 == 0)
	{
		if(year %100 == 0)	
		{
			if(year % 400 == 0)	leap = 1;
			else leap = 0;
		}
		else leap = 1	;		
	}
	else leap = 0;
	if(leap)
		printf("%d是闰年\n",year);
	else
		printf("%d不是闰年\n",year);
}
*/




/*买鞋，1~2双不打折 3~4双 9折 5~6双 8折 7~8双 7.5折 9双以上 7折
#include <stdio.h>
void main()
{
	int num,price;
	printf("请输入购买的鞋数量和单价:\n");
	scanf("%d%d",&num,&price);
	printf("鞋子的數量為:%d\n",num);
	printf("鞋子的單價為:%d\n",price);
	printf("%d\n",(int)((num+1)/2));
	switch ((int)((num+1)/2))
	{
		case 1:	printf("总价为：%d\n",num *  price); break;
		case 2: printf("总价为：%f\n",num *  price*0.9);break;
		case 3: printf("总价为：%f\n",num *  price*0.8);break;
		case 4: printf("总价为：%f\n",num *  price*0.75);break;
		default: printf("总价为：%f\n",num *  price*0.7);
	}
}
*/

