#include <stdio.h>
#include <stdlib.h>


/*
//       CALL BY VALUE 

void degerdegistir(int a,int b){
	
	int gecici = a;
	a = b; // Buradaki a ve b degerli void içerisinde oldugu için a ve b iþlem bittikten sonra ram içerisinde kalmaz
	b = gecici;
	printf("a:%d b:%d\n",a,b);
}


int main() {
	
	int x=5,y=10; // Burada x ve y a ve b için sayý aktarýmý saðlar yani sadece deðer atanýr bunlarýn içine.
	
	degerdegistir(x,y); // Burada sadece x ve y'nin degeri gider
	
	printf("x:%d y:%d",x,y);
	
	
	return 0;
}
*/


/*
//         CALL BY REFERENCE (ADRESLE GÖNDERME)

void degerdegistir(int *a,int *b){
	
	int gecici = *a;
	
	*a = *b; // a ve b geçen dersteki gibi iþlem bittikten sonra kayboluyor.
	
	*b = gecici;
	
}



int main(){
	
	int x=5 , y=10; // Burada x ve y deðiþken içindeki iþlmelerde kullanýlýr.
	
	degerdegistir(&x,&y);
	
	printf("x:%d y:%d",x,y);
	
	
	return 0;
}
*/
