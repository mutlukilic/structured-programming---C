#include<stdio.h>
int main()
{
	int n;
	double carpim=1,olasilik,i;
	
	printf("Odadaki kisi sayisini giriniz: ");
	scanf("%d",&n);
	
	for(i=365;i>=367-n;i--)
	{
		carpim=carpim*(double)(i/366);
	}
	olasilik=1-carpim;
	printf("%lf",olasilik);
	
	return 0;
}
