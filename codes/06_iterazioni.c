#include <stdio.h>

/*

Questo programma spiega brevemente come eseguire delle iterazioni (esempio più comune: calcolo del
fattoriale) tramite i cicli "while", "do-while" e "for"

*/

long long fattorialeWhile(int numero);
long long fattorialeFor(int numero);

int main() {
    // I cicli permettono di eseguire uno stesso codice per un numero determinato di volte, quando
    // si vuole implementare un ciclo è importante assicurarsi di aver inserito le condizioni giuste
    // per la chiusura dello stesso per non avere cicli infiniti (ad esempio se volete farlo eseguire
    // finchè una variabile è minore di 5 ma poi non cambiate il valore della variabile o lo abbassate).

    // Fattoriale
    long long risultatoWhile, risultatoFor;
    int i, numero=0;
    printf("Inserire il numero di cui si vuole sapere il fattoriale (massimo 15): ");
    // Il ciclo "do-while" esegue il codice al suo interno almeno una volta, anche se la condizione del
    // "while" è vera. Questo permette di far comparire sicuramente una parte di codice.
    do {
        scanf("%d", &numero);
        while(getchar()!='\n'); // Questa riga (letteralmente) svuota il "buffer" (verrà spiegato più
                                // avanti), è buona norma inserirla dopo uno scanf per dei numeri in modo 
                                // da non avere problemi dovuti a valori non adatti (come le lettere).
        if(numero<=0 || numero >15) printf("Inserire un numero compreso tra 1 e 15: ");
    } while(numero<=0 || numero >15);

    risultatoWhile = fattorialeWhile(numero);
    risultatoFor = fattorialeFor(numero);

    printf("Il fattoriale di %d è: \nCiclo while: %lld \nCiclo for: %lld\n", numero, risultatoWhile, risultatoFor);

    return 0;
}

long long fattorialeWhile(int numero) {
    long long risultato = 1;
    int temp = numero;
    // Il ciclo "while" è il meno utilizzato e quello per cui è più facile incorrere in cicli infiniti.
    // In caso di ciclo infinito basta premere "ctrl" e "c" contemporaneamente sul terminale.
    while(temp>1) {
        risultato *= temp;
        temp--;
    }
    return risultato;
}

long long fattorialeFor(int numero) {
    long long risultato = 1;
    // Il ciclo "for" può essere visto come la "versione migliore" del ciclo "while", può essere scritto in
    // diversi modi e permette di eseguire iterazioni in maniere anche diverse tra loro. I cicli "for" si 
    // costruiscono definendo il valore iniziale della variabile su cui si vuole svolgere l'iterazione (di 
    // norma "i" o "j"), la condizione che termina il ciclo, l'incremento o il decremento della variabile.
    // Quando si crea un ciclo "for" è importante fare attenzione ad usare i ";" tra le varie parti e ad
    // utilizzare correttamente l'incremento/decremento (cicli infiniti).
    for(int i=0; i<numero; i++) {
        risultato *= i+1;
    }
    return risultato;
}