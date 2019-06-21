#include<stdio.h>
int main(){
    double c;
    scanf("%lf",&c);
    printf("Fahrenheit = %.2f\n",c*1.8+32);
    printf("Absolute temperature = %.2f\n",c+273.15);
}
