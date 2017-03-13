#include<stdio.h>
int main( void )
{
	float c[12],a[6],b[6];
	int i=0,k=0,p=0,j=1,x;
	
	printf("c dizisinin elemanlarini giriniz:\n");
	for(x=0;x<12;x++)
	{
		scanf("%f",&c[x]);
	}
	printf("\n a dizisinin elemanlari: ");
	for(k=0;k<6;i=i+2,k++)
	{
		a[k]=c[i];
		printf("%.1f ",a[k]);
	}
	
	printf("\n b dizisinin elemanlari: ");
	for(p=0;p<6;j=j+2,p++)
	{
		b[p]=c[j];
		printf("%.1f ",b[p]);
	}
	printf("\n");
	
	return 0;
	
}
