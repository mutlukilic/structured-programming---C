#include <stdio.h>
void yaz(int [],int);

int main()
{
	int i,j,sayac;
	int indis=0,indis2=0;
	int yanik[25];
	int sonuk[25];
	
	for(i=1;i<51;i++)
	{
		sayac=0;
		for(j=1;j<11;j++)
		{
			if(i%j==0){
				sayac++;
			}
		}
		if(sayac%2==0){
			sonuk[indis++]=i;
		}
		else{
			yanik[indis2++]=i;
		}
	}
	printf("Yanik lambalar\n");
	yaz(yanik,indis2);
	printf("\nSonuk lambalar\n");
	yaz(sonuk,indis);
	getchar();
}
void yaz(int dizi[],int el)
{
	for(int i=0;i<el;i++){
		printf("%d ",dizi[i]);
	}
}
