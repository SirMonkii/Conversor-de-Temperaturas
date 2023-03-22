#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(){
	
	//Definindo o local para poder ter acentuação no código
	
	setlocale(LC_ALL, "portuguese");

	//Imprimindo o menu
	
	printf("Seja bem vindo(a) ao meu programa de conversão de medida de temperatura!!\n\n");
	printf("Por favor, selecione o tipo de conversão que você deseja fazer:\n\n\n");
	printf("1- Celsius para Fahrenheit\n");
	printf("2- Fharenheit para Celsius\n");
	printf("3- Conversões com Kelvin\n\n\n");
	
	//Declarando variáveis
	
	int tipo;
	char tipo2;
	bool altCorreta = false;
	float C, F, K, CF, FC, CK, FK, KC, KF;
	
	//Criação do loop com do while
	
	do{
		
		//Entrada de dados para o menu
		
		scanf(" %d", &tipo);
	
		//Escolhas do terminal
	
		switch(tipo){
			
			//Função Celsius para Fahrenheit
				
			case 1:
					printf("\e[1;1H\e[2J");
					
					printf("Insira a temperatura em Celsius: "); 
					scanf("%f", &C);
				
					CF = C * 1.8 + 32;
			
					printf("\nO resultado de sua conversão foi de %.1f graus Fahrenheit", CF);
					altCorreta = true;
				break;
			
			//Função Fahrenheit para Celsius
			
			case 2:
					printf("\e[1;1H\e[2J");
					
					printf("Insira a temperatura em Fahrenheit: ");
					scanf("%f", &F);
			
					FC = (F - 32)/1.8;
			
					printf("\nO resultado de sua conversão foi de %.1f graus Celsius", FC);
					altCorreta = true;
				break;
			
			//Escolha para funções em temperatura Kelvin
			
			case 3:
				
				//Imprimindo o segundo menu
				
				printf("\e[1;1H\e[2J");
				
				printf("Por favor, selecione o tipo de conversão que você deseja fazer:\n\n\n");
				printf("1- Celsius para Kelvin\n");
				printf("2- Fahrenheit para Kelvin\n");
				printf("3- Kelvin para Celsius\n");
				printf("4- Kelvin para Fahrenheit\n\n\n");
			
				//Criação do Loop com do while
			
				do{
					
					//Entrada de dados para o menu
				
					scanf(" %c", &tipo2);
				
					//Escolhas do terminal
				
					switch(tipo2){
						
						//Função Celsius para Kelvin
						
						case '1':
								printf("\e[1;1H\e[2J");
							
								printf("Insira a temperatura em Celsius: ");
								scanf("%f", &C);
						
						
								CK = C + 273.15;
						
								printf("\nO resultado de sua conversão foi de %.2f graus Kelvin", CK);
								altCorreta = true;
							break;
							
						//Função Fahrenheit para Kelvin
							
						case '2':
								printf("\e[1;1H\e[2J");
							
								printf("Insira a temperatura em Fahrenheit: ");
								scanf("%f", &F);
						
								FK = (F - 32) * 5/9 + 273.15;
						
								printf("\nO resultado de sua conversão foi de %.3f graus Kelvin", FK);
								altCorreta = true;
							break;
							
						//Função Kelvin para Celsius
							
						case '3':
								printf("\e[1;1H\e[2J");
							
								printf("Insira a temperatura em Kelvin: ");
								scanf("%f", &K);
						
								KC = K - 273.15;
						
								printf("\nO resultado de sua conversão foi de %.2f graus Celsius", KC);
								altCorreta = true;
							break;
							
						//Função Kelvin para Fahrenheit
							
						case '4':
								printf("\e[1;1H\e[2J");
							
								printf("Insira a temperatura em Kelvin: ");
								scanf("%f", &K);
						
								KF = (K - 273.15) * 1.8 + 32;
						
								printf("\nO resultado de sua conversão foi de %.2f graus Fahreinheit", KF);
								altCorreta = true;
							break;
						}
						
						//Impressão da mensagem de erro caso não insira uma opção válida
				
						if(!altCorreta){
							printf("\e[1;1H\e[2J");
							
							printf("Opção inválida, por favor, tente novamente\n\n");	
							}
		
				//Loop while definindo a condição com bool
		
				}while(!altCorreta);
			} 
		
				if(!altCorreta){
					printf("\e[1;1H\e[2J");
					
					printf("Opção inválida, por favor, tente novamente\n\n");	
					}
	
	}while(!altCorreta);



	
	
	return 0;
}
