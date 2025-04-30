#include <stdio.h>
#define PI 3.14159

int main(void){

    double raio = 0;

    printf("digite o raio da circunferencia: \n");
    scanf("%lf", &raio);

    double area = PI * raio * raio;

    printf("area = %lf\n", area);

    return 0;
}
