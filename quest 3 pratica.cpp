#include <stdio.h>
#define pi 3.14 //isso é uma constante, ou seja n muda
//função criada com o tipo no caso float, o nome da função, no caso areaDoCirculo, e dentro do parênteses o tipo e a variavel que usará

float areaDoCirculo(float raio); //quando tem uma função somente com o corpo, é nescesssario vc incrementar no bloco principal


 int main(){
 	//criar uma variavel q rece a area do circulo, no caso o "a", e o "r" para receber o valor de raio
 	float a, r;
 	
 	printf("Informe o valor do raio:\n ");
 	scanf("%f",&r);
 	
 	a =  areaDoCirculo(r);  //variavel q chama a função  areaDoCirculo com a saida de raio
 	
 	printf("A área do circulo é %.2f cm\n", a);
 	return 0;
 }
 
float areaDoCirculo(float raio){
	return  pi * raio * raio;
}
 	
