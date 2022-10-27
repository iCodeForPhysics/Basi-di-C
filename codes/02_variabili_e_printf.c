#include <stdio.h>

/*

Questo programma spiega come creare e inizializzare variabili, descrive i tipi 
di variabile principali e come stampare del testo su terminale con printf()

*/

int main() {
    // Per i tipi di variabile principali visitare:
    // https://en.wikipedia.org/wiki/C_data_types#Main_types
    int numeroIntero;
    numeroIntero = 2; // Inizializzo la variabile
    printf("%d\n", numeroIntero); 
    // printf è una funzione della libreria standard input output (stdio.h), stampa su 
    // terminale del testo, %"lettera/e" indicano che si vuole stampare il valore di una
    // variabile (%d è un INTero), il "\n" indica al terminale di andare alla nuova riga
    float numeroDecimaleF; 
    numeroDecimaleF = 1.2;
    printf("%f\n", numeroDecimaleF);
    // Si può inizializzare una variabile quando la si crea
    double numeroDecimaleD = 1.4; 
    printf("%lf", numeroDecimaleD);
    char carattere = 'a'; 
    printf("%c\n", carattere);
    long numeroInteroL = 100000000000;
    printf("%li", numeroInteroL);
    return 0;
}
