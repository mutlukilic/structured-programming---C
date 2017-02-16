#include<stdio.h>
float ihtimal(int);
int main()
{
	printf("%.2f\n",ihtimal(20));
	printf("%.2f\n",ihtimal(37));
	return 0;
}
float ihtimal(int kisisayisi)
{
	float carpim=1,olasilik,i;
	
	for(i=365;i>=367-kisisayisi;i--)
	{
		carpim=carpim*(float)(i/366);
	}
	olasilik=1-carpim;
	
	return olasilik;
}
