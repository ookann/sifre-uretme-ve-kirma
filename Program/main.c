#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char sifre_olustur()
{
	int i=0,j=0,rastgele=0;
	char sifre[5];
	char karakterler[] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','y','z'};
	srand(time(NULL)); //Her çalýþtýrýldýðýnda ayný rastgele deðer olmamasý için bu komut kullanýlýr.
	for ( i ; i < 5; i++ )
	{
		rastgele = rand()%34;
		sifre[i] = karakterler[rastgele];
	}
	printf("Sifre = ");	
	for ( j ; j < 5; j++ )
	{
		printf("%c",sifre[j]);
	}	
} 
int main() 
{
	sifre_olustur();
	return 0;
	getch();
}
