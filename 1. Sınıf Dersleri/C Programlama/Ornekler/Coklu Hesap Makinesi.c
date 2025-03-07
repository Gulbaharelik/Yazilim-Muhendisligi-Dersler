#include <stdio.h>
#include <math.h>


// Tamsayýlarda toplama iþlemi
int tamsayitopla(int k,int m){
	return k+m;
}
// Tamsayýlarda çarpma iþlemi
int tamsayicarpma(int k,int m){
	return k*m;
}
// Karmaiþýk sayýlarda toplama iþlemi
int karmasiksayitopla(){
 	int c1,c2;
 	int d1,d2;
	return (c1+c2),(d1+d2);	
}
// Karmaþýk sayýlarda çarpma iþlemi
int karmasiksayicarpma(){
	int c1,c2;
	int d1,d2;
	return (c1*c2)+(-1)*(d1*d2),(c1*d1)+(c2*d2);
}
// Dikdörtgenin çevre hesabý
int Dikdorgencevre(int a,int b){
	return 2*(a+b);
}
// Dikdörtgenin alan hesabý
int Dikdortgenalan(int a,int b){
	return a*b;
}
// Üçgenin çevre hesabý
int Ucgencevre(int a,int b,int c){
	return a+b+c;
}
// Üçgenin alan hesabý
float Ucgenalan(int a,int b,int c){
	float s=(float)(a+b+c)/2; // Burada float yazmamýzýn nedeni int ile tanýmlanan deðerlerin float olarak alýnamamasýdýr.
	return sqrt(s*(s-a)*(s-b)*(s-c)); // Burada kullanýlan sqrt fonksiyonun kök almaya yarar.
}
// Dairenin çevre hesabý
float Dairecevre(int r){
	float pi =3.14;
	return 2*pi*r;
}
// Dairenin alan hesabý
float Dairealan(int r){
	float pi =3.14;
	return pi*r*r;
}
// Kelvin'den Fahrenheit'e dönüþüm
float kelvindenfahrene(int K){
	return (K*9/5)-459.67;
}
// Fahrenheit'ten Kelvin'e dönüþüm
float fahrendenkelvine(int F){
	return (F+459.67)*5/9;
}
//
void StandartHesapMakinesi(){
		int secim;
		printf("Numara Turleri\n");
		printf("1.Tamsayi\n");
		printf("2.Karmasik sayilar\n\n");
		printf("Numara turunu secin:");
		scanf("%d",&secim);
		printf("\n");
}
//
void AlanCevreHesaplayici(){
		int secim;
		printf("Sekil Turleri\n");
		printf("1.Dikdortgen\n");
		printf("2.Ucgen\n");
		printf("3.Daire\n\n");
		printf("Bir sekil turu seciniz:");
		scanf("%d",&secim);
		printf("\n");
}
//
void SicaklikHesaplayici(){
		int secim;	
	 	printf("Hesaplama turunu secin: \n");
        printf("1.Kelvin'den Fahrenheit'e\n");
   		printf("2.Fahrenheit'ten Kelvin'e\n");
   		scanf("%d",&secim);
   		printf("\n");
}

