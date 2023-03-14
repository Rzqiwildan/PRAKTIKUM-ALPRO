#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Angka1, i, x, c = 0;

   // printf("\nMasukkan angka: ");
    scanf("%d", &Angka1);

    if(Angka1 <= 0){
    	printf("N harus bernilai positif");
	}else{
		printf("Bilangan primanya adalah :");
	}
    for(i = 2; i <= Angka1; i++){
        c = 0;

        for(x = 2; x <= i/2; x++){
            if(i%j==0){
               c=1;
               break;
           }
        }
        if(c == 0) {
           printf( " %d" , i);
    }
        return 0;
}
}


