#include<stdio.h>
int obeb(int,int);
int main( void )
{
	int sayi1,sayi2;
	
	printf("sayilari giriniz: ");
	scanf("%d %d",&sayi1,&sayi2);
	printf("okekleri= %d",obeb(sayi1,sayi2));
	return 0;
}
int obeb(int sayi1,int sayi2)
{
	int i,yedek;
	if(sayi1<sayi2)
	{
		yedek=sayi1;
		sayi1=sayi2;
		sayi2=yedek;
	}
	for(i=sayi2;i>=2;i--)
	{
		if(sayi1%i==0 && sayi2%i==0)
		{
			return i;
			break;
		}
	}
}
