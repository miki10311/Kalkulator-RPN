#ifndef STRUKTURA_H
#define STRUKTURA_H                       /* dyrektywa preprocesora, dzieki ktorej mozemy zdefiniowac strukture */


struct element
{
int dana;                                 /* zmienna przechowujaca dana */
struct element *nastepny;                 /* zmienna przechowujaca nastepne dane */
};

typedef struct element elem;              /* deklaracja typu danych 'elem' */


#endif