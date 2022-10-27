// A inizio programma bisogna includere nel programma tutte le librerie di cui si voglia 
// utilizzare le funzioni, ad esempio, se volessimo calcolare il coseno di 45 dovremo
// includere la libreria <math.h> 
// Alcune librerie non fanno parte delle librerie standard di C e bisogna quindi effettuare
// un "link" alla libreria durante la compilazione 
// gcc helloworld.c -lm -o helloworld.exe
// il -lm indica dove si trova la libreria (-l) e quale libreria mettere (m)
#include <stdio.h>
// Librerie che è buona norma conoscere: math.h, stdlib.h, string.h, time.h //

// Commento monolinea
/* Commento multilinea

Questo programma descrive le basi del c, la funzionalità di include e la funzione main,
alla fine del programma è anche scritto come compilarlo

*/

// All'interno del programma deve essere sempre presente la funzione int main() {}
// che è il corpo principale del programma, è di tipo int (tipi di variabili spiegati nel 
// prossimo programma) e ci si possono passare dei valori (spiegato nel programma su
// come passare argomenti da terminale).
// All'interno del main vengono messe tutte le operazioni importanti
int main() {
    // La funzione printf() viene descritta nel prossimo programma
    printf("Il C è un linguaggio rompipalle, ricorda i ;");
    
    // La funzione main manda al terminale un valore di 0 (int) quando finisce di eseguire
    // correttamente il programma, il return 0; è buona norma scriverlo anche se 
    // compilatori moderni lo aggiungono automaticamente quando non presente
    return 0;
}

// Dopo aver scritto un programma in C bisogna compilarlo, ovvero bisogna utilizzare un altro
// programma che trasforma il testo da noi scritto in un linguaggio comprensibile dal computer
// per compilare un programma basta scrivere sul terminale
// gcc nomeprogramma.c -o nomeprogramma.exe

// non è necessario specificare il "-o nomeprogramma.exe", se viene omesso si genera
// un file eseguibile denominato "a.out", è comunque buona norma dare un nome al programma 
// di output

// l'estensione ".exe" è anch'esso non necessario, alternative valide sono ".x", ".out" 
// o anche non mettere l'estensione (alcuni professori richiedono l'estensione ".x")
