#include <stdio.h>
#include <stdlib.h>


int main() {
	
	/*	
	char isim[]= "Murat"; // Bellekte yukarýdan aþaðýya olacak biçimde 'M','U','R','A','T' olarak yeer tutar. 	
	
	printf("%c",isim[1]);
	*/
	/*
	char isim[20];
	
	printf("Isminizi Girin:");
	//scanf deðer girilirken boþluktan sonrasýný yazdýrmamaya yarar.
	scanf("%s",isim);  //string deðerlerini alýrken %s kullanýlýr (karakter arraylerinde)
	
	printf("Isminiz Girildi : %s",isim);
	*/
	/*
	int matris[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
	
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&matris[i][j]);
		}
		printf("\n"); // Bu satýrýn olmasýnýn nedeni yukarýda belirtilen þekilde yazrdýmak istemememiz.
	}
	
	

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",matris[i][j]);
		}
		printf("\n"); // Bu satýrýn olmasýnýn nedeni yukarýda belirtilen þekilde yazrdýmak istemememiz.
	}
	*/
	
	/* 3 5 1 3 2 4 4 4 5 5 9 8 9 7 7 
	   3*5 lik matris (3 satýrý ve 5 sütünü)
	   Matris:
	   
	   3 5 1 3 2 
	   4 4 4 5 5 
	   9 8 7 7 7
	   
	   Sonuç:
	   
	   16 17 14 15 14

	
	int matris[3][5];
	int i,j;
	int sum=0;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&matris[i][j]);
		}
		printf("\n");
	}
	
	for(j=0;j<5;j++)
	{
		for(i=0;i<3;i++)
		{
			sum += matris[i][j];
		}
		printf("%d ",sum);
		sum=0;
	}

*/	
	
	
	
	return 0;
}
