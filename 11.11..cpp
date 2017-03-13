#include<stdio.h>
int rotate(int [],int,int);
int main()
{
	int i,a[10],dondurme;
	
	printf("Dizinin elemanlarini giriniz:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Dondurme miktarini giriniz  :");
	scanf("%d",&dondurme);
	printf("----------------------------------\n");
	rotate(a,dondurme,10);
	return 0;
}
int rotate(int dizi[],int dondurme,int eleman)
{
	int i,j,yedek;

	for(j=0;j<dondurme;j++)
	{
		for(i=0;i<eleman-1;i++)
		{
			yedek=dizi[i];
			dizi[i]=dizi[i+1];
			dizi[i+1]=yedek;
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d,",dizi[i]);
	}
}
