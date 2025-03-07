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

	printf("%d",benimstrlen(yazi)); //strlen verilen karakterin ned kadar uzunlukta olduðunu bize söyler.
	


/*	
	char *p = yazi;

	// Burada sonucun "ura" çýkmasýnýn nedeni p+1 olduðundan ikinci karakterden baþlar.
	printf("%s",p+1); // %s burada baþlangýç adrsinden baþlayarak aþaðý doðru giderek yazýlanlarý bastýrýyo. NULL karakteri görünce iþlemi bitiriyo. 
*/		
	return 0;
}
