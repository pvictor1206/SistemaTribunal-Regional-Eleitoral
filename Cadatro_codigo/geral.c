#include <stdio.h>

/*
 * TRABALHO FINAL DE INTRODUCAO A PROGRAMACAO
 *
 * DUPLA:
 *
 * Paulo Victor Santos Magalhães
 * Caio Farias Soares
 *
 */


const char *estados[30];

// Funcao para colocar linhas no programa, visualmente polui menos
void linha(){

    printf("\n=======================================\n");

}


// Mostrar Estados
void estados_aparecer(){
    int i;
    int aux = 0;

    estados[0] = "AC";
    estados[1] = "AL";
    estados[2] = "AP";
    estados[3] = "AM";
    estados[4] = "BA";
    estados[5] = "CE";
    estados[6] = "ES";
    estados[7] = "GO";
    estados[8] = "MA";
    estados[9] = "MT";
    estados[10] = "MS";
    estados[11] = "MG";
    estados[12] = "PA";
    estados[13] = "PB";
    estados[14] = "PR";
    estados[15] = "PE";
    estados[16] = "PI";
    estados[17] = "RJ";
    estados[18] = "RN";
    estados[19] = "RS";
    estados[20] = "RO";
    estados[21] = "RR";
    estados[22] = "SC";
    estados[23] = "SP";
    estados[24] = "SE";
    estados[25] = "TO";

    linha();
    printf("UF DOS ESTADOS");
    linha();

    for(i = 0; i < 26; ++i){
        if(!(aux)){
            printf("\n[%s] ",estados[i]);
            ++aux;
        } else{
            printf("    [%s] ",estados[i]);
            aux = 0;
        }

    }
    linha();
}