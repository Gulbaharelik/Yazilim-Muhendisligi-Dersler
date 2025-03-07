#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	printf("10 saat boyunca bir hava balonunun yuksekligini yazdiran C programini\n\n");
    
    // Burada de�er tan�mlamalar�n� yapt�k
    int t; //t burada saatin ka� oldu�unu tan�mlar
	float yukseklik;
	
	// Burada d�ng� i�erisinde saatin art�� aral�klar�n� tan�mlar ve d�ng�ye sokar�z
	for(t=1;t<=10;t++)
	{
	   // �stenen degerin nas�l hesapland���n� belirttik
       yukseklik = pow(t,4)*0.12+pow(t,3)*12-pow(t,2)*380+t*4100+220; // pow burada �s hesaplamas� yapmak i�in kullan�l�yor 
	   printf("%d. saatteki yukseklik = %.2f\n",t,yukseklik); // saat ba�� y�kseklik i�in yazd�rma i�lemi yapt�k
	}
	
	return 0;
}
