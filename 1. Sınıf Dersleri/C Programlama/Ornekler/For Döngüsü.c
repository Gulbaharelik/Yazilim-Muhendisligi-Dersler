#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h> //true ifadesinde hata vermemesi i�in bunu yazd�k.

// FOR D�NG�S�

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
 
 her bir say� kendinden �nceki say� ile toplanarak bir sonraki say� olarak yaz�l�r.

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
//		BREAK DEY�M� KULLANIMI

   
    int toplam = 0;
    
    int i;

    int sayi;

    for(i=0;true;i++) {
   	
   	printf("Sayiyi Giriniz: (Cikmak i�in -1 basin)");
    scanf("%d",&sayi);  	
  
    if(sayi == -1){
    	break;
	} 	
	
	toplam += sayi;
    }
    printf("%d",toplam);
    */

/*
// CONT�NUE DEY�M� TANIMI : E�er bir d�ng�de continue deyimi varsa bu deyimden sonraki k�s�mlar� yapmaz ve en ba�a d�ner.


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
