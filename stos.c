#include "stos.h"





// Zainicjowanie stosu
void inicjuj(elem **szczyt)
{
*szczyt=NULL;                         /* na koncu listy musi byc wartosc NULL, wiec na poczatku taki musi byc szczyt stosu */
}





// Odlozenie na gorze stosu
void push(int dana, elem **szczyt)
{
elem *nowy=malloc(sizeof(elem));      /* stworzenie miejsca na poczatku listy na nowy element, co jest rozumiane jako szczyt */
nowy->dana=dana;                      /* nadanie wartosci nowemu elementowi */
nowy->nastepny=*szczyt;               /* stworzenie wskaznika na poprzedni element (poprzedni szczyt) */

*szczyt=nowy;                         /* zapisanie nowego elementu jako (nowy) szczyt */
}




// Zdjecie ze stosu
void pop(elem **szczyt)
{
elem *nowy=*szczyt;                   /* zmienna pomocnicza, aby moc przekazac wskaznik i nie stracic dostepu do reszty listy */
*szczyt=(*szczyt)->nastepny;          /* przekazanie wskaznika */

free(nowy);                           /* zwolnienie pamieci */
}





// Sprawdzenie czy stos jest pusty
int empty(elem *szczyt)
{
    int i=0;                          /* zmianna pomocnicza do zliczania elementow na stosie */
    if(szczyt)                        /* warunek czy cokolwiek jest na stosie */
    {
        while(szczyt)
        {
        i++;                          /* gdy stos nie jest pusty do liczba elementow zwieksza sie o 1 */
        szczyt=szczyt->nastepny;      /* gdy zmienna szczyt != NULL to bedzie sie wykonywac, gdy szczyt = NULL to oznacza koniec listy i koniec petli */
        }
        return i;                     /* zwracana liczba elementow na stosie */
    }
    else
    {
        printf("Stos jest pusty! \n");  /* komunikat gdy stos jest pusty */
        return 0;
    }
}




// Wypisanie stosu
void print(elem *szczyt)
{
    if(szczyt)                         /* warunek czy cokolwiek jest na stosie */
    {
        while(szczyt)
        {
        printf("%d ",szczyt->dana);    /* wypisanie wartosci */
        szczyt=szczyt->nastepny;       /* 'przeskok' na kolejna wartosc, jezeli ta wartosc nie bedzie NULL to bedzie wykonywac sie dalej */
        }
        printf("\n");
    }
    else
    {
        printf("Stos jest pusty! \n");  /* komunikat gdy stos jest pusty */
    }
}