#include <stdio.h>
#include <stdlib.h>
#include "struktura.h"


/****************************************************************/
/* Funkcja inicjuje stos                                        */
/* Argumenty funkcji:                                           */
/*   element - struktura dzieki ktorej zostal zrealizowany stos */
/*   **szczyt - zmienna typu elem odwolujaca sie do struktury   */
/*             element dzieki ktorej mamy dostep do listy       */
/* PRE:                                                         */
/*      brak                                                    */
/* POST:                                                        */
/*      zainicjowany stos                                       */
/****************************************************************/
void inicjuj(elem **szczyt);



/****************************************************************/
/* Funkcja wykonuje odlozenie elementu na gorze stosu           */
/* Argumenty funkcji:                                           */
/*   element - struktura dzieki ktorej zostal zrealizowany stos */
/*   **szczyt - zmienna typu elem odwolujaca sie do struktury   */
/*             element dzieki ktorej mamy dostep do listy       */
/*   dana - wpisana dana majaca zostac odlozona na stosie       */
/* PRE:                                                         */
/*      poprawnie wpisana zmienna typu int                      */
/* POST:                                                        */
/*      stos zawierajacy jeden element wiecej                   */
/****************************************************************/
void push(int dana, elem **szczyt);



/****************************************************************/
/* Funkcja wykonuje usuniecie elementu z gory stosu             */
/* Argumenty funkcji:                                           */
/*   element - struktura dzieki ktorej zostal zrealizowany stos */
/*   **szczyt - zmienna typu elem odwolujaca sie do struktury   */
/*             element dzieki ktorej mamy dostep do listy       */
/* PRE:                                                         */
/*      stos zawierajacy co najmniej jedna dana                 */
/* POST:                                                        */
/*      stos zawierajacy jeden element mniej                    */
/****************************************************************/
void pop(elem **szczyt);



/****************************************************************/
/* Funkcja sprawdza czy stos jest pusty i ile ma elementow      */
/* Argumenty funkcji:                                           */
/*   element - struktura dzieki ktorej zostal zrealizowany stos */
/*   **szczyt - zmienna typu elem odwolujaca sie do struktury   */
/*             element dzieki ktorej mamy dostep do listy       */
/* PRE:                                                         */
/*      zainicjowany stos (pusty lub z elementami)              */
/* POST:                                                        */
/*      funkcja zwraca liczbe elementow na stosie               */
/****************************************************************/
int empty(elem *szczyt);



/****************************************************************/
/* Funkcja wypisuje stos                                        */
/* Argumenty funkcji:                                           */
/*   element - struktura dzieki ktorej zostal zrealizowany stos */
/*   **szczyt - zmienna typu elem odwolujaca sie do struktury   */
/*             element dzieki ktorej mamy dostep do listy       */
/* PRE:                                                         */
/*      stos zawierajacy co najmniej jedna dana                 */
/* POST:                                                        */
/*      wypisany stos                                           */
/****************************************************************/
void print(elem *szczyt);
