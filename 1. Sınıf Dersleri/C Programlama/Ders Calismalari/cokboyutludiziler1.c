#include <stdio.h>
#include <stdlib.h>


int main() {
	
//Çok boyutlu dizilerde dizinin satýr ve sütun elemanlarýna göre tanýmlama yaparýz.
//   int dizi[x][y]  (x satýr ve sütun sayýsýdýr.)

   int dizi[2][2];
   
   dizi[0][0]=10;
   dizi[0][1]=20;
   dizi[1][0]=30;
   dizi[1][1]=40;
   
   printf("Matrisin 0-0 da bulunan elemani: %d\n",dizi[0][0]);
   	 printf("Matrisin 0-1 da bulunan elemani: %d\n",dizi[0][1]);
   	  printf("Matrisin 1-0 da bulunan elemani: %d\n",dizi[1][0]);
   	   printf("Matrisin 1-1 da bulunan elemani: %d",dizi[1][1]);
	return 0;
}
