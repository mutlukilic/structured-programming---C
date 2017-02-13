#include<stdio.h>
int main()
{
	int bas,bitis,sayac=0,i,yedek;
	
	printf("Birinciyi giriniz : ");
	scanf("%d",&bas);
	printf("İkinciyi giriniz : ");
	scanf("%d",&bitis);
	printf("-----------------------------\n");
	if(bas>bitis)
	{
		yedek=bas;
		bas=bitis;
		bitis=yedek;
	}
	for(i=bas;i<=bitis;i++)
	{
		if(i%4==0 && i%7==0)
		{
			printf("%d,",i);
			sayac++;
		}
		else
		{
			continue;
		}
	}
	printf("\nToplam %d adet",sayac);
	return 0;
}
