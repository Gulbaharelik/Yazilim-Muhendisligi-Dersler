#include <stdio.h>
#include <stdlib.h>


int main() {
/* 
   int vize,final;
   double notu;
   float ortalama;
   
   printf("vize notunuzu girin:");
   scanf("%d",&vize);
   printf("Final notunuzu girin:");
   scanf("%d",&final);
   printf("Universite ortalamasi kac:");
   scanf("%f", &ortalama);
   
   notu = (vize* 0.4)+ (final * 0.6);
   
 /* if(notu > 60){
   
   	printf("Dersten gectiniz.");
   }
   else{
   	
   	printf("Derseten kaldiniz.");
   }
   

    if (notu >60){ //burada yanlýþ çýkarsa aþaðý iner . Doðru çýkarsa devam etmez.
    	
    	printf("Dersten gectiniz.");
	}
	
     else if ( notu >50 ){ //Eðer burasý da yanlýþ ise aþaðý iner .Deðilse daha fazla inmez
    
		printf("Dersten bute kaldiniz.\n");
		
		if (ortalama < 2.5){
		printf("Butu gecsen bile dersi seneye al, cunku ortalaman dusuk");
			
		}
		
	}
    else {
    	
    	printf( "Kaldiniz.");
	}
*/

   int vize1, vize2 ,final ;
   float okulortalama;
   float dersort;
   printf("1.vize:");
   scanf("%d", &vize1);
   printf("2.vize:");
   scanf("%d", &vize2);
   printf("Final:");
   scanf("%d", &final);
   printf("Universite ortalamanizi girin:");
   scanf("%f", &okulortalama);

   dersort = (vize1* 3/10.0 + vize2*3/10.0 + final*4/10.0);

   if(dersort >= 90){
   	
   	 printf("Harf notunuz  - AA ve Ders Ortalamniz : %f ", dersort);
   	 
   }
    else if ( dersort >= 85 && dersort <90 ){
    	printf("Harf notunuz - BA ve Ders Ortalamaniz : %f", dersort);
    	
	}
     else if ( dersort >= 80 && dersort <85 ){
    	printf("Harf notunuz - BB ve Ders Ortalamaniz : %f", dersort);
    	
    }
     else if ( dersort >= 75 && dersort <80 ){
    	printf("Harf notunuz - CB ve Ders Ortalamaniz : %f", dersort);
    	
     }
     else if ( dersort >= 70 && dersort <75 ){
    	printf("Harf notunuz - CC ve Ders Ortalamaniz : %f\n", dersort);
    	if ( okulortalama < 2.5 ){
    		printf("Dersi tekrar alman yarali olur cunku ortalaman dusuk");
		}
    	
     }
     else if ( dersort >= 65 && dersort <70 ){
    	printf("Harf notunuz - DC ve Ders Ortalamaniz : %f\n", dersort);
    	if ( okulortalama < 2.5 ){
    		printf("Dersi tekrar alman yarali olur cunku ortalaman dusuk");
    	}
    	
     }
     else if ( dersort >= 60 && dersort <65 ){
    	printf("Harf notunuz - DD ve Ders Ortalamaniz : %f\n", dersort);
    	if ( okulortalama < 2.5 ){
    		printf("Dersi tekrar alman yarali olur cunku ortalaman dusuk");
    	}
    	
     }	
     else {
     	printf("Harf notunuz - FF ve Ders ortalamaniz : %f\n", dersort);
     	printf("Dersten kaldiniz.");
	 }
	
	return 0;
} 
