#include <stdio.h>
#include <stdlib.h>

/*
int max(int *a,int uzunluk){
	int maks = a[0];
	int i;
	for(i=1;i<uzunluk;i++){
		if(a[i]>maks){
			maks = a[i];
		}
	} 
	return maks;
}

int main() {

	int sayilar[5] = {3,4,42,100,1};
	
	int maks = max(sayilar,5);
	printf("Sayilar Dizisinin En Buyuk Elemani %d'dir.",maks);
	

*/
/*	
	int sayilar[5]= {1,2,3,4,5};
	
	int *p = sayilar; // &sayilar[0] 
	
	printf("%d\n",p[0]);
	printf("%d\n",p[1]);
	printf("%d\n",*(p+2));
	printf("%d\n",*(p+3));
	printf("%d\n",*(p+4));
*/
	
//	*(p+1) ----------> p[1] ----------> sayilar[1]
	
	
/*	
	printf("%u\n",p); //6487552
	printf("%u\n",p+1); //6487556 burada 4 byte artmasýnýn nedeni int deðerlerin 4 byte kadar yer almasý	
	printf("%u\n",p+2); //6487560
	printf("%u",p+3); //6487564
*/	
	return 0;
}
