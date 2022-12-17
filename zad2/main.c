#include <stdio.h>
#include "Values.h"
#include "SilniaIteracyjna.cpp"
#include "SilniaRekurencyjna.cpp"
int main()
{
    numb =0;
    silniaIter =1;
    printf("Podaj liczbe do wyliczenia silni");
    scanf("%d", &numb);
    printf("Wybierz rodzaj obliczenia silni : a Iteracyjnie lub b Rekurencyjnie \n");
    scanf(" %c", &wynik);
    if(wynik == 'a')
    {
        printf("silnia iteracyjna wynosi : %d" , SilniaIt(numb));
    }
    else if(wynik == 'b')
    {
        printf("silnia rekurencyjnie wynosi : %d" , SilniaReku(numb));
    }
    else
    {
        printf("nie wybrano zadnej opcji");
    }
    return 0;
}
