#include <stdio.h>
//cria��o de fun��o convensor - formulas =em celcus (c = f - 32/ 1,8) em (f = c*1,8 + 32)
//fun��o
float celsiusParaFahrenheit(float c);
float FahrenheitParaCelsius(float f);

//bloco principal
int main(){
	int op;
	float tf, tc;
	printf("Conversor de temperatura\n");
	printf("Escolha uma op��o:\n ");
	printf("1 - Celsius para Fahrenheit\n");
	printf("2 -  Fahrenheit para Celsius : \n");
	scanf("%d", &op);
	
	printf("Digite o valor  da temperatura\n");
	
	if(op == 1){
		printf("em celsius: ");
		scanf("%f", &tc);
		tf = celsiusParaFahrenheit(tc);
	}else {
		printf(" em Fahrenheit: ");
		scanf("%f", &tf);
		tc = FahrenheitParaCelsius(tf);
	}
	printf("Temperatura em Celsius: %.2f c\n", tc);
	printf("Temperatura em Fahrenheit: %.2f c\n", tf);
	
	return 0;
}
//aqui � a assinatura e inplementa��o

float celsiusParaFahrenheit(float c){
	return (c*1.8 + 32);
	
}
float FahrenheitParaCelsius(float f){
	return (f-32)/ 1.8;
}
