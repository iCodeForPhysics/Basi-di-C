#include <stdio.h>

/*

Questo programma descrive come vengono scrite le funzioni e da un esempio pratico su 
come utilizzarle

*/

// Definisco la funzione prima del main, la funzione è un blocco di codice che può essere
// chiamato più volte, il vantaggio è quello di non dover scrivere più volte lo stesso
// codice.
// Una funzione ha un tipo (oltre ai tipi classici esiste anche la funzione di tipo void,
// l'utilità di una funzione void verrà spiegata nel programma sui puntatori) e degli 
// argomenti (in questo caso (int a, int b)) che sono dei valori che vanno inseriti quando
// si chiama la funzione per il corretto funzionamento della stessa.
// Alla fine di ogni funzione va specificato un return con il valore che si intende far
// uscire dalla funzione (questa cosa non è vera per le funzioni di tipo void)
int sommaInteri(int a, int b);

int main() {
    int numero1, numero2, valoreSomma; // Si possono dichiarare più variabili sulla stessa riga
    printf("Inserire il primo numero: "); // Non metto \n per far inserire all'utente il numero
    // subito dopo i due punti
    scanf("%d", &numero1);
    printf("Inserire il secondo numero: "); 
    scanf("%d", &numero2);
    valoreSomma = sommaInteri(numero1, numero2); 
    // Chiamo la funzione sommaInteri scrivendo "sommaInteri()" e mettendo tra le parentesi
    // tutte le variabili che servono alla funzione (in questo caso 2 interi)
    // e salvo il valore dato dal "return risultato;" (riga 23) nella variabile valoreSomma
    printf("La somma di %d e %d fa %d\n", numero1, numero2, valoreSomma);
    return 0;
}

// Scrivo la funzione dopo il main (può essere scritta in questo modo anche prima del main
// ma scrivendola dopo il codice è più ordinato)
int sommaInteri(int a, int b) {
    int risultato;
    risultato = a + b;
    return risultato;
}
