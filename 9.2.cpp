#include<stdio.h>
#include<math.h>
float toplamSure(float hiz,int alfa);
int main()
{
	float hiz,san; int alfa;
	
	printf("Ilk hizi giriniz (m/s) : "); scanf("%f",&hiz);
	printf("Aciyi giriniz (derece) : " );scanf("%d",&alfa);
	printf("------------------\n");
	san=toplamSure(hiz,alfa);
	printf("Cisim %.3f saniye sonra yere duser",san);
	return 0;
}
float toplamSure(float hiz,int alfa)
{
	float san;
	
	san=2*((hiz)*(sin(alfa*M_PI/180))/9.80);
	
	return san;
}
