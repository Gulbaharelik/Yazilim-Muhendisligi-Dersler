#include <stdio.h>
#include <stdlib.h>

//SWÝTCH - CASE KULLANIMI 

int main(){
	
	int islem;
	int bakiye=1000;
	int tutar;
	
	printf("islemler\n1:para cekme\n2:para yatirma\n3:Havale yapma\n4:Bakiye sorgulama\n5:Kart iade\n\n\n");
	
	printf("Islemi seciniz:");
	scanf("%d",&islem);
	
	switch(islem){
		
		case 1:
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Cekilevek tutar:");
			scanf("%d",&tutar);
			if(tutar > bakiye){
				printf("Bakiye Yetersiz\n");
			}
			bakiye -= tutar;
			printf("Bakiyeniz :%d",bakiye);
			
			
		case 2:	
		    printf("Bakiyeniz: %d\n",bakiye);
			printf("Yatirilacak tutar:");
			scanf("%d",&tutar);
		
			bakiye += tutar;
			printf("Bakiyeniz :%d",bakiye);
			break;
						
		case 3:
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Havale Yapilacak tutar:");
			scanf("%d",&tutar);
			if(tutar > bakiye){
				printf("Bakiye Yetersiz\n");
			}
			bakiye -= tutar;
			printf("Bakiyeniz :%d",bakiye);
			
			
		case 4:
		     printf("Bakiyeniz %d",bakiye);
		    
		     
		case 5:	
		     printf("Kart iade edildi.\n");
		    
		     
		default:
			printf("Bilinmeyen islem");
			break;
	}
/*
	int saat;
	printf("0-4 araliginda ise 1 giriniz\n");
	printf("5-8 araliginda ise 2 giriniz\n");
	printf("9-12 araliginda ise 3 giriniz\n");
	printf("13 den fazla ise 4 giriniz\n");
	printf("Kaldiniz saat araligini giriniz:");
	scanf("%d",&saat);
	switch(saat){
		case 1:
			printf("10 TL odeyiniz");
			break;
		case 2:
			printf("12 TL odeyiniz");
			break;
		case 3:
			printf("15 TL odeyiniz");
			break;
		case 4:
			printf("20 TL odeyiniz");
			break;
						
	}
*/	
	return 0;
}
	
