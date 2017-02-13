#include<stdio.h>
int main()
{
	int fib1=1,fib2=1,fib,i,adet;
	
	printf("Adeti giriniz: ");
	scanf("%d",&adet);
	
	printf("Girilen araliktaki fibonacci sayilari:");
	for(i=0;i<adet;i++)
	{
		fib=fib1+fib2;
		printf("%d,",fib1);
		fib1=fib2;
		fib2=fib;
	}
	return 0;
}
