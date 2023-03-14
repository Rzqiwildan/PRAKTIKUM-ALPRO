
#include <stdio.h>
#include <stdlib.h>

int main(){

	int bil, x, flag = 0;

	//printf("\nMasukkan sebuah bilangan : ");
	scanf("%d", &bil);

	for(x=2; x <= bil/2; x++){
		if(bil % x == 0){
			flag = 1;
			break;

		}
	}
	if(bil == 1){
		printf("N = %d adalah bukan bilangan prima");
	}else if( bil <= 0){
		printf("N harus bernilai positif");
	}else{
		if(flag == 1){
			printf("N = %d adalah bukan bilangan prima", bil);
		}else{
			printf("N = %d adalah bilangan prima", bil);
		}
	}
	return 0;
}
