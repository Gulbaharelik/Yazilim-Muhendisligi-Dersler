#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// B�R SAYININ BA�KA B�R SAYIYA 3 DE���KEN KULLANILARAK D�N��T�R�LMES�

int main(int argc, char *argv[]) {
	
	double ilkSayi , ikinciSayi ,temp;
	printf("sayi 1: ");
	scanf("%lf",&ilkSayi);
	printf("sayi 2 :");
	scanf("%lf", &ikinciSayi);
	
	temp = ilkSayi;
	ilkSayi = ikinciSayi ;
	
	ikinciSayi = temp;
	
	printf("\n Degisiklikten sonra ilkSayi= %.2lf", ilkSayi);
	printf("\n Degisiklikten sonra ikinciSayi = %.2lf", ikinciSayi);
	
	return 0;
}
