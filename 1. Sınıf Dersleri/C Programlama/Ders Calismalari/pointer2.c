#include <stdio.h>
#include <stdlib.h>


/*
//       CALL BY VALUE 

void degerdegistir(int a,int b){
	
	int gecici = a;
	a = b; // Buradaki a ve b degerli void i�erisinde oldugu i�in a ve b i�lem bittikten sonra ram i�erisinde kalmaz
	b = gecici;
	printf("a:%d b:%d\n",a,b);
}


int main() {
	
	int x=5,y=10; // Burada x ve y a ve b i�in say� aktar�m� sa�lar yani sadece de�er atan�r bunlar�n i�ine.
	
	degerdegistir(x,y); // Burada sadece x ve y'nin degeri gider
	
	printf("x:%d y:%d",x,y);
	
	
	return 0;
}
*/


/*
//         CALL BY REFERENCE (ADRESLE G�NDERME)

void degerdegistir(int *a,int *b){
	
	int gecici = *a;
	
	*a = *b; // a ve b ge�en dersteki gibi i�lem bittikten sonra kayboluyor.
	
	*b = gecici;
	
}



int main(){
	
	int x=5 , y=10; // Burada x ve y de�i�ken i�indeki i�lmelerde kullan�l�r.
	
	degerdegistir(&x,&y);
	
	printf("x:%d y:%d",x,y);
	
	
	return 0;
}
*/
