#include <stdio.h>

int main(void) {
  float peso = 60.0;
  float altura = 1.70;
  float imc = peso / altura * altura;
  
  printf("meu peso é %2fkg \n", peso);
  printf("minha altura é %2fm \n", altura);
  printf("logo meu IMC é %2f \n", imc);
  
  return 0;
} 