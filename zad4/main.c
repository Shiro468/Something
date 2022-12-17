#include <stdio.h>
#include <math.h>
#define PI 3.14159265
int main()
{
    double stopnie =0;
    double wynikCos = cos(stopnie * PI /180.0);
    double wynikSin = sin(stopnie * PI /180.0);
    double wynikTan = tan(stopnie * PI /180.0);
    printf("Wprowadz ilosc stopni : ");
    scanf("%lf" , &stopnie);
    printf("Cosinus %f stopni to %f.\n ", stopnie ,wynikCos);
    printf("Sinus %f stopni to %f.\n ", stopnie ,wynikSin);
    printf("Tangens %f stopni to %f.\n ", stopnie ,wynikTan);
    return 0;
}
