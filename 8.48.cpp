#include <stdio.h>

int main()
{
	int i,olcumsayisi;
	float olcum,top,geneltoplam;
	
	while(1)
	{
		top=0;
		printf("Olcum sayisi :  ");
		scanf("%d",&olcumsayisi);
		if(olcumsayisi==0)
		{
			break;
		}
		for(i=0;i<olcumsayisi;i++)
		{
			printf("Olcum giriniz:  ");
			scanf("%f",&olcum);
			top += olcum;
		}
		geneltoplam += top;
		printf("   Ara toplam  :  %.2f\n",top);
	}
	printf("Genel Toplam : %.2f",geneltoplam);
	getchar();
}
