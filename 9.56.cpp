#include<stdio.h>
#include<math.h>
float kenar3(float,float,float);
int main()
{
	float kenar1,kenar2,aci;
	
	printf("Kenar uzunluklarini ve aralarindaki aciyi giriniz:");
	scanf("%f %f %f",&kenar1,&kenar2,&aci);
	printf("Ucuncu kenar uzunlugu= %.1f",kenar3(kenar1,kenar2,aci));
	return 0;
}
float kenar3(float kenar1,float kenar2,float aci)
{
	float x;
	x=pow(kenar1,2)+pow(kenar2,2)-(2*(kenar1)*(kenar2)*cos(aci*M_PI/180));
	return sqrt(x);
}
