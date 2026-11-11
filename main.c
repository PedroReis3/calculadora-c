#include <stdio.h>

int main(){
	
	int escolha, primeiroNumero, segundoNumero, soma, subtracao, multiplicacao;
	float divisao; 
	
	printf("1. Soma\n");
	printf("2. Subtracao\n");
	printf("3. Multiplicacao\n");
	printf("4. Divisao\n");
	printf("5. Sair\n");
	printf("\nEscolha o tipo de calculo: ");
	scanf("%d", &escolha);
	
	while(escolha > 0 && escolha < 5){
	
		printf("\nDigite o primeiro numero: ");
		scanf("%d", &primeiroNumero);
		
		printf("Digite o segundo numero: ");
		scanf("%d", &segundoNumero);
			
		switch(escolha){
			
			case 1: soma = primeiroNumero + segundoNumero;
				printf("\nResultado da soma: %d\n", soma);
			break;
				
			case 2:	subtracao = primeiroNumero - segundoNumero;
				printf("\nResultado da subtracao: %d\n", subtracao);
			break;
			
			case 3: multiplicacao = primeiroNumero * segundoNumero;
				printf("\nResultado da multiplicacao: %d\n", multiplicacao);
			break;
			
			case 4: divisao = (float)primeiroNumero / segundoNumero;
				printf("\nResultado da divisao: %.2f\n", divisao);
			break;
		}
		
		printf("\n1. Soma\n");
		printf("2. Subtracao\n");
		printf("3. Multiplicacao\n");
		printf("4. Divisao\n");
		printf("5. Sair\n");
		printf("\nEscolha o tipo de calculo: ");
		scanf("%d", &escolha);
		
	}
	
	return 0;
}
