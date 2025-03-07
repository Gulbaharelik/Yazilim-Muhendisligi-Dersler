#include <stdio.h>

int main(){

    int sayi1,sayi2,islem,sonuc;
    
    printf("Yapmak istediginiz islem nedir? \n1. Toplama \n2. Cikarma \n3. Carpma \n4. Bolme \n Seciminiz: ");
    scanf("%d",&islem);
    
    printf("1. Sayiyi giriniz:");
    scanf("%d", &sayi1);
    
    printf("2.Sayiyi giriniz:");
    scanf("%d",&sayi2);
    
    switch (islem){
    	case 1:
    		sonuc= sayi1 + sayi2;
    		printf("%d + %d : %d ", sayi1,sayi2,sonuc);
    		break;
    	case 2:
		    sonuc= sayi1 - sayi2;
			printf("%d -%d : %d " , sayi1,sayi2,sonuc);
			break;
		case 3:
		    sonuc=sayi1*sayi2;
			printf("%d * %d : %d", sayi1,sayi2,sonuc);
			break;
		case 4:
		    sonuc=sayi1 / sayi2;
			printf("%d / %d : %lf", sayi1,sayi2,sonuc);
			break;
		default:
		   printf("Gecerli bir islem girmediniz");				
	}
	
	return 0;
}
