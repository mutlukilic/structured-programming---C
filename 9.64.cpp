#include <stdio.h>
#include <math.h>

int isSuperPrime(int);

int main()
{
	printf("%d\n", isSuperPrime( 19001 ));
	printf("%d\n", isSuperPrime( 13 ));
	return 0;
}
int isSuperPrime(int sayi)
{
	int x,top=0;
	int m,i;
	
	while(1)
	{
		while(sayi!=0)
		{
			x = sayi%10;
			top += x;
			sayi /= 10;
		}
		m=1;
		for(i=2;i<=sqrt(top);i++)
		{
			if(top%i==0){
				m=0;
				return 0;
				break;
			}
				
		}
		if(m==1)
		{
			if(top < 10){
				return 1;
				break;
			}
			sayi=top;
			top=0;
		}
	}
}
