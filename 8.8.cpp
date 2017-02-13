#include<stdio.h>
int main()
{
	int adet,sayilar,neg=0,poz=0,i;
	
	printf("Kac adet sayi gireceksiniz: ");
	scanf("%d",&adet);
	printf("Sayilar (%d tane): ",adet);
	for(i=0;i<adet;i++)
	{
		scanf("%d",&sayilar);
		if(sayilar>0)
		{
			poz++;
		}
		else
		{
			neg++;
		}
	}
	printf("Girilen %d sayinin %d tanesi negatif, %d tanesi pozitiftir.",adet,neg,poz);
	
	return 0;
}
