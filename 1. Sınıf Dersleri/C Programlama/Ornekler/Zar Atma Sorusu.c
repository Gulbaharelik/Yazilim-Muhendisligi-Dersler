#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	printf("Bir zar atan ve zar 6 gelmeden once kac kez atildigini ekrana yazdiran C programi\n\n");
	
	// De�er tan�mlamalar� yap�ld�
	int Sayi;
	int g=0; // Burada g deneme say�s�n� belirtir
	srand(time(NULL)); //srand de�eri burada her seferinde farkl� se�imler yapmam�z� sa�l�yor. time fonksiyonu ise aradaki saniyeyi d�nd�r�r.
	
	//Burada do i�erisinden gerekli i�lem yazd�rmalar�n� yapt�k.
	do
	{	
        g++; //Buradaki art�rma i�lemi deneme de�erinin ne kadar art���n� belli eder.
		Sayi=rand()%6+1; //rand hangi aral�kta say�lar�n �retece�ini s�yl�yo.
		printf("%d. deneme %d \n",g,Sayi);	// Burada yazd�rma i�lemi yap�ld�
    }
	 while (Sayi<6); // Ne zaman d�ng�n�n bitece�ini belli eder.
	 printf("%d. denemeden sonra 6 rakami gelmistir.",g); // Burada sorunun bizden istedi�ini yazd�rd�k.
	 
	return 0;
}
