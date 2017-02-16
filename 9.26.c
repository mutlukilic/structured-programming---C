#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ertelemeMesajiYaz(int);

int main()
{
	ertelemeMesajiYaz( 1 );
	ertelemeMesajiYaz( 7 );
	return 0;
}
void ertelemeMesajiYaz(int ay)
{
	int mevsim;
	
	srand(time(NULL));
	if(ay>0 && ay<4)
	{
		mevsim=2+rand()%3;
	}
	if(ay>3 && ay<7){
		mevsim=1+rand()%4;
		while(mevsim==2){
			mevsim=1+rand()%4;
		}
	}
	if(ay>6 && ay<10){
		mevsim=1+rand()%4;
		while(mevsim==3){
			mevsim=1+rand()%4;
		}
	}
	if(ay>9 && ay<13){
		mevsim=1+rand()%3;
	}
	if(mevsim==1){
		printf("Kisin tatile gidecegiz\n");
	}
	if(mevsim==2){
		printf("Ilkbahar tatile gidecegiz\n");
	}
	if(mevsim==3){
		printf("Yazin tatile gidecegiz\n");
	}
	if(mevsim==4){
		printf("Sonbahar tatile gidecegiz\n");
	}
}
