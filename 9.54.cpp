#include<stdio.h>
#include<math.h>
float alan(int,float);
int main()
{
	int boy,kilo;
	
	printf("Boyunuzu giriniz (cm)  :  ");
	scanf("%d",&boy);
	printf("Kilonuzu giriniz (kg)  :  ");
	scanf("%f",&kilo);
	printf("--------------------------------\n");
	printf("Bden alani = %.2f",alan(boy,kilo));
	return 0;
}
float alan(int h,float w)
{
	int bsa;
	
	bsa=pow(h,0.425)*pow(w,0.425)*71.84*pow(10,-4);
	return bsa;
}
