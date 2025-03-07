#include <stdio.h>
#include <stdlib.h>

/*
int carp(int matris[],int size){
	
	int carpim = 1;
	int i=0;
	
	for(;i<size;i++){
		carpim *=matris[i];
	}
	return carpim;
}

int main() {
	
	int sayilar[5]={1,2,3,4,5};
	printf("%d",carp(sayilar,5));
	
	return 0;
}
 */
/*
void bastir(int matrisimiz[][4],int size){ //Çift boyutlu dizilerde ikinci boyutun boyut bilgisi tanýmlanmaya gönderilmeli
	
	int i,j;
	
	for(i=0;i<size;i++){
		for(j=0;j<4;j++){
			printf("%d ",matrisimiz[i][j]);
		}
		printf("\n");
	}	
	
	
}

int main(){
	
	int matris[3][4];
	int i,j; 
	
	printf("Matrisi Doldurunuz:");
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&matris[i][j]);
		}
	}
	bastir(matris,3);
	
	return 0;
}
*/
/*
int uzunlukdon(char name[]){

	int uzunluk;
	int i;

	for(i=0 ; name[i] !='\0';i++){
		
		uzunluk++;
	}
	
	return uzunluk;
}

int main(){
	
/*	
char isim[] = "murat";	
	
	'm'
	'u'
	'r'
	'a'
	't'
	'\0' // Bu karakter otomatik olarak konuluyor. Ve stringin nerede bittiðini anlamamýzý saðlýyo
/	
	char isim[]="mustafa";	
	printf("%d",uzunlukdon(isim));
		
	return 0;
}
*/
/*
void terscevir(char dizi[]){
	
	int i,uzunluk,gecici;
	
	uzunluk = strlen(dizi);
	
	for(i=0;i<uzunluk/2;i++){
		gecici = dizi[i];
		dizi[i] = dizi[uzunluk-1-i];
		
		dizi[uzunluk-1-i] = gecici;
	}
	
}


int main(){
	
	char text[200];
	scanf("%s",text);
	
	terscevir(text);
	printf("%s",text);
	
	return 0;
}
*/
