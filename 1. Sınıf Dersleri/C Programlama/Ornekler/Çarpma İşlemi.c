#include <stdio.h>
#include <stdlib.h>

// ÝKÝ SAYININ ÇARPIMININ HESABI

int main() {
	
	double a, b, sonuc;
	printf ("sayi 1:");
	scanf("%lf",&a);
	printf("sayi 2:");
	scanf("%lf", &b);
	
	sonuc= a*b ;
	
	printf("sonuc = %.2lf ", sonuc);
	
	return 0;
}
