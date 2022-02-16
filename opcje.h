#include <stdio.h>
#include <stdlib.h>
#include "struktura.h"
#include "stos.h"

/****************************************************************/
/* Funkcja wykonujaca operacje kalkulatora                      */
/* Argumenty funkcji:                                           */
/*   char *tab - wskaznik do tablicy przechowujacej flagi       */
/*               zadanych operacji                              */
/* Opreracje: +, -, x, /, P, c, r, d, p, f, q                   */
/* PRE:                                                         */
/*      dane wprowadzane jako argumenty wywolania lub wpisywane */
/*      recznie na bierzoco                                     */
/* POST:                                                        */
/*      wykonanie sie zadanych operacji                         */
/****************************************************************/
int opcje(char *tab);