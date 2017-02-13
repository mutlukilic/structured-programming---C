#include<stdio.h>
int main()
{
	int renault=0,mazda=0,honda=0,ford=0,buyuk=0,marka;
	float top1=0,top2=0,top3=0,top4=0,buyuktop=0,tutar;
	
	
	printf("PROGRAMDAN CIKMAK ICIN MARKA OLARAK 111 GIRINIZ\n");
	while(1)
	{
		printf("Marka, tutar giriniz: ");
		scanf("%d %f",&marka,&tutar);
		if(marka==1 || marka==2 || marka==3 || marka==4 || marka==111)
		{
			if(marka==111)
			{
				printf("PROGRAM SONA ERDI\n");
				printf("OZET BILGILER\n");
				if(buyuk==renault)
				{
					printf("En cok gelen arac markasi Renault (%d kez)\n",buyuk);
				}
				if(buyuk==mazda)
				{
					printf("En cok gelen arac markasi Mazda (%d kez)\n",mazda);
				}
				if(buyuk==honda)
				{
					printf("En cok gelen arac markasi Honda (%d kez)\n",honda);
				}
				if(buyuk==ford)
				{
					printf("En cok gelen arac markasi Ford (%d kez)\n",ford);
				}
				if(buyuktop==top1)
				{
					printf("En cok satis yapilan marka Renault (%.2f TL)\n",top1);
					break;
				}
				if(buyuktop==top2)
				{
					printf("En cok satis yapilan marka Mazda (%.2f TL)\n",top2);
					break;
				}
				if(buyuktop==top3)
				{
					printf("En cok satis yapilan marka Honda (%.2f TL)\n",top3);
					break;
				}
				if(buyuktop==top4)
				{
					printf("En cok satis yapilan marka Ford (%.2f TL)\n",top4);
					break;
				}
			}
			if(marka==1)
			{
				renault++;
				top1+=tutar;
				if(renault>buyuk)
				{
					buyuk=renault;
				}
				if(top1>buyuktop)
				{
					buyuktop=top1;
				}
			}
			if(marka==2)
			{
				mazda++;
				top2+=tutar;
				if(mazda>buyuk)
				{
					buyuk=mazda;
				}
				if(top2>buyuktop)
				{
					buyuktop=top2;
				}
			}
			if(marka==3)
			{
				honda++;
				top3+=tutar;
				if(honda>buyuk)
				{
					buyuk=honda;
				}
				if(top3>buyuktop)
				{
					buyuktop=top3;
				}
			}
			if(marka==4)
			{
				ford++;
				top4+=tutar;
				if(ford>buyuk)
				{
					buyuk=ford;
				}
				if(top4>buyuktop)
				{
					buyuktop=top4;
				}
			}
			
		}
		else
		{
			printf("HATA!!!!LUTFEN DOGRU KODU GİRİNİZ!\n");
		}
	}
	return 0;
}
