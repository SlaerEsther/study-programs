#include<stdio.h>

int main()
{
	float r1,r2,r;

	printf("输入要并联的两个电阻值： ");
	scanf("%f%f",&r1,&r2);
	r = 1.0 / (1.0/r1 + 1.0/r2);
	printf("并联后的电阻值为： %f\n",r);

	return 0;
}