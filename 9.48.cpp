#include<stdio.h>
int ciftrakamsay(int);
int main()
{
	printf("%d",ciftrakamsay(12345));
	return 0;
}
int ciftrakamsay(int sayi)
{
	int sayac=0,i,a;
	
	for(i=0;sayi!=0;i++)
	{
		a=sayi%10;
		if(a%2==0){
			sayac++;
		}
		sayi/=10;
	}
	return sayac;
}
