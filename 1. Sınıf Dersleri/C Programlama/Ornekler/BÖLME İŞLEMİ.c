#include <stdio.h>
#include <stdlib.h>

// B�LME ��LEM� 

int main(int argc, char *argv[]) {
	
	int bolunen, bolen, bolum, kalan;
    printf("Bolunen: ");
    scanf("%d", &bolunen);
    printf("Bolen: ");
    scanf("%d", &bolen);
 
    bolum = bolunen / bolen;

    kalan = bolunen % bolen;
 
    printf("Bolum = %d\n", bolum);
    printf("Kalan = %d", kalan);
	
	return 0;
}
