#include<stdio.h>
float gronsCevir(float,char);
int main( void )
{
	float miktar;
	char secim;
	printf("Miktar ve secimi giriniz: ");
	scanf("%f %c",&miktar,&secim);
	printf("%.7f\n",gronsCevir(miktar,secim));
	return 0;                                                    
}													
float gronsCevir(float miktar,char secim)
{
	float sonuc;
	if(secim=='o')
	{
		sonuc=(miktar)*28.3495231;
	}
	if(secim=='g')
	{
		sonuc=(miktar)/28,3495231;
	}
	return sonuc;
}
