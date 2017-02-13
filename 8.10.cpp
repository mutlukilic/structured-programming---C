#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,i;
	float tekler=0,ciftler=0;
	
	printf("n ve x degerlerini giriniz: ");
	scanf("%d %d",&n,&x);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			ciftler=ciftler+(float)(pow(x,i)/i);
		}
		else
		{
			tekler=tekler-(float)(pow(x,i)/i);
		}
	}
	printf("Sonuc = %.2f",(float)1+tekler+ciftler);
	
	return 0;
}
