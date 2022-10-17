#include <stdio.h>
//#define TAM 5

/*
Elabore um programa que receba do usuario 8 numeros inteiros positivos e diferentes entre si, e devolva como saida os 8 numeros de forma ordenada.
*/

// 1ªforma utilizando if e else(utilizei 3 variaveis apenas para mostrar a aplicação da lógica)
int main() {
	
	/*int num1, num2, num3;
	
	printf("Insira 3 numeros para obtenção da ordenção \n");
	printf("1ºnumero: \n");
	scanf("%d", &num1 );
	
	printf("2ºnumero: \n");
	scanf("%d", &num2 );
	
	printf("3ºnumero: \n");
	scanf("%d", &num3 );
	
	if(num1>num2 && num1>num3 && num2>num3){
		printf("Ordem1:\n %d \n %d \n %d", num1, num2, num3);
	}else if(num1>num2 && num1>num3 && num3>num2){
		printf("Ordem2:\n %d \n %d \n %d", num1, num3, num2);
	}else if(num2>num1 && num2>num3 && num3>num1){
		printf("Ordem3:\n %d \n %d \n %d", num2, num3, num1);
	}else if(num2>num1 && num2>num3 && num1>num3){
		printf("Ordem4:\n %d \n %d \n %d", num2, num3, num1);	
}else if(num3>num1 && num3>num2 && num2>num1){
		printf("Ordem5:\n %d \n %d \n %d", num3, num2, num1);
	}else if(num3>num1 && num3>num2 && num1>num2){
		printf("Ordem6:\n %d \n %d \n %d", num3, num1, num2);
	}*/
	
	
	//2ªforma utilizando o metodo bubblesort 
	
	/*int numeros[TAM];
	int i, aux, contador;
	
	printf("Entre com dez númeris para preencher o array, e pressione enter após digitar cada um: \n");
    for(i = 0; i < TAM; i++){
    	scanf("%d", &numeros[i]);
	}
	printf("Ordem atual dos itens no array: \n");
	
	for(i=0 ; i<TAM; i++){
		printf("%4d", numeros[i]);
	}
	
	for (contador = 1; contador < TAM; contador++){
		for (i=0; i < TAM -1; i++){
			if(numeros[i] > numeros[i + 1]){
				aux = numeros[i];
				numeros[i] = numeros[i + 1];
				numeros[i + 1] = aux;
			}
		}
	}
	printf("\nElementos do array em ordem crescente:\n");
	for (i=0; i < TAM; i++){
		printf("%4d", numeros[i]);
	}
	printf("\n");
	*/
	
	return 0;
}
