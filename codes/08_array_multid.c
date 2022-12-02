#include <stdio.h>
#include <stdlib.h>

/*

Addendum sugli array multidimensionali.
Gli array possono avere più dimensioni, se si guardano gli array monodimensionali come a 
dei contenitori di dati, gli array multidimensionali sono dei contenitori dentro ad altri
contenitori.
L'array bidimensionale "array[5][3]" può essere visto come 5 contenitori al cui interno 
sono presenti altri 3 contenitori, questo array può contenere 15 valori differenti.
Schema:
  Array:
    |- 1° Contenitore grande
    |   |- 1° Sottocontenitore
    |   |- 2° Sottocontenitore
    |   |- 3° Sottocontenitore
    |- 2° Contenitore grande
    |   |- 1° Sottocontenitore
    |   |- 2° Sottocontenitore
    |   |- 3° Sottocontenitore
    |- 3° Contenitore grande
    |   |- 1° Sottocontenitore
    |   |- 2° Sottocontenitore
    |   |- 3° Sottocontenitore
    |- 4° Contenitore grande
    |   |- 1° Sottocontenitore
    |   |- 2° Sottocontenitore
    |   |- 3° Sottocontenitore
    |- 5° Contenitore grande
    |   |- 1° Sottocontenitore
    |   |- 2° Sottocontenitore
    |   |- 3° Sottocontenitore

E' possibile vedere questo array anche come una matrice 5x3

| 1_1  1_2  1_3 |
| 2_1  2_2  2_3 |
| 3_1  3_2  3_3 |
| 4_1  4_2  4_3 |
| 5_1  5_2  5_3 |

*/

int main() {
    // Gli array multidimensionali si dichiarano come tutti gli altri ma con tante parentesi
    // quante sono le dimensioni (3 dimensioni -> int array[5][5][5])
    double array[5][3];
    // Per accedere ai singoli elementi dell'array si possono usare dei cicli annodati
    for(int i=0; i<5; i++) {
        for(int j=0; j<3; j++) {
            array[i][j] = (i+j)/3.;
            printf("%lf ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
