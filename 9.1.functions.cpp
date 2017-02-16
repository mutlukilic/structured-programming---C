#include<stdio.h>
#include<math.h>
double kuvvet(float m1,float m2,float R);
int main()
{
	float m1,m2,R;
	double F;
	
	printf("Cisimlerin agirligini giriniz  (kg)  :  ");
	scanf("%f %f",&m1,&m2);
	printf("Aralarindaki uzakligi giriniz  (m)   :  ");
	scanf("%f",&R);
	printf("------------------------------\n");
	F=kuvvet(m1,m2,R);
	printf("Cekim kuvvet = %.1lf Newtondur",F);
	return 0;
}
double kuvvet(float m1,float m2,float R)
{
	double G,F;
	G=6,673/pow(10,11);
	F=(float)(G*m1*m2)/(pow(R,2));
	
	return F;
}
