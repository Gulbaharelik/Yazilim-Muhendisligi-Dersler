#include <stdio.h>
#include <stdlib.h>


int main() {
	
//�ok boyutlu dizilerde dizinin sat�r ve s�tun elemanlar�na g�re tan�mlama yapar�z.
//   int dizi[x][y]  (x sat�r ve s�tun say�s�d�r.)

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
