#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int bahaneYaz(int);
int x=0;
int yedek;

int main()
{
	bahaneYaz( 1 );
	bahaneYaz( 6 );
	return 0;
}
int bahaneYaz(int kod)
{
	int i,baska;
	
	x=1+rand()%10;
	srand(time(NULL));
	while(x==yedek || x==kod){
		x=rand()%10;
	}
	baska=x;
	printf("Bu isin arkasinda\n");
	if(yedek!=x)
	{
		if(baska==1){
			printf("Amerika ");
		}
		if(baska==2){
			printf("Japonya ");
		}
		if(baska==3){
			printf("Ispanya ");
		}
		if(baska==4){
			printf("Fransa ");
		}
		if(baska==5){
			printf("Rusya ");
		}
		if(baska==6){
			printf("Katar ");
		}
		if(baska==7){
			printf("Almanya ");
		}
		if(baska==8){
			printf("Ingiltere ");
		}
		if(baska==9){
		printf("Cin ");
		}
		if(baska==10){
			printf("Turkiye ");
		}
		yedek=x;
	}
	printf("vardir\n");
}
