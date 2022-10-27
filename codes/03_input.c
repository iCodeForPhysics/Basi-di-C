#include <stdio.h>

/* 

In questo programma viene spiegato come si può far inserire ad un utente del testo da 
terminale

*/

int main() {
    int età;
    printf("Quanti anni hai?\n");
    scanf("%d", &età);
    // La funzione scanf() è presente nella libreria stdio.h e permette di prendere in
    // in input del testo inserito da un utente da terminale e salvarlo in una variabile
    // è importante notare che si usa una & prima del nome della variabile (questo perché
    // viene indicata la posizione dove va salvato l'input, argomento che verrà trattato
    // più avanti con la questione dei puntatori)
    printf("Hai inserito %d anni\n", età);

    return 0;
}
