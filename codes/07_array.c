#include <stdio.h>
#include <stdlib.h>

/*

Questo programma cerca di spiegare in maniera completa il funzionamento degli array monodimensionali.
Gli array sono delle variabili che hanno la funzione di contenere più variabili singole (non necessariamente
singole, vedere "struct"), l'utilità di utilizzare degli array può essere quello di tenere in memoria tutto
il percorso effettuato da una corpo o salvare i dati di più utenti.
Gli array vengono dichiarati come qualsiasi altro tipo di variabile ma con il numero di elementi dell'array 
tra parentesi quadre (int array[10]).
Caratteristica fondamentale degli array è di avere una lunghezza fissa che va determinata prima di eseguire
il programma (non è possibile far inserire all'utente la lunghezza dell'array).
N.B. Gli elementi dell'array hanno tutti lo stesso "tipo" (se si tratta di interi puoi solo inserire interi)

*/
void stampaArray(char stringa[20]);

int main() {
    ///////////////////////////////////////////////////////
    /// array di dimensione [10] -> posizioni da [0, 9] ///
    ///////////////////////////////////////////////////////
    // Si possono mettere i valori all'interno dell'array manualmente all'interno delle parentesi graffe
    int numero, intArray[] = {1,6,2,4};
    // Si possono creare array di char (anche conosciuti come stringhe) e si possono riempire in più modi.
    // Ogni array di caratteri termina con '\0', conosciuto come Null Terminator (occupa uno spazio a parte
    // nell'array, quindi un array con dentro la parola "ciao" avrà come lunghezza 5 (4 + 1) dove la quinta
    // posizione è occupata da '\0')
    char stringaLunga[] = "supercalifragilistichespiralitoso", stringaCorta[] = {'c', 'i', 'a', 'o'};
    // Si possono inserire dei valori all'interno di un array anche tramite cicli
    printf("Inserire un numero minore di 20: ");
    scanf("%d", &numero);
    if(numero>20 || numero <1) exit(1);
    for(int i=0; i<4; i++) {
        intArray[i] = (3 * i + 4) % numero;
        printf("L'array \"intArray[%d]\" ha valore %d\n", i, intArray[i]);
    }
    return 0;
}

