#include <stdio.h>
#include <math.h>

int isHappyNumber(int);

int main()
{
	printf("%d\n",isHappyNumber(49));
	printf("%d\n",isHappyNumber(89));
	return 0;
}
int isHappyNumber(int sayi)
{
	int kareleri=sayi;
	int basamak,i,x;
	
	while(1)
	{
		basamak=0;
		while(kareleri!=0)
		{
			basamak++;
			kareleri /= 10;
		}
		for(i=0;i<basamak;i++)
		{
			x = sayi%10;
			kareleri += pow(x,2);
			sayi /= 10;
		}
		if(kareleri < 10)
		{
			if(kareleri==1){
				return 1;
				break;
			}
			else{
				return 0;
				break;
			}
		}
		else
		{
			sayi=kareleri;
		}
	}
}
