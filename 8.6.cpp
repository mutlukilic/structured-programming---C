#include<stdio.h>
int main()
{
	int bas,bitis,sayac=0,i;
	
	printf("Baslangic yilini giriniz : ");
	scanf("%d",&bas);
	printf("Bitis yilini giriniz : ");
	scanf("%d",&bitis);
	printf("-------------------------------\n");
	for(i=bas;i<=bitis;i++)
	{
		if(i%4==0)
		{
			printf("%d,",i);
			sayac++;
		}
	}
	printf("\nToplam %d adet",sayac);
	return 0;
}
