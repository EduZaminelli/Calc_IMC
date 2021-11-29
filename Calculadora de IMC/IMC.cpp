#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	//Criando a fun��o imc

	float calcularIMC() {
    	
    	float peso, altura, imc;
    	
    	//T�tulo do programa
    	
		printf("''Calculadora de �ndice de Massa Corporal''\n");
    	
    	printf("\nInforme sua altura (em m): ");
    	scanf("%f", &altura);
    	printf("\nInforme seu peso (em kg): ");
    	scanf("%f", &peso);
    	
    	imc = peso / (altura * altura);
    	
    	return imc;
	}
 
int main(){
 
    //Para usar acentos
    setlocale(LC_ALL, "");
    
    float imc = calcularIMC();
    
    printf("Seu IMC �:%.2fkg/m2", imc);
    
    if (imc < 18.5) {
		printf("\nSua situa��o � abaixo do peso!\n\n");
		} else if (imc >= 18.5 && imc <= 24.9) {
		printf("\nSua situa��o � a ideal!\n\n");
		} else if (imc > 24.9 && imc <= 29.9) {
		printf("\nSua situa��o � sobrepeso!\n\n");
		} else if (imc > 29.9 && imc <= 34.9) {
		printf("\nSua situa��o � obesidade grau 1!\n\n");
		} else if (imc >= 34.9 && imc <= 39.9) {
		printf("\nSua situa��o � obesidade grau 2!\n\n");
		} else {
		printf("\nSua situa��o � obesidade grau 3 ou m�rbida!\n\n");
		}

	system("pause");
	return 0;
}
