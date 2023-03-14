
#include <stdio.h>
#include <stdlib.h>


int main(){

	int bil, x;

	//printf("\nMasukkan sebuah bilangan : ");
	scanf("%d", &bil);

	if(bil > 0){
		printf("N = %d, faktor bilangannya adalah : ", bil);
		for(x=1; x <= bil; x++){
			if(bil % x == 0){
				printf("%d ", x);
		}
	}
	}else{
		printf("N harus bernilai positif");
	}
	return 0;
}

