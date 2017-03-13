#include<stdio.h>
int main( void )
{
	int a[5],b[5],c[10];
	int i,d,j,k=5;
	printf("a dizisinin degerlerini giriniz: ");
	for( i=0;i<5;i++ )
	{
		scanf("%d\t",&a[i]);
		c[i]=a[i];
	}
	printf("b dizisinin elemanlarýný giriniz: ");
	for(j=0;j<5;k++,j++)
	{
		scanf("%d\t",&b[j]);
		c[k]=b[j];
		
	}
	for( d=0;d<10;d++ )
	{
		printf("%d ",c[d]);
	}
	printf("\n");
	
	return 0;
}
