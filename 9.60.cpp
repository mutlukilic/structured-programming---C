#include<stdio.h>
int kontrol(int,int);
int main()
{
	int sayi1,sayi2;
	
	printf("Sayilari giriniz: ");
	scanf("%d %d",&sayi1,&sayi2);
	
	printf("Sonuc= %d",kontrol(sayi1,sayi2));
	return 0;
}
int kontrol(int sayi1,int sayi2)
{
	int i,top1=0,top2=0;
	
	for(i=1;i<=sayi1/2;i++)
	{
		if(sayi1%i==0)
		{
			top1+=i;
		}
	}
	for(i=1;i<=sayi2/2;i++)
	{
		if(sayi2%i==0)
		{
			top2+=i;
		}
	}
	if(top1==sayi2 && top2==sayi1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
