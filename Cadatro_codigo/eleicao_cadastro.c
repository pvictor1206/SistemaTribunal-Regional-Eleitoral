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

int repetir_eleicao_ano = 0;

long int eleicao_ano;


struct cad_eleic{

    long int ano_eleicao;

}eleicoes;

// Verificar se o ano de eleicao está repitido
long int ano_eleicao(){
    //AC
    FILE *arq_eleicao;
    arq_eleicao = fopen("arq_eleicao.bin","rb");

    repetir_eleicao_ano = 0;

    do {
        fread(&eleicoes, sizeof(struct cad_eleic), 1, arq_eleicao);
        if(eleicao_ano == eleicoes.ano_eleicao){
            printf("\nNUMERO DO ANO DE ELEICAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&eleicao_ano);
            repetir_eleicao_ano = 1;
        }
    } while (!feof(arq_eleicao)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleicao);

    return repetir_eleicao_ano;

}


void func_cad_eleic() {

    FILE *arq_eleicao;
    arq_eleicao = fopen("arq_eleicao.bin","rb");

    getchar();



    printf("\nAno da eleicao: ");
    scanf("%ld",&eleicao_ano);

    // Verifica se existe um mesmo numero da secao eleitoral
    if(arq_eleicao != NULL){
        do{
            repetir_eleicao_ano = ano_eleicao();
        }while(repetir_eleicao_ano == 1);
    }

    eleicoes.ano_eleicao = eleicao_ano;


    fclose(arq_eleicao);

    arq_eleicao = fopen("arq_eleicao.bin","ab");

    fwrite(&eleicoes, sizeof(struct cad_eleic),1,arq_eleicao);

    linha();
    printf("\nINFORMACOES SALVAS COM SUCESSO!");
    linha();
    printf("\nANO DA ELEICAO: %ld",eleicoes.ano_eleicao);
    linha();


    fclose(arq_eleicao);

}