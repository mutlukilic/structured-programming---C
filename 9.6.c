#include<stdio.h>
float cevirKG(float miktar);
int main()
{
	float miktar;
	
	printf("Para miktariniz nedir? (TL) : ");scanf("%f",&miktar);
	printf("Sonuc = %.5f",cevirKG(miktar));
	return 0;
}
float cevirKG(float miktar)
{
	int bir,elli,yirmibes,on;
	float toplam;
	bir=miktar/1;
	elli=(miktar-(bir))/0.50;
	yirmibes=(miktar-(elli*0.50)-bir*1)/0.25;
	on=(miktar-(elli*0.50)-(bir)-(yirmibes*0.25))/0.10;
	
	toplam=(8.2/1000)*bir+elli*(6.8/1000)+yirmibes*(4/1000)+on*(3.15/1000);
	
	return toplam;
}