int main(){

	printf("COKLU HESAP MAKINESI\n\n");
	
	int secim; 		// secim burada switch-case için gereklidir ve her bir seçim olayýnda kullanýlýr.
	int k,m; 		// Tamsayýlarda iþlemlerde kullanýlýrlar.
	int a,b,c; 		// Dikdörtgen ve üçgen hesaplamalarýnda tanýmlýlardýr.
	int r;			// Daire hesaplamalarý için tanýmlanmýþtýr.
	int c1,c2;		// Karmaþýk sayýlarda birinci sayý deðerleri için tanýmlanmýþtýr.
 	int d1,d2;		// Karmaþýk sayýlarda ikinci sayý deðeri için tanýmlanmýþtýr.
	int K,F;		// Sýcaklýk hesaplamalarý için tanýnmlanan deðerlerdir.
	

	printf("Hesap Makinesi Turleri\n\n");
	printf("1.Standart Hesap Makinesi\n");
	printf("2.Alan Cevre Hesaplayici\n");
	printf("3.Sicaklik Hesaplayici\n\n");
	printf("Hesap makinesi secin:");
	scanf("%d",&secim);
	printf("\n");	
	// Burada hesap makinesi türlerinden birini seçmek için switch-case açtýk
	switch(secim)
	{
		// Standart hesap makinesi iþlemleri bu case'in içerisinde yapýlýr.
		case 1:
			StandartHesapMakinesi();
			// Burada numara türlerinden birini seçmek için switch-case açtýk
	        switch(secim)
	        {
	        	// Tamsayý iþlemleri bu case'in içerisinde yapýlýr.
	        	case 1:
	        		printf("Hesaplama Turleri\n");
	        		printf("1.Toplama\n");
	        		printf("2.Carpma\n\n");
	        		printf("Hesapmala turunu secin:");
	        		scanf("%d",&secim);
	        		printf("\n");
	        		// Burada hesaplama türlerinden birini seçmek için switch-case kullandýk
	        		switch(secim)
	        		{
	        			// Tamsayýlarda toplama iþlemi bu case içerisinde yapýlýr.
	        			case 1:
	        				printf("1.sayiyi giriniz:");
	                        scanf("%d",&k);
	                        printf("2.sayiyi giriniz:");
	                        scanf("%d",&m);
	                        printf("\n");	                       
							tamsayitopla(k,m);
	                        printf("Sonuc: %d\n",tamsayitopla(k,m));
	                        break;
	                    // Tamsayýlarda çarpma iþlemi bu case içerisinde yapýlýr.    
	                    case 2:
						    printf("1.sayiyi giriniz:");
	                        scanf("%d",&k);
	                        printf("2.sayiyi giriniz:");
	                        scanf("%d",&m);
							tamsayicarpma(k,m);
							printf("Sonuc: %d\n",tamsayicarpma(k,m));
							break;
				        // Verilen seçim deðerlerinde farklý bir deðer girildiðinde yapýlmasý gereken iþler yazýlýr.
						default:
							printf("Lutfen gecerli bir deger giriniz.\n"); 
					}
	                break;
				// Karmaþýk sayý iþlemleri bu case içerisinde yapýlýr.	 
	            case 2:
				    printf("Hesaplama Turleri\n");
	        		printf("1.Toplama\n");
	        		printf("2.Carpma\n\n");
	        		printf("Hesapmala turunu secin:");
	        		scanf("%d",&secim);
	        		printf("\n");
	        		// Burada hesaplama türlerinden birini seçtirmek için switch-case açtýk
	        		switch(secim)
	        		{
	        			// Karmaþýk sayýlarda toplama iþlemi yapýlýr.
	        			case 1:
	        				printf("1.Karmasik sayiyinin gercek kismini giriniz:");
	        				scanf("%d",&c1);
	        				printf("1.Karmasik sayinin sanal kismini giriniz:");
	        				scanf("%d",&d1);
	        				printf("2.Karmasik sayiyinin gercek kismini giriniz:");
	        				scanf("%d",&c2);
	        				printf("2.Karmasik sayinin sanal kismini giriniz:");
	        				scanf("%d",&d2);
	        				karmasiksayitopla();
	        				printf(" Sayilarin Toplami: %d + %di\n",(c1+c2),(d1+d2));
	        				break;
	        			// Karmaþýk sayýlarda çarpma iþlemi yapýlýr	
	        			case 2:
	        				printf("1.Karmasik sayiyinin gercek kismini giriniz:");
	        				scanf("%d",&c1);
	        				printf("1.Karmasik sayinin sanal kismini giriniz:");
	        				scanf("%d",&d1);
	        				printf("2.Karmasik sayiyinin gercek kismini giriniz:");
	        				scanf("%d",&c2);
	        				printf("2.Karmasik sayinin sanal kismini giriniz:");
	        				scanf("%d",&d2);
	        				karmasiksayicarpma();
	        				printf("Sayilarin Carpimi: %d + %di\n",(c1*c2)+(-1)*(d1*d2),(c1*d1)+(c2*d2));
	        				break;
	        			// Verilen seçim deðerlerinde farklý bir deðer girildiðinde yapýlmasý gereken iþler yazýlýr.	
	        			default:
							printf("Lutfen gecerli bir deger giriniz.\n");
							break;
					}
					break;
				// Verilen seçim deðerlerinde farklý bir deðer girildiðinde yapýlmasý gereken iþler yazýlýr.	
				default:
					printf("Lutfen gecerli bir deger giriniz.\n");
					break;
			}
			break;
		// Alan-Çevre Hesaplayýcýnýn iþlermleri bu case'in içerisinde yapýlýr.	
		case 2:
			AlanCevreHesaplayici();
			// Burada þekil türlerinden birini seçmek için switch-case kullandýk 
			switch(secim)
			{
				// Dikdörtgen ile ilgili hesaplama iþlemleri bu case içerisinde yapýlýr.
				case 1:
					printf("Dikdortgenin uzun kenarini giriniz:");
					scanf("%d",&a);
					printf("Dikdortgenin kisa kenarini giriniz:");
					scanf("%d",&b);
					Dikdorgencevre(a,b);
					printf("Dikdortenin Cevresi: %d\n",Dikdorgencevre(a,b));
					Dikdortgenalan(a,b);
					printf("Dikdortgenin Alani: %d\n",Dikdortgenalan(a,b));
					break;
				// Üçgen ile ilgili hesaplama iþlemleri bu case içerisinde yapýlýr.	
				case 2:
					printf("Ucgenin uc kenarini giriniz:\n");
					scanf("%d %d %d",&a,&b,&c);
					Ucgencevre(a,b,c);
					printf("Ucgenin Cevresi: %d\n",Ucgencevre(a,b,c));
					Ucgenalan(a,b,c);
					printf("Ucgenin Alani: %.2f\n",Ucgenalan(a,b,c));
					break;
				// Daire ile ilgili hesaplama deðerleri bu case içerisinde yapýlýr.	
				case 3:
					printf("Daireinin yaricapini giriniz:\n");
					scanf("%d",&r);
					Dairecevre(r);		
					printf("Daireinin Cevresi: %.2f\n",Dairecevre(r));
					Dairealan(r);
					printf("Dairenin Alani: %.2f\n",Dairealan(r));
					break;
				// Verilen seçim deðerlerinde farklý bir deðer girildiðinde yapýlmasý gereken iþler yazýlýr.	
				default:
					printf("Lutfen gecerli bir deger giriniz.\n");
					break;
			}
			break;
		// Sýcaklýk Hesaplayýcýnýn iþlemleri bu case içinde yapýlýr.	
		case 3:
			SicaklikHesaplayici();
			// Burada hesaplama türünü seçmek için switch-case açtýk.
    		switch(secim)
			{
				// Kelvinde Fahrenheit'e dönüþümde bu case'deki iþlemler kullanýlýr.
				case 1:
					printf("Kelvin degerini giriniz: ");
        			scanf("%d",&K);
					kelvindenfahrene(K);
					printf("Fahrenheit olarak degeri: %.2f\n",kelvindenfahrene(K));
					break;
				// Fahrenheit'ten Kelvin'e dönüþümde bu case'deki iþlemler kullanýlýr.	
				case 2:
					printf("Fahrenheit sicaklik degerini giriniz:");
        			scanf("%d",&F);
					fahrendenkelvine(F);
					printf("Kelvin olarak degeri: %.2f\n",fahrendenkelvine(F));
					break; 
				// Verilen seçim deðerlerinde farklý bir deðer girildiðinde yapýlmasý gereken iþler yazýlýr.	
			    default:
        			printf("Lutfen gecerli bir deger giriniz.\n");
        			break;	   			
			}
			break;
		// Verilen seçim deðerlerinde farklý bir deðer girildiðinde yapýlmasý gereken iþler yazýlýr.	
		default:
			printf("Lutfen gecerli bir deger giriniz.\n");
			break;	
	}
	
	return 0;
}
