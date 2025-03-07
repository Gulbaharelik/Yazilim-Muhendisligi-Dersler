#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	printf("10 saat boyunca bir hava balonunun yuksekligini yazdiran C programini\n\n");
    
    // Burada deðer tanýmlamalarýný yaptýk
    int t; //t burada saatin kaç olduðunu tanýmlar
	float yukseklik;
	
	// Burada döngü içerisinde saatin artýþ aralýklarýný tanýmlar ve döngüye sokarýz
	for(t=1;t<=10;t++)
	{
	   // Ýstenen degerin nasýl hesaplandýðýný belirttik
       yukseklik = pow(t,4)*0.12+pow(t,3)*12-pow(t,2)*380+t*4100+220; // pow burada üs hesaplamasý yapmak için kullanýlýyor 
	   printf("%d. saatteki yukseklik = %.2f\n",t,yukseklik); // saat baþý yükseklik için yazdýrma iþlemi yaptýk
	}
	
	return 0;
}
