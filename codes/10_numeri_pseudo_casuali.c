#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*

Questo programma cerca di spiegare cosa sono e come si usano i numeri (pseudo)casuali.
In C esistono due principali funzioni per la generazione di numeri casuali. Il primo
metodo è rand() (funzione superata ma presente su tutti i compilatori), il secondo è
rand48() (funzione su cui ci focalizzeremo).

*/

int main() {
    // La funzione di rand48() deve essere inizializzata, questo perché non si tratta di
    // veri numeri casuali ma da operazioni i cui risultati hanno una parvenza di casualità
    // e bisogna dare un valore di inizio per questa funzione (in gergo: un SEED)

    // Per la scelta dei SEED è possibile scegliere un valore manuale (questo permette di
    // avere sempre gli stessi valori ogni volta che si esegue il programma, utile se si 
    // deve effettuare un controllo su quello che si sta facendo) o utilizzare la funzione
    // time(0) della libreria time.h (che cambia il seed in base al momento esatto in cui
    // è stato eseguito il programma)
    unsigned long long SEED1 = 1423582758722374, SEED2 = time(0);
    srand48(SEED2);

    // Una volta inizializzata, la funzione rand48() presenta due moduli principali per la 
    // generazioone di numeri:
    double randomDouble;
    // La funzione drand48() genera un numero "double" tra 0 e 1
    randomDouble = drand48(); 
    long long int randomLongInt;
    // La funzione lrand48() genera un numero tra 0 e 2^31
    randomLongInt = lrand48();
    printf("double = %lf, int = %lld\n", randomDouble, randomLongInt);

    /* Come ottenere un numero tra 1 e 6 (lancio di un dado) */
    int lancio = 0;
    while(lancio == 0) {
        lancio = lrand48()%(6+1);
    }
    printf("Dado = %d\n", lancio);

    /* Lancio di una moneta con drand48() */
    double rand = drand48();
    if(rand<.5) {
        printf("Testa\n");
    } else {
        printf("Croce\n");
    }
    return 0;
}
