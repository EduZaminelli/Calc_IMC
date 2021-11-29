#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	//Criando a função imc

	float calcularIMC() {
    	
    	float peso, altura, imc;
    	
    	//Título do programa
    	
		printf("''Calculadora de Índice de Massa Corporal''\n");
    	
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
    
    printf("Seu IMC é:%.2fkg/m2", imc);
    
    if (imc < 18.5) {
		printf("\nSua situação é abaixo do peso!\n\n");
		} else if (imc >= 18.5 && imc <= 24.9) {
		printf("\nSua situação é a ideal!\n\n");
		} else if (imc > 24.9 && imc <= 29.9) {
		printf("\nSua situação é sobrepeso!\n\n");
		} else if (imc > 29.9 && imc <= 34.9) {
		printf("\nSua situação é obesidade grau 1!\n\n");
		} else if (imc >= 34.9 && imc <= 39.9) {
		printf("\nSua situação é obesidade grau 2!\n\n");
		} else {
		printf("\nSua situação é obesidade grau 3 ou mórbida!\n\n");
		}

	system("pause");
	return 0;
}
