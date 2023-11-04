#include <stdio.h>

int main() {
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    printf("Fahrenheit\tCelcius\n");
    while(fahr <= upper){
        celcius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t\t%6.2f\n", fahr,celcius);
        fahr = fahr + step;
    }
}

/* imprime la tabla Fahrenheit-Celsius
Otra forma utiliando el Búcle FOR 
main( )
{
int fahr;
for (fahr=0; fahr<=300; fahr=fahr+20)
printf('%3d %6.1f\n', fahr, (5.0/9.0)*(fahr-32));
}
*/