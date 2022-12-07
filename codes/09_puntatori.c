#include <stdlib.h>
#include <stdio.h>

/*

Questo programma cerca di spiegare in maniera sintetica la funzione e l'utilizzo dei puntatori.
I puntatori sono un tipo di variabile che salva la posizione fisica di un'altra variabile,
per fare un esempio più pratico, un puntatore a intero è una variabile che salva la posizione
di memoria di un'altra variabile, con i puntatori è possibile effettuare tutte le operazioni che 
si effettuano normalmente con le variabili

*/

// Esempio di funzione con i puntatori
// Quando si crea una funzione che utilizza dei puntatori è possibile creare una funzione di
// tipo "void", ovvero che non ritorna nulla (Solo se i valori che devono essere tornati sono quelli
// puntati, altrimenti funziona come con tutte le altre funzioni)
void func(int *p1, int *p2);

int main() {
    int var = 0;
    // Dichiarare un puntatore
    int *pointer;
    // Inizializzare un puntatore (Sempre)
    pointer = &var;
    printf("Il puntatore adesso punta alla variabile var:      %d\t%p\n", *pointer, pointer);
    // Lavorare sui puntatori
    // - Valore della variabile puntata
    *pointer = 25;
    printf("Il valore puntato adesso ha cambiato valore:       %d\t%p\n", *pointer, pointer);
    // - Posizione della variabile puntate
    pointer += 1;
    printf("Spostando la posizione puntata si creano problemi: %d\t%p\n", *pointer, pointer);


    int a = 4, b = 6, *pa = &a, *pb = &b;
    // Quando si chiama una funzione che chiede dei puntatori bisogna inserire il nome del puntatore 
    // senza "*" visto che si sta mandando la posizione puntata
    printf("a = %d, b = %d\n", *pa, *pb);
    func(pa, pb);
    printf("a = %d, b = %d\n", *pa, *pb);

    return 0;
}

// Questa funzione scambia due valori utilizzando i puntatori
void func(int *p1, int *p2) {
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
