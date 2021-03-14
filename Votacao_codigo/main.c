#include <stdio.h>

#include "votacao.c"
#include "resultado.c"

/*
 * TRABALHO FINAL DE INTRODUCAO A PROGRAMACAO
 *
 * DUPLA:
 *
 * Paulo Victor Santos Magalhães
 * Caio Farias Soares
 *
 */

enum menu{votacao=1,resultado,sair}opcoes;

int main() {

    do{

        linha();
        printf("     TRIBUNAL REGIONAL ELEITORAL\n");
        printf("              PREFEITO\n");
        linha();


        printf("\n1 - inserir voto\n2 - resultado da eleicao\n3 - sair do sistema");
        linha();
        printf("\nDigite a opcao: ");
        scanf("%d", &opcoes);

        switch (opcoes){
            case sair:
                linha();
                printf("SAINDO DO SISTEMA");
                linha();
                break;
            case votacao:
                func_proc_vote();
                break;
            case resultado:
                func_proc_resultado();
                break;
            default:
                linha();
                printf("OPCAO INVALIDA, DIGITE NOVAMENTE");
                linha();

        }

    }while(opcoes != sair);

    return 0;
}