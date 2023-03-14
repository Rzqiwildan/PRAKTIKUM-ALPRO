
#include <stdio.h>
#include <stdlib.h>

int main()   {
 int i, Angka, x = 0 ;

 //printf("\n Masukkan angka : \n") ;
 scanf("%d", &Angka) ;

for(i = 1 ; i < Angka ; i++){
   	if(Angka % i == 0){
	 	x = x + i ;
   }
  }
 if(Angka == 1){
 	printf("N = %d adalah bukan bilangan sempurna");
 }else if(Angka <= 0){
 	printf("N harus bernilai positif");
 }else{
 	if (x == Angka){
    printf("N = %d adalah bilangan sempurna", Angka);
 }else{
    printf("N = %d adalah bukan bilangan sempurna", Angka);
 }
 }
}
