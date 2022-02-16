#include <stdio.h>
#include <stdlib.h>
#include "struktura.h"
#include "stos.h"
#include "opcje.h"



/****************************************************************/
/* Funkcja main, wprowadzanie danych                            */
/* Argumenty funkcji:                                           */
/*   int argc - liczba wpisanych argumentow podczas wywolania   */
/*   char **argv - tablica przechowujaca dane z wywolania       */
/* PRE:                                                         */
/*      wprowadzane dane (liczby lub funkcje kalkulatora)       */
/*      ze standardowego wejscia w momencie dzialanie funkcji   */
/*      lub jako argumenty wywolania                            */
/* POST:                                                        */
/*      wywolanie funkcji 'opcje' i zwracanie '0' gdy koniec    */
/*      dzialania programu                                      */
/****************************************************************/
int main(int argc, char **argv)
{
    elem *stos;                           /* zmienna typu 'elem' odwolujaca sie do struktury */
    inicjuj(&stos);                       /* inicjowanie stosu */

    char tab[100];                        /* przypisywanie kolejnych argumentow jako tab[0], aby potem wykorzystac to w okraslonych funkcjach */
   

 /* Ponizszy fragment kodu jest tutaj ze wzgledu na automatyczne testy - przeznaczony do obslugi argumentow wejscia */
 /* Ze wzgledu na przeznaczenie do testowania, pozwala on tylko na operacje na liczbach jednocyfrowych, dalsza czesc kodu nie ma juz takich ograniczen */
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    int i;
    for(i=1; i<argc; i++)                 /* petla wskazujaca kolejne argumenty wywolania */             
    {
        tab[0]=argv[i][0];                /* przypisywanie zmiannej tab[0] kolejnych argumentow */

        if(opcje(tab)==0)                 /* sprawdzanie, czy funkcja opcje nie zwrocila '0' */
        {
            return 0;                     /* jesli tak, to koniec dzialania programu */
        }
    }
        
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



 /* Ponizszy fragment kodu jest przeznaczony do dalszej obslugi programu po wykonaniu operacji na argumentach wejsciowych */
 /******************************************************************************************************************************************************/

    while(1)
    {
        scanf("%s",tab);                  /* wprowadzanie danych ze standardowego wejscia */

        if(opcje(tab)==0)                 /* sprawdzanie, czy funkcja opcje nie zwrocila '0' */
        {
            return 0;                     /* jesli tak, to koniec dzialania programu */
        }
    }
}