#include <stdio.h>
#include <stdlib.h>

//WHÝLE DÖNGÜSÜ 
//Döngü baþlatma çok önemlidir.
//Döngü koþulunu biz belirleriz
//Döngüde artýrma veya azaltmayý unutmamak gerekir.

int main(int argc, char *argv[]) {
    
/*
	int i=0;
	
	while (i<10) {
		printf("%d -Merhaba Dunya\n",i);
		
		i++;
		
	}
	printf("%d - Dongu Bitti",i);
*/
	
/*	
	char s[20];
	int k=0;
	printf("Bir seyler yazin\n");
	gets(s);
	
	while (s[k]!='\0')
	{
		printf("%c",s[k]);
		k++;
	}
*/
/*
    int kup=1;
    int sayi=1;
    
    while (kup<200)
	{
	printf("sayi:%d \n",sayi);
	printf("sayinin kupu %d\n", kup);
	++sayi;
	kup = sayi* sayi* sayi;
	}
		
*/

/*
	 int n;
     int fact= 1;
     
     printf("Faktoriyel istediginiz saiyiyi giriniz:");
     scanf("%d",&n);
     
     while(n != 0){
     	printf("%d\n",n);
     	fact = fact*n;
     	
     	
     	n--;
	 }
	 printf("%d\n",fact);
*/


//DO - WHÝLE DÖNGÜSÜ


     
  /*  int n= 0;
	    
    do{
    	
    	printf("%d\n",n);
    	
    	n--;
    	
	}
     while(n > 0);
     */




    /* 1234 rakamlarý toplamý kaç? Kaç haneli?

     int n,hane=0,toplam=0;
     
     printf("Sayiyi giriniz:");
     scanf("%d",&n);
     

     do{
     	
        toplam += (n%10);	
     	
     	hane++;
     	
     	n = n/10;
     	
     	
	 }
     while( n >0);

     printf("Rakamlari toplami %d %d haneli",toplam,hane);
     */
	
	return 0;
}
