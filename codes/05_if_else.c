#include <stdio.h>

/*

Queso programma spiega brevemente come poter effettuare delle decisioni confrontando 
delle variabili

*/

int somma(int a, int b) {
    return a+b;
}

int main() {
    // Forma intera
    int anni;
    printf("Inserisci la tua età: ");
    scanf("%d", &anni);
    // Un "if" indica una parte di codice dove si chiede al programma se una condizione è vera o meno.
    // Negli "if" si usano gli operatori relazionali (<: Minore, <=: Minore o Uguale, ==: Uguale, >: Maggiore,
    // >=: Maggiore o Uguale, !=: Diverso) per confrontare delle variabili. 
    // Nel seguente esempio "if(anni<18)" chiede al programma se la variabile "anni" è minore di 18
    // se anni è minore di 18 esegue il codice all'interno delle parentesi graffe, altrimenti va avanti
    // Si può distinguere un codice alternativo nel caso in cui la condizione non dovesse verificarsi,
    // per fare questa cosa esiste l'"else" che, posizionato dopo un "if" esegue del codice in caso in cui
    // l'"if" dia risultato negativo.
    if(anni<18) {
        printf("Sei ancora minorenne\n");
    } else if(anni == 18) { 
    // Inoltre è possibile fare più confronti sulla stessa variabile per escludere o includere altre possibilità.
    // Questa cosa è possibile grazie agli "else if" che semplicemente permettono di effettuare il controllo di
    // un'altra condizione senza doverla mettere nell'"else".
        printf("Ormai sei un adulto\n");
    } else {
    // Il codice all'interno dell'else viene eseguito solo se nessuna delle altre condizioni è vera (in questo caso
    // se anni è maggiore di 18)
        printf("Sei maggiorenne da almeno un anno\n");
    }

    // Forma contratta
    int a, b, ris;
    printf("\nInserire due numeri interi\n1: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    ris = somma(a, b);
    // Se bisogna scrivere una sola operazione dopo la condizione dell'"if" o dell'"else" è possibile scrivere la 
    // riga senza usare parentesi graffe e terminando con un ";"
    if(ris%2==0) printf("Il numero risultante è pari: %d\n", ris);
    else printf("Il numero risultante è dispari: %d\n", ris);

    // True e False in c
    // In c non esiste il concetto di booleano (ovvero di valore vero o falso), per poter effettuare questo tipo di
    // controlli sono di norma usati i valori 0 (Falso/Spento) e 1 (Vero/Acceso). Di seguito viene mostrato un esempio
    ris = 0; // Falso
    printf("Inserire un numero intero maggiore di 4: ");
    scanf("%d", &a);
    if(a>4) ris=1;
    printf("Adesso controllerò il valore inserito\n");
    if(ris) printf("Il valore inserito è maggiore di 4 (%d)\n", a);
    else printf("Il valore inserito è minore di 4 (%d)\n", a);

    // Operatori Logici
    // Gli operatori logici permettono di effettuare più confronti contemporaneamente senza fare degli "if" ramificati.
    // Gli operatori logici in C sono &&: and, ||: or, !: not. Sono abbastanza intuitivi.
    printf("Inserire due numeri dispari:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    if(a%2==0 && b%2==0) printf("I numeri inseriti sono pari\n");
    // Il !() indica l'opposto di quello che è scritto dentro, se "a = 4" si avrà: "4%2" che è 0, la condizione è falsa
    // ma il "not" all'inizio la trasforma in vera di conseguenza entra nell'"if"
    else if(!(a%2!=0) || b%2==0) printf("Uno dei numeri inseriti è pari\n");
    else printf("I numeri inseriti sono entrambi dispari\n");

    return 0;
}