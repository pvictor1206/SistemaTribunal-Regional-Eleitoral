#include <stdio.h>
#include <string.h>

/*
 * TRABALHO FINAL DE INTRODUCAO A PROGRAMACAO
 *
 * DUPLA:
 *
 * Paulo Victor Santos Magalhães
 * Caio Farias Soares
 *
 */

char partido_sigla[10];
long int cnpj_verificar;
int partido_numero;
long int cpf_verificar;


int repetir_sigla_partido = 0;
int repetir_cnpj_partido = 0;
int repetir_numero_partido = 0;
int repetir_cpf_partido = 0;

struct info_partidos{
    char nome_partido[100];
    char sigla_partido[10];
    char representante_partido[100];
    long int cpf_repre_partido;
    long int cnpj_partido;
    int numero_partido;
}partidos;


int verificar_sigla_partido(){
    FILE *arq_partido;
    arq_partido = fopen("arq_partido.bin","rb");

    repetir_sigla_partido = 0;


    do {
        fread(&partidos, sizeof(struct info_partidos), 1, arq_partido);
        if(!(strcmp(partido_sigla,partidos.sigla_partido))){
            printf("\nPARTIDO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(partido_sigla,10,stdin);
            repetir_sigla_partido = 1;
        }
    } while (!feof(arq_partido)); // enquanto não chegar ao final do arquivo


    fclose(arq_partido);

    return repetir_sigla_partido;
}



int verificar_cnpj_partido(){
    FILE *arq_partido;
    arq_partido = fopen("arq_partido.bin","rb");

    repetir_cnpj_partido = 0;


    do {
        fread(&partidos, sizeof(struct info_partidos), 1, arq_partido);
        if(cnpj_verificar == partidos.cnpj_partido){
            printf("\nNUMERO DE CNPJ JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cnpj_verificar);
            repetir_cnpj_partido = 1;
        }
    } while (!feof(arq_partido)); // enquanto não chegar ao final do arquivo


    fclose(arq_partido);

    return repetir_cnpj_partido;
}

int verificar_numero_partido(){
    FILE *arq_partido;
    arq_partido = fopen("arq_partido.bin","rb");

    repetir_numero_partido = 0;


    do {
        fread(&partidos, sizeof(struct info_partidos), 1, arq_partido);
        if(partido_numero == partidos.numero_partido){
            printf("\nNUMERO DO PARTIDO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&partido_numero);
            repetir_numero_partido = 1;
        }
    } while (!feof(arq_partido)); // enquanto não chegar ao final do arquivo


    fclose(arq_partido);

    return repetir_numero_partido;
}

int verificar_cpf_partido(){
    FILE *arq_partido;
    arq_partido = fopen("arq_partido.bin","rb");

    repetir_cpf_partido = 0;


    do {
        fread(&partidos, sizeof(struct info_partidos), 1, arq_partido);
        if(cpf_verificar == partidos.cpf_repre_partido){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_verificar);
            repetir_cpf_partido = 1;
        }
    } while (!feof(arq_partido)); // enquanto não chegar ao final do arquivo


    fclose(arq_partido);

    return repetir_cpf_partido;
}



void func_cad_part(){
    FILE *arq_partido;
    arq_partido = fopen("arq_partido.bin","ab");

    getchar();
    printf("\nNOME DO PARTIDO: ");
    fgets(partidos.nome_partido,100,stdin);

    printf("\nSIGLA DO PARTIDO: ");
    fgets(partido_sigla,10,stdin);

    if(arq_partido != NULL){
        do{
            repetir_sigla_partido = verificar_sigla_partido();
        }while(repetir_sigla_partido == 1);
    }

    printf("\nCNPJ DO PARTIDO: ");
    scanf("%ld",&cnpj_verificar);

    if(arq_partido != NULL){
        do{
            repetir_cnpj_partido = verificar_cnpj_partido();
        }while(repetir_cnpj_partido == 1);
    }

    printf("\nNUMERO DO PARTIDO: ");
    scanf("%d",&partido_numero);

    if(arq_partido != NULL){
        do{
            repetir_numero_partido = verificar_numero_partido();
        }while(repetir_numero_partido == 1);
    }

    getchar();
    printf("\nNOME COMPLETO DO REPRESENTANTE: ");
    fgets(partidos.representante_partido,100,stdin);

    printf("\nCPF DO REPRESENTANTE(SOMENTE NUMEROS): ");
    scanf("%ld",&cpf_verificar);

    if(arq_partido != NULL){
        do{
            repetir_cpf_partido = verificar_cpf_partido();
        }while(repetir_cpf_partido == 1);
    }

    strcpy(partidos.sigla_partido,partido_sigla);
    partidos.cnpj_partido = cnpj_verificar;
    partidos.numero_partido = partido_numero;
    partidos.cpf_repre_partido = cpf_verificar;


    fwrite(&partidos, sizeof(struct info_partidos),1,arq_partido);

    linha();
    printf("\nINFORMACOES SALVAS COM SUCESSO!");
    linha();
    printf("\nNOME DO PARTIDO: %s",partidos.nome_partido);
    printf("\nSIGLA DO PARTIDO: %s",partidos.sigla_partido);
    printf("\nCNPJ DO PARTIDO: %ld",partidos.cnpj_partido);
    printf("\nCODIDO DO PARTIDO: %d",partidos.numero_partido);
    printf("\nNOME COMPLETO DO REPRESENTANTE: %s",partidos.representante_partido);
    printf("\nCPF DO REPRESENTANTE: %ld",partidos.cpf_repre_partido);
    linha();




    fclose(arq_partido);
}