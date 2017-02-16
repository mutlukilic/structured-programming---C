#include<stdio.h>
float yardmetreCevir(float,char);
int main( void )
{
	float miktar;
	char secim;
	printf("Miktar ve secimi giriniz: ");
	scanf("%f %c",&miktar,&secim);
	printf("%.4f\n",yardmetreCevir(miktar,secim));
	return 0;                                                    
}													
float yardmetreCevir(float miktar,char secim)
{
	float sonuc;
	if(secim=='y')
	{
		sonuc=(miktar)*0.9144;
	}
	if(secim=='m')
	{
		sonuc=(miktar)/0.9144;
	}
	return sonuc;
}
