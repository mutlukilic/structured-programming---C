#include<stdio.h>
int main()
{
	int a=0,b=0,c=0,f=0,secim;
	float ortalama;
	char harf;
	
	while(1)
	{
		printf("Harf notunu giriniz (Cikis icin H yada h giriniz):");
		scanf("%s",&harf);
		if(harf=='H' || harf=='h')
		{
			break;
		}
		if(harf=='A')
		{
			a++;
		}
		if(harf=='B')
		{
			b++;
		}
		if(harf=='C')
		{
			c++;
		}
		if(harf=='F')
		{
			f++;
		}
		if(harf=='A' || 'B' || 'C' || 'F')
		{
			continue;
		}
		else
		{
			printf("Gecersiz not!!!!\n");
		}
	}
	ortalama=(float)(a*4+b*3+c*2)/(a+b+c+f);
	printf("Girilen A larin sayisi:   %d\n",a);
	printf("Girilen B lerin sayisi:   %d\n",b);
	printf("Girilen C lerin sayisi:   %d\n",b);
	printf("Girilen F lerin sayisi:   %d\n",f);
	printf("Toplam harf sayisi    :   %d\n",a+b+c+f);
	printf("Ortalama              :   %.1f\n",ortalama);
	
	return 0;
	
}
