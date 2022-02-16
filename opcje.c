#include "opcje.h"


elem *stos;                           /* zmienna typu 'elem' odwolujaca sie do struktury */
int dana1, dana2;                     /* zmienne potrzebne do wykonywania operacji na wprowadzonych danych */


int opcje(char *tab)
{
    switch(tab[0])                    /* funkcja wyboru */
    {
        case '+':                     /* realizacja dodawania */
        if(empty(stos)>1)             /* sprawdzenie czy na stosie jest wiecej niz jedna dana, aby moc wykonac operacje */
        {
            dana1=stos->dana;         /* przypisanie danej1 szczytu stosu */
            pop(&stos);               /* usuniecie szczytu stosu */

            dana2=stos->dana;         /* przypisanie danej2 szczytu stosu */
            pop(&stos);               /* usuniecie szczytu stosu */

            push(dana1+dana2,&stos);  /* polozenie na szczyt stosu wyniku z dodawania tych dwoch zmiennych */
        }
        else
        {
            printf("Za malo danych! \n"); /* komunikat o braku danych */
        }
        break;



        case '-':                     /* realizacja odejmowania */
        //if(tab[0]-'0')
        //{
        //    push((int)tab[0]-'0',&stos); /* ten for sprawia, ze program poprawnie wczytuje liczby ujemne wykorzystujac kod ASCI (konsultacje) */
        //    break;
        //}
        if(empty(stos)>1)             /* sprawdzenie czy na stosie jest wiecej niz jedna dana, aby moc wykonac operacje */
        {
            dana1=stos->dana;         /* przypisanie danej1 szczytu stosu */
            pop(&stos);               /* usuniecie szczytu stosu */

            dana2=stos->dana;         /* przypisanie danej2 szczytu stosu */
            pop(&stos);               /* usuniecie szczytu stosu */

            push(dana1-dana2,&stos);  /* polozenie na szczyt stosu wyniku z odejmowania tych dwoch zmiennych */
        }
        else
        {
            printf("Za malo danych! \n"); /* komunikat o braku danych */
        }
        break;



        case 'x':                     /* realizacja mnozenia */
        if(empty(stos)>1)             /* sprawdzenie czy na stosie jest wiecej niz jedna dana, aby moc wykonac operacje */
        {
            dana1=stos->dana;         /* przypisanie danej1 szczytu stosu */
            pop(&stos);               /* usuniecie szczytu stosu */

            dana2=stos->dana;         /* przypisanie danej2 szczytu stosu */
            pop(&stos);               /* usuniecie szczytu stosu */

            push(dana1*dana2,&stos);  /* polozenie na szczyt stosu wyniku z mnozenia tych dwoch zmiennych */
        }
        else
        {
            printf("Za malo danych! \n"); /* komunikat o braku danych */
        }
        break;



        case '/':                     /* realizacja dzielenia */
        if(empty(stos)>1)             /* sprawdzenie czy na stosie jest wiecej niz jedna dana, aby moc wykonac operacje */
        {
            dana1=stos->dana;         /* przypisanie danej1 szczytu stosu */
            pop(&stos);               /* usuniecie szczytu stosu */

            dana2=stos->dana;         /* przypisanie danej2 szczytu stosu */
            pop(&stos);               /* usuniecie szczytu stosu */

            push(dana1/dana2,&stos);  /* polozenie na szczyt stosu wyniku z dzielenia tych dwoch zmiennych */
        }
        else
        {
            printf("Za malo danych! \n"); /* komunikat o braku danych */
        }
        break;


        case 'P':                     /* realizacja usuniecia ostatniej wprowadzonej liczby */
        if(empty(stos)>0)             /* sprawdzenie czy na stosie jest co najmniej jedna dana, aby moc wykonac operacje */
        {
            pop(&stos);               /* usuniecie szczytu stosu */
        }
        break;



        case 'c':                     /* realizcja usuniecia wszystkich wprowadzonych liczb */
        while(empty(stos)>0)          /* usuwanie kolejnych elemenow stosu, az zabraknie danych */
        {
            pop(&stos);               /* usuniecie szczytu stosu */
        }
        break;


        case 'r':                     /* realizcja zamiany dwoch ostatnio wprowadzonych liczb */
        if(empty(stos)>1)             /* sprawdzenie czy na stosie jest wiecej niz jedna dana, aby moc wykonac operacje */
        {
            dana1=stos->dana;         /* przypisanie danej1 szczytu stosu */
            pop(&stos);               /* usuniecie szczytu stosu */

            dana2=stos->dana;         /* przypisanie danej2 szczytu stosu */
            pop(&stos);               /* usuniecie szczytu stosu */

            push(dana1,&stos);        /* polozenie na szczyt stosu danych w odwrotnej kolejnosci */
            push(dana2,&stos);
        }
            else
        {
            printf("Za malo danych! \n"); /* komunikat o braku danych */
        }
        break;



        case 'd':                     /* realizcja zduplikowania ostanio wprowadzonej liczby */
        if(empty(stos)>=1)            /* sprawdzenie czy na stosie co najmniej jedna dana, aby moc wykonac operacje */
        {
            dana1=stos->dana;         /* przypisanie danej1 szczytu stosu */
            push(dana1,&stos);        /* polozenie na szczyt stosu danej1 */
        }
        else
        {
            printf("Za malo danych! \n"); /* komunikat o braku danych */
        }
        break;



        case 'p':                     /* realizcja wypisanie szczytu stosu */
        if(empty(stos)>=1)            /* sprawdzenie czy na stosie jest co najmniej jedna dana, aby moc wykonac operacje */
        {
            dana1=stos->dana;         /* przypisanie danej1 szczytu stosu */
            printf("%d \n",dana1);      /* wypisanie szczytu stosu */
        }
        break;



        case 'f':                     /* realizcja wypisanie calego stosu */
        if(empty(stos)>=1)            /* sprawdzenie czy na stosie jest co najmniej jedna dana, aby moc wykonac operacje */
        {
            print(stos);              /* wypisanie stosu */
        }
        break;



        case 'q':                     /* realizcja zakonczenia dzialania programu */
        return 0;                     /* zwracanie '0' co w 'main' bedzie skutkowac zakonczeniem dzialania programu */ 
        break;



        default:
        push(atoi(tab),&stos);        /* konwersja char na int */
        break;
    }
    return 1;
}