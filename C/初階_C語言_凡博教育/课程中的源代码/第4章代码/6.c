/* 求斐波那契数列的前40个数。特点，第1,2个数为1，从第三个数开始，该数是前面两个数之和
 例如：1,1,2,3,5,8,13,...

#include <stdio.h>
void main()
{
	int a = 1;
	int b = 1;
	int c,i;
	printf("%d\n%d\n",a,b);
	for(i = 1; i <= 38; i++)
	{
		c = a + b;
		printf("%d\n",c);
		a = b;
		b = c;	
	}
}
   */


/*	输入一个大于3的整数n，判定它是否为素数 ，不能被小于自己的数整除(除1以外)
例如：2 3 5 7 11 13 17 19 23 29....
2、判断100以内的所有数是否为素数	
#include <stdio.h>
void main()
{
	int n=2 ,i;
	while(n<=100)
	{for(i =2 ;i<n;i++)//i = 7
		if(n%i == 0)	break;
	if(i<n)	printf("%d不是素数\n",n);
	else printf("%d是素数\n",n);
	++n;
	}
}
*/


/*  */

#include <stdio.h>
#include <math.h>


float f(float x, float y, float z) {
  float a;
a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
   return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
}
float h(float x, float z) {
float y;
   for ( y = 1.0f; y >= 0.0f; y -= 0.001f)
	 if (f(x, y, z) <= 0.0f)
		 return y;
	 return 0.0f;
}

void main() {
float z,x,v,y0,ny,nx,nz,nd,d;
	for ( z = 1.5f; z > -1.5f; z -= 0.05f) {
		 for ( x = -1.5f; x < 1.5f; x += 0.025f) {
		v = f(x, 0.0f, z);
		if (v <= 0.0f) {
			y0 = h(x, z);
				ny = 0.01f;
				nx = h(x + ny, z) - y0;
				nz = h(x, z + ny) - y0;
				nd = 1.0f / sqrt(nx * nx + ny * ny + nz * nz);
				d = (nx + ny - nz) * nd * 0.5f + 0.5f;
				 putchar(".:-=+*#%@"[(int)(d * 5.0f)]);
			 }
		 else
			 putchar(' ');
			 }
		 putchar('\n');
	 }
	getchar();
}


