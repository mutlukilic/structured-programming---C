#include<stdio.h>
int main()
{
	float Kbugun=10000,Tbugun=10000,Kyarin,Tyarin;
	int i;
	
	for(i=1;i<=100;i++)
	{
		printf("%d. gunun sonunda tavsan sayisi ve kurt sayisi %.1f - %.1f\n",i,Tbugun,Kbugun);
		Tyarin=(1+0.01)*Tbugun-(0.00001*Tbugun*Kbugun);
		Kyarin=(1-0.005)*Kbugun+(0.00001)*(0.01)*Tbugun*Kbugun;
		Tbugun=Tyarin;
		Kbugun=Kyarin;
	}
	return 0;
}
