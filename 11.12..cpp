#include<stdio.h>
int ilkTekrarlayan(int [],int);
int main( void )
{
	int eleman,dizi[eleman],c,i;
	printf("dizinin eleman sayisini giriniz: ");
	scanf("%d",&eleman);
	printf("dizinin elemanlarini giriniz: ");
	for(i=0;i<eleman;i++)
	{
		scanf("%d",&dizi[i]);
	}
	c=ilkTekrarlayan(dizi,eleman);
	printf("Sonuc= %d",c);
	return 0;
}
int ilkTekrarlayan(int dizi[],int eleman)
{
	int i,j,sayac;
	for(i=0;i<eleman;i++)
	{
		if(i==eleman-1)
		{
			return -1;
		}
		sayac=0;                 
		for(j=i+1;j<eleman;j++)
		{
			if(dizi[i]==dizi[j])
			{
				sayac++;
			}
		}
		if(sayac!=0)
		{
			return dizi[i];
			break;
		}
	}
}
