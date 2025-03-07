#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//FAKTÖRÝYEL HESAPLAMA 
	
	int i, x=1 ,sayi;
	printf("Faktoriyeli hesaplanacak sayi:");
	scanf("%d",&sayi);
	
	for(i=1; i<=sayi; i++){
		x*=i;
	}
	printf("%d!=%d",sayi,x);
	
	return 0;
}
