#include <stdio.h>

#include "geral.c"
#include "municipio_cadastro.c"
#include "zona_cadastro.c"
#include "secao_cadastro.c"
#include "eleitores_cadastro.c"
#include "eleicao_cadastro.c"
#include "partidos_cadastro.c"
#include "candidatos_cadastro.c"

#include "municipio_alterar.c"
#include "zona_alterar.c"
#include "secao_alterar.c"

/*
 * TRABALHO FINAL DE INTRODUCAO A PROGRAMACAO
 *
 * DUPLA:
 *
 * Paulo Victor Santos Magalhães
 * Caio Farias Soares
 *
 */

enum cadastro{inserir = 1,alterar,sair}menu;
enum opcoes{municipio = 1,zona_eleitoral,secoes,eleitores,eleicao,partido,candidatos}opcao;

int main() {

    atualizar_muni(); // Atualiza todos os dados dos municipios toda vez que abrir o programa, assim os dados nao sao perdidos


    do{
        linha();
        printf("     TRIBUNAL REGIONAL ELEITORAL\n");
        printf("              PREFEITO\n");
        linha();


        printf("\n1 - inserir cadastro\n2 - alterar cadastro\n3 - sair do sistema");
        linha();
        printf("\nDigite a opcao: ");
        scanf("%d", &menu);

        switch (menu) {
            case inserir:
                linha();
                printf("1 - Cadastro de Municipio!\n");
                printf("2 - Cadastro de Zona Eleitoral!\n");
                printf("3 - Cadastro de Secoes!\n");
                printf("4 - Cadastro de Eleitores!\n");
                printf("5 - Cadastro de Eleicao!\n");
                printf("6 - Cadastro de Partidos!\n");
                printf("7 - Cadastro de Candidatos!\n");
                linha();
                printf("Escolha a funcao  para cadastro: ");
                scanf("%d", &opcao);
                switch (opcao){
                    case municipio:
                        func_cad_mun();
                        break;
                    case zona_eleitoral:
                        func_cad_zona();
                        break;
                    case secoes:
                        func_cad_sec();
                        break;
                    case eleitores:
                        func_cad_eleitores();
                        break;
                    case eleicao:
                        func_cad_eleic();
                        break;
                    case partido:
                        func_cad_part();
                        break;
                    case candidatos:
                        func_cad_cand();
                        break;
                    default:
                        linha();
                        printf("\nNENHUMA OPCAO ENCONTRADA");
                        linha();


                }
                break;
            case alterar:
                linha();
                printf("1 - Alterar dados de Municipio!\n");
                printf("2 - Alterar dados de Zona Eleitoral!\n");
                printf("3 - Alterar dados de Secoes!");
                linha();
                printf("Escolha a funcao  para cadastro: ");
                scanf("%d", &opcao);
                switch (opcao){
                    case municipio:
                        func_alterar_municipio();
                        break;
                    case zona_eleitoral:
                        func_alterar_zona();
                        break;
                    case secoes:
                        func_alterar_sec();
                        break;
                    default:
                        linha();
                        printf("\nNENHUMA OPCAO ENCONTRADA");
                        linha();


                }
                break;
            case sair:
                linha();
                printf("SAINDO DO SISTEMA...");
                linha();
                break;
            default:
                linha();
                printf("OPCAO INVALIDA, DIGITE NOVAMENTE");
                linha();
        }

    }while(menu != 3);

    return 0;
}
