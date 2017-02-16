#include<stdio.h>
int ortanca(int,int,int);
int main()
{
	printf("%d",ortanca(15,78,64));
	return 0;
}
int ortanca(int sayi1,int sayi2,int sayi3)
{
	
	if((sayi1>sayi2 && sayi1<sayi3) || ((sayi1<sayi2 && sayi1>sayi3)))
	{
		return sayi1;
	}
	if((sayi2>sayi1 && sayi2<sayi3) || (sayi2<sayi1 && sayi2>sayi3))
	{
		return sayi2;
	}
	if((sayi3<sayi1 && sayi3>sayi2) || (sayi3>sayi1 && sayi3<sayi2))
	{
		return sayi3;
	}
}
