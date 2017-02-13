#include<stdio.h>
int main( void )
{
	int i,giris,top=0;
	char secim;
	printf("cinsiyeti giriniz: ");
	scanf("%c",&secim);
	printf("kac kez girmistir: ");
	scanf("%d",&giris);
	switch( secim )
	{
		case 'd':
		case 'D':
			for(i=1;i<=giris;i++)
			{
				if(i>=5)
				{
					top=((top-i)/2)+1+top;
					printf("%d.girisinde toplamda %d muz yemis oldu\n",i,top);
				}
				if(i<=4)
				{
					top=top+i;
					printf("%d.girisinde toplamda %d muz yemis oldu\n",i,top);						
				}
			}	
			break;
		case 'e':
		case 'E':
			for(i=1;i<=giris;i++)
			{
				if(i>=5)
				{
					top=((top-i)/2)+1+top;
					
					printf("%d.girisinde toplamda %d muz yemis oldu\n",i,2*top);
				}
				if(i<=4)
				{
					top=top+i;
					printf("%d.girisinde toplamda %d muz yemis oldu\n",i,2*top);						
				}
			}	
			break;
	}
	return 0;
}
