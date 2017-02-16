#include<stdio.h>
float cdenfye(int);
float fdencye(float);
int main()
{
	printf("%.2f\n",cdenfye(5));
	printf("%.2f\n",fdencye(cdenfye(5)));
	
	return 0;
}
float cdenfye(int santigrat)
{
	float f;
	
	f=((santigrat*180)/100)+32;
	return f;
}
float fdencye(float fahrenhayt)
{
	float c;
	
	c=((fahrenhayt-32)/180)*100;
	return c;
}
