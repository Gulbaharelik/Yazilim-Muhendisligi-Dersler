#include <stdio.h>
#include <string.h>

int benimstrlen(char *p){
	int uzunluk = 0;
	int i = 0;
	
	for(;p[i] !='\0';i++){
		uzunluk++;
	}
	
	return uzunluk;
}


int main() {
	
	char yazi[5] = "tura";

	printf("%d",benimstrlen(yazi)); //strlen verilen karakterin ned kadar uzunlukta oldu�unu bize s�yler.
	


/*	
	char *p = yazi;

	// Burada sonucun "ura" ��kmas�n�n nedeni p+1 oldu�undan ikinci karakterden ba�lar.
	printf("%s",p+1); // %s burada ba�lang�� adrsinden ba�layarak a�a�� do�ru giderek yaz�lanlar� bast�r�yo. NULL karakteri g�r�nce i�lemi bitiriyo. 
*/		
	return 0;
}
