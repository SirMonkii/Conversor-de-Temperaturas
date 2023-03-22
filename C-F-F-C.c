#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(){
	
	//Definindo o local para poder ter acentua��o no c�digo
	
	setlocale(LC_ALL, "portuguese");

	//Imprimindo o menu
	
	printf("Seja bem vindo(a) ao meu programa de convers�o de medida de temperatura!!\n\n");
	printf("Por favor, selecione o tipo de convers�o que voc� deseja fazer:\n\n\n");
	printf("1- Celsius para Fahrenheit\n");
	printf("2- Fharenheit para Celsius\n");
	printf("3- Convers�es com Kelvin\n\n\n");
	
	//Declarando vari�veis
	
	int tipo;
	char tipo2;
	bool altCorreta = false;
	float C, F, K, CF, FC, CK, FK, KC, KF;
	
	//Cria��o do loop com do while
	
	do{
		
		//Entrada de dados para o menu
		
		scanf(" %d", &tipo);
	
		//Escolhas do terminal
	
		switch(tipo){
			
			//Fun��o Celsius para Fahrenheit
				
			case 1:
					printf("\e[1;1H\e[2J");
					
					printf("Insira a temperatura em Celsius: "); 
					scanf("%f", &C);
				
					CF = C * 1.8 + 32;
			
					printf("\nO resultado de sua convers�o foi de %.1f graus Fahrenheit", CF);
					altCorreta = true;
				break;
			
			//Fun��o Fahrenheit para Celsius
			
			case 2:
					printf("\e[1;1H\e[2J");
					
					printf("Insira a temperatura em Fahrenheit: ");
					scanf("%f", &F);
			
					FC = (F - 32)/1.8;
			
					printf("\nO resultado de sua convers�o foi de %.1f graus Celsius", FC);
					altCorreta = true;
				break;
			
			//Escolha para fun��es em temperatura Kelvin
			
			case 3:
				
				//Imprimindo o segundo menu
				
				printf("\e[1;1H\e[2J");
				
				printf("Por favor, selecione o tipo de convers�o que voc� deseja fazer:\n\n\n");
				printf("1- Celsius para Kelvin\n");
				printf("2- Fahrenheit para Kelvin\n");
				printf("3- Kelvin para Celsius\n");
				printf("4- Kelvin para Fahrenheit\n\n\n");
			
				//Cria��o do Loop com do while
			
				do{
					
					//Entrada de dados para o menu
				
					scanf(" %c", &tipo2);
				
					//Escolhas do terminal
				
					switch(tipo2){
						
						//Fun��o Celsius para Kelvin
						
						case '1':
								printf("\e[1;1H\e[2J");
							
								printf("Insira a temperatura em Celsius: ");
								scanf("%f", &C);
						
						
								CK = C + 273.15;
						
								printf("\nO resultado de sua convers�o foi de %.2f graus Kelvin", CK);
								altCorreta = true;
							break;
							
						//Fun��o Fahrenheit para Kelvin
							
						case '2':
								printf("\e[1;1H\e[2J");
							
								printf("Insira a temperatura em Fahrenheit: ");
								scanf("%f", &F);
						
								FK = (F - 32) * 5/9 + 273.15;
						
								printf("\nO resultado de sua convers�o foi de %.3f graus Kelvin", FK);
								altCorreta = true;
							break;
							
						//Fun��o Kelvin para Celsius
							
						case '3':
								printf("\e[1;1H\e[2J");
							
								printf("Insira a temperatura em Kelvin: ");
								scanf("%f", &K);
						
								KC = K - 273.15;
						
								printf("\nO resultado de sua convers�o foi de %.2f graus Celsius", KC);
								altCorreta = true;
							break;
							
						//Fun��o Kelvin para Fahrenheit
							
						case '4':
								printf("\e[1;1H\e[2J");
							
								printf("Insira a temperatura em Kelvin: ");
								scanf("%f", &K);
						
								KF = (K - 273.15) * 1.8 + 32;
						
								printf("\nO resultado de sua convers�o foi de %.2f graus Fahreinheit", KF);
								altCorreta = true;
							break;
						}
						
						//Impress�o da mensagem de erro caso n�o insira uma op��o v�lida
				
						if(!altCorreta){
							printf("\e[1;1H\e[2J");
							
							printf("Op��o inv�lida, por favor, tente novamente\n\n");	
							}
		
				//Loop while definindo a condi��o com bool
		
				}while(!altCorreta);
			} 
		
				if(!altCorreta){
					printf("\e[1;1H\e[2J");
					
					printf("Op��o inv�lida, por favor, tente novamente\n\n");	
					}
	
	}while(!altCorreta);



	
	
	return 0;
}
