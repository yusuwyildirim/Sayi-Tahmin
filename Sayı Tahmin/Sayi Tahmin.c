#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

int rastgele;
int sayi;

srand(time(NULL)); 
rastgele=rand()%100;


printf("                                                  ****TAHMIN GAME****\n\n\n");

printf("Lutfen 1 ile 100 arasinda bir sayi giriniz:\n");
scanf("%d",&sayi);


while(sayi!=rastgele){


if(sayi!=rastgele){
	
	
	if(sayi<rastgele){
		
		printf("Girdiginiz sayi degeri kucuktur.\nLutfen daha buyuk bir sayi tahmin ediniz.\n");
		scanf("%d",&sayi);
		
	}
	
	if(sayi>rastgele){
		
		printf("Girdiginiz sayi degeri buyuktur.\nLutfen daha kucuk bir sayi tahmin ediniz.\n");
		scanf("%d",&sayi);
		
		if(sayi==rastgele){
			
			printf("DOGRU BILDINIZ.!!!\n\n\n");
			
		}
		
		
	}
	
	
}
}
return 0;
getch();

}
