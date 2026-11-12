#include <stdio.h>

int main(){
	
	int escolha, primeiroNumero, segundoNumero, soma, subtracao, multiplicacao;
	float divisao; 
	
	do {
		
	    printf("\n1. Soma\n");
	    printf("2. Subtracao\n");
	    printf("3. Multiplicacao\n");
	    printf("4. Divisao\n");
	    printf("5. Sair\n");
	
	    printf("\nEscolha o tipo de calculo: ");
	    scanf("%d", &escolha);

	    while (escolha < 1 || escolha > 5){
	    	
	        printf("\nNumero invalido!\n");
	        printf("\nEscolha o tipo de calculo: ");
	        scanf("%d", &escolha);
	        
    	}

	    if (escolha != 5){
	    	
	        printf("\nDigite o primeiro numero: ");
	        scanf("%d", &primeiroNumero);
	
	        printf("Digite o segundo numero: ");
	        scanf("%d", &segundoNumero);
	
	        switch(escolha){
	        	
	            case 1: soma = primeiroNumero + segundoNumero;
					printf("\nResultado da soma: %d + %d = %d\n", primeiroNumero, segundoNumero, soma);
				break;
						
				case 2:	subtracao = primeiroNumero - segundoNumero;
					printf("\nResultado da subtracao: %d - %d = %d\n", primeiroNumero, segundoNumero, subtracao);
				break;
					
				case 3: multiplicacao = primeiroNumero * segundoNumero;
					printf("\nResultado da multiplicacao: %d x %d = %d\n", primeiroNumero, segundoNumero, multiplicacao);
				break;
					
				case 4: divisao = (float)primeiroNumero / segundoNumero;
					if (segundoNumero == 0){
				    	printf("\nErro: Divisao por zero nao existe!\n");
				    }
				    else{
				        divisao = (float)primeiroNumero / segundoNumero;				
				        printf("\nResultado da divisao: %d / %d = %.2f\n", primeiroNumero, segundoNumero, divisao);
					}
				break;
					
				case 5: 
					printf("\nFechando.. obrigado!");
				break;
			}
    	}
	} 
	
	while (escolha != 5);

	printf("\nFechando... obrigado!\n");
	
	return 0;
}
