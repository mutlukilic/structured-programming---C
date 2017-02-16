#include<stdio.h>
#include<math.h>
int ucgenmi(float,float,float);
int main()
{
	float a,b,c;
	
	printf("Kenar uzunluklari sirasiyla giriniz: ");
	scanf("%f %f %f",&a,&b,&c);
	printf("Sonuc= %d",ucgenmi(a,b,c));
	return 0;
}
int ucgenmi(float kenar1,float kenar2,float kenar3)
{
	float x;
	x=kenar1-kenar2;
	if(kenar1+kenar2>kenar3 && fabs(x)<kenar3)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
