#include<stdio.h>
int okek(int,int);
int main( void )
{
	int sayi1,sayi2;
	
	printf("sayilari giriniz: ");
	scanf("%d %d",&sayi1,&sayi2);
	printf("okekleri= %d",okek(sayi1,sayi2));
	return 0;
}
int okek(int sayi1,int sayi2)
{
	int i,yedek;
	if(sayi1<sayi2)
	{
		yedek=sayi1;
		sayi1=sayi2;
		sayi2=yedek;
	}
	for(i=sayi1;i<=(sayi1)*(sayi2);i++)
	{
		if(i%sayi1==0 && i%sayi2==0)
		{
			return i;
			break;
		}
	}
}
