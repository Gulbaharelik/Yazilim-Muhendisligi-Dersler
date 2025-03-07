#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h> //true ifadesinde hata vermemesi için bunu yazdýk.

// FOR DÖNGÜSÜ

int main(int argc, char *argv[]) {
		
/*	
	int i;
	int j;
	
	for(i=0;i<3;i++){
		
		for(j=0; j < 3;j++){
			printf("i:%d j:%d\n",i,j);
		}
		
	}
*/

/* 
    int i;

    for(i=0; i<=50; i+=4)
	{
		printf("%d\n" , i);		
	}
	
*/
  
	
/*Fibonacci Serisi

1,1,2,3,5,8,13,21............ 
 
 her bir sayý kendinden önceki sayý ile toplanarak bir sonraki sayý olarak yazýlýr.

*/

/*

  int ilkSayi = 1;
  int ikinciSayi= 1;
  int i;

  printf("%d\n%d\n",ilkSayi,ikinciSayi);

  for (i = 0;i < 12 ;i++){
  	
  	int temp = ikinciSayi;
  	
  	ikinciSayi += ilkSayi;
  	
  	ilkSayi = temp;
  	
  	printf("%d\n",ikinciSayi);
  	
  }
*/



/*
//		BREAK DEYÝMÝ KULLANIMI

   
    int toplam = 0;
    
    int i;

    int sayi;

    for(i=0;true;i++) {
   	
   	printf("Sayiyi Giriniz: (Cikmak için -1 basin)");
    scanf("%d",&sayi);  	
  
    if(sayi == -1){
    	break;
	} 	
	
	toplam += sayi;
    }
    printf("%d",toplam);
    */

/*
// CONTÝNUE DEYÝMÝ TANIMI : Eðer bir döngüde continue deyimi varsa bu deyimden sonraki kýsýmlarý yapmaz ve en baþa döner.


    int toplam =0;
    
    int i= 0;
    
    while(i<=10){
    	
    	if(i % 2 == 1){
    	i++;
		continue;	
    		
		}
		toplam += i;
		i++;
		
	}
    printf("%d",toplam);
 	
*/	
	return 0;
}
