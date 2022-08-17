/* 例如1/3    
#include <stdio.h>
void main()
{
	double a;				
	a = 1/3.0;			
	printf("a = %f\n",a);	
}
*/



/* 基本整型(int)   
#include <stdio.h>
void main()
{
	int a;					//等效于int a ;int b;  
	a = 2147483697;			//a的数值范围是-2147483648 ~ 2147483647，占4个字节
	printf("a = %d\n",a);	//代码没有顶头写,
	printf("a size = %d",sizeof(a));    //a的記憶體大小是4個byte
}
*/


/* 短整型(short int)     
#include <stdio.h>
void main()
{
	short int a;			//a的值范围是 -32768 ~ 32767，占2个字节
	a = 32866;			
	printf("a = %d\n",a);
	printf("a size = %d",sizeof(a));    //a的記憶體大小是2個byte
}
*/

/* 长整型(long int或long)  
#include <stdio.h>
void main()
{
	long  a;			//a的值范围是 -2147483648 ~ 2147483647,占4个字节
	a = 2147483647;			
	printf("a = %d\n",a);
}
 */




/* 双长整型(long long int或long long)  
#include <stdio.h>
void main()
{
	long long  a;			//a的值范围是 -9223372036854775808 ~ 9223372036854775807,占8个字节
	a = 2147483647;			
	printf("a = %d\n",a);
	printf("a size = %d",sizeof(a));    //a的記憶體大小是8個byte
}
 */


/* 基本整型(int)   
#include <stdio.h>
void main()
{
	unsigned int a;					//等效于int a ;int b;  
	a = -5;			//a的数值范围是-2147483648 ~ 2147483647，占4个字节
	printf("a = %u\n",a);	//代码没有顶头写,
}
*/



/* 字符型数据(char)   
#include <stdio.h>
void main()
{
	char a ;					//char定义字符变量，占1个字节
	a = 'z';					//
	printf("a = %d\n",a);	//  %c  %d  
}
*/




/* 浮点型数据(float)  
#include <stdio.h>
void main()
{
	float a;					//分配4个字节，6位有效数字，数值范围：-3.4e-38 ~ 3.4e38 
	a = 3.40e37f;				//出现警告，在末尾加上f,由于系统默认使用双精度
	printf("a = %f\n",a);		//
	printf("a size = %d",sizeof(a));
}
 */


/* 浮点型数据(double)   
#include <stdio.h>
void main()
{
	double a;					//分配8个字节，15位有效数字，数值范围：-1.7e-308 ~ 1.7e308
	a = 1.7e308;				
	printf("a = %f\n",a);	
	printf("a size = %d",sizeof(a));
}
*/
