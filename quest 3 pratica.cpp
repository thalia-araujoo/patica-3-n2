#include <stdio.h>
#define pi 3.14 //isso � uma constante, ou seja n muda
//fun��o criada com o tipo no caso float, o nome da fun��o, no caso areaDoCirculo, e dentro do par�nteses o tipo e a variavel que usar�

float areaDoCirculo(float raio); //quando tem uma fun��o somente com o corpo, � nescesssario vc incrementar no bloco principal


 int main(){
 	//criar uma variavel q rece a area do circulo, no caso o "a", e o "r" para receber o valor de raio
 	float a, r;
 	
 	printf("Informe o valor do raio:\n ");
 	scanf("%f",&r);
 	
 	a =  areaDoCirculo(r);  //variavel q chama a fun��o  areaDoCirculo com a saida de raio
 	
 	printf("A �rea do circulo � %.2f cm\n", a);
 	return 0;
 }
 
float areaDoCirculo(float raio){
	return  pi * raio * raio;
}
 	
