#include<stdio.h>
#include<math.h>
float toplamMesafe(float hiz,int alfa,float san);
int main()
{
	float hiz,san,m;int alfa;
	
	printf("Ilk hizi giriniz (m/s) : ");scanf("%f",&hiz);
	printf("Aciyi giriniz (derece) : ");scanf("%d",&alfa);
	printf("Havada kalma suresini giriniz (s) : ");scanf("%f",&san);
	
	m=toplamMesafe(hiz,alfa,san);
	printf("-------------------\n");
	printf("Cisim %.2f m uzaga duser",m);
	return 0;
}
float toplamMesafe(float hiz,int alfa,float san)
{
	float mesafe;
	
	mesafe=hiz*(cos(alfa*M_PI/180))*san;
	
	return mesafe;
}
