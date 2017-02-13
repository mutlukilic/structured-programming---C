#include<stdio.h>
#include<math.h>
int main( void )
{
	int a,N,i;
	float toplamAlan=0,x;
	printf("Kenar uzunlugu ve kare sayisini giriniz: ");
	scanf("%d %d",&a,&N);
	for(i=0;i<N;i++)
	{
		x=pow(a,2)/pow(pow(2,i),2);
		toplamAlan=toplamAlan+x;
	}
	printf("\nSonuc %.2f",toplamAlan);
	return 0;
}
