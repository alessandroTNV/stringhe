#include <stdio.h>
#include <string.h>

#define DIM_STRINGA 20
#define GIORNI_SETTIMANA 7
#define GIORNO 10

typedef enum {LUM, MAR, MER, GIO, VEN, SAB, DOM} Giorni;

int main() {

    char stringa1[DIM_STRINGA + 1] = "67";
    char stringa2[DIM_STRINGA + 1] = {'s', 't', 'r', 'i', 'n', 'g', 'a', '\0'};
    int valore;
    char giorniSettiman[GIORNI_SETTIMANA][GIORNO] = {
            "Lunedi",
            "Martedi",
            "Mercoledi",
            "Giovedi",
            "Venerdi",
            "Sabato",
            "Domenica"
    };

    sscanf(stringa1, "%d", &valore);

    sprintf(stringa1, "%d %d", valore, valore);

    printf("\n %s", stringa1);

    printf("\nvalore %d", valore);
    printf("\nPrimo giorno della settimana %s", giorniSettiman[0]);
    printf("\nOggi è %s", giorniSettiman[MAR]);
    printf("\nInserisci stringa: ");
    scanf("%20[^\n]s", stringa1);

    while (getchar() != '\n'){
        printf("\ncarattere scartato");
    }

    printf("\nInserisci stringa: ");
    scanf("%[^\n]s", stringa2);

    puts(stringa1);
    puts(stringa2);


    return 0;
}

void copiaStringa(char dest[], char src[], int dimDest){
    if(strlen(src) < dimDest)
        strcpy(dest,src);
    else
        printf("\nDimensione s2 maggiore di s1");
}

void concatStringa(char dest[], char src[], int dimDest){
    if(dimDest > (strlen(dest) + strlen(src)))
        strcat(dest, src);
    else
        printf("\nDimensione errata");
}

char* trovaMinore(char s1[], char s2[]){

    if(strcmp(s1, s2) < 0)
        return s1;

    return s2;
}