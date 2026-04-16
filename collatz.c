#include <stdio.h>

void main(){
	
	int n, cont = 0;
	
	printf("Informe um numero inteiro positivo: ");
	scanf("%d", &n);
	
	do{
	if( n % 2==0 ){
    	n = n / 2;
    	cont++;
	    printf("%d\n", n);
	}else{

	    n = (n * 3) + 1;
	    cont ++;
	    printf("%d\n", n);
}
	}while(n!= 1);
	
	printf("O total de passos ate chegar no 1 foi de %d\n", cont);
}