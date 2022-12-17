#include <stdio.h>
#include "FuncAndObject.h"
int main()
{
    x =0;
    y = 0;
    wynik =0;
    printf("Podaj pierwsza wartosc : ");
    scanf("%lf" ,&x);
    printf("Podaj druga wartosc :");
    scanf("%lf" , &y);
    ChooseLowerNum(x,y);
    return 0;
}
double ChooseLowerNum(double  x, double  y)
{
    double wynik =0;
    if(x > y)
    {
        wynik = y;
    }
    else if(y > x)
    {
        wynik =x;
    }
    printf("Mniejsza liczba jest : %lf" , wynik);
    return wynik;
}
