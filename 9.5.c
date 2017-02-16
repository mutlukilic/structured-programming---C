#include<stdio.h>
float cevirTL(float bir,float elli,float yirmibes,float on);
int main()
{
	float bir,elli,yirmibes,on,toplam;
	
	printf("Bozukluklarin agirliklarini sirasiyla kg cinsinden giriniz\n");
	printf("(Sirasiyla 1TL, 50 kurus, 25 kurus, 10 kurus) : ");
	scanf("%f %f %f %f",&bir,&elli,&yirmibes,&on);
	printf("-----------------\n");
	toplam=cevirTL(bir,elli,yirmibes,on);
	printf("Bozukluklarinin toplam ederi = %.2f TL",toplam);
}
float cevirTL(float bir,float elli,float yirmibes,float on)
{
	float toplam;
	
	toplam=(bir*1000)/8.2+((elli*1000)/6.8)/2+((yirmibes*1000)/4)/4+((on*1000)/3.15)/10;
	
	return toplam;
}   
