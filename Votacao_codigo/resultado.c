#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
 * TRABALHO FINAL DE INTRODUCAO A PROGRAMACAO
 *
 * DUPLA:
 *
 * Paulo Victor Santos Magalhães
 * Caio Farias Soares
 *
 */

char municipio[100];
int zona;
int secao;

long int maior;

void func_proc_resultado(){

    char cad_dados[3]; // ira ficar amarzenada a UF que o usuario digitar
    int tamStr,i;

    estados_aparecer();

    getchar();
    printf("\nDigite a UF do Estado para o cadastro da secao eleitoral: ");
    fgets(cad_dados,3,stdin);

    // Converte minuscula em maiscula
    tamStr = strlen(cad_dados);
    for(i=0; i < tamStr; i++)
    {                            // Converte cada caracter de Str
        cad_dados[i] =toupper(cad_dados[i]);  // para maiuscula
    }

    // Fazer o cadastro de secoes eleitorais
    // É necessario zonas eleitorais para fazer o cadastro da secao
    if(!(strcmp(cad_dados,"AC"))) {

        FILE *arq_zona_ac;
        FILE *arq_secao_ac;
        FILE *arq_mun_ac;
        FILE *arq_candidato_ac;
        FILE *arq_voto_ac;
        FILE *arq_resultado_ac;

        arq_voto_ac = fopen("arq_voto_ac.bin","rb");
        arq_resultado_ac = fopen("arq_candidato_ac.bin","ab");
        arq_zona_ac = fopen("arq_zona_ac.bin", "rb");
        arq_secao_ac = fopen("arq_secao_ac.bin", "rb");
        arq_mun_ac = fopen("arq_mun_ac.bin", "rb");
        arq_candidato_ac = fopen("arq_candidato_ac.bin","rb");

        if (arq_zona_ac != NULL || arq_secao_ac != NULL || arq_mun_ac != NULL || arq_candidato_ac != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&ac, sizeof(struct municipio), 1, arq_mun_ac)) {
                if (!(strcmp(ac.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&ac_zona, sizeof(struct info_zona), 1, arq_zona_ac)) {
                        if (ac_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&ac_secao, sizeof(struct info_secao), 1, arq_secao_ac)) {
                                if (ac_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_ac != NULL){
                                        do{
                                            fread(&ac_v, sizeof(struct voto), 1, arq_voto_ac);

                                            if(i == 0){
                                                maior = ac_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < ac_v.numeros_votos){
                                                    maior = ac_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }
                                            /*

                                            printf("\nMunicipio: %s -- ",ac_v.municipio);
                                            printf("Nome do Candidato: %s -- ",ac_v.nome_candidato);
                                            printf("Partido: %s -- ",ac_v.sigla_partido);
                                            printf("Quantidade de votos: %ld ",ac_v.numeros_votos);
                                             */

                                        }while (!feof(arq_voto_ac));

                                        do{
                                            fread(&ac_v, sizeof(struct voto), 1, arq_voto_ac);
                                            if(maior == ac_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",ac_v.municipio);
                                                printf("Nome do Candidato: %s -- ",ac_v.nome_candidato);
                                                printf("Partido: %s -- ",ac_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",ac_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_ac));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_ac);
        fclose(arq_secao_ac);
        fclose(arq_mun_ac);
        fclose(arq_candidato_ac);
        fclose(arq_voto_ac);
        fclose(arq_resultado_ac);
    }


    else if(!(strcmp(cad_dados,"AL"))) {

        FILE *arq_zona_al;
        FILE *arq_secao_al;
        FILE *arq_mun_al;
        FILE *arq_candidato_al;
        FILE *arq_voto_al;
        FILE *arq_resultado_al;

        arq_voto_al = fopen("arq_voto_al.bin","rb");
        arq_resultado_al = fopen("arq_candidato_al.bin","ab");
        arq_zona_al = fopen("arq_zona_al.bin", "rb");
        arq_secao_al = fopen("arq_secao_al.bin", "rb");
        arq_mun_al = fopen("arq_mun_al.bin", "rb");
        arq_candidato_al = fopen("arq_candidato_al.bin","rb");

        if (arq_zona_al != NULL || arq_secao_al != NULL || arq_mun_al != NULL || arq_candidato_al != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&al, sizeof(struct municipio), 1, arq_mun_al)) {
                if (!(strcmp(al.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&al_zona, sizeof(struct info_zona), 1, arq_zona_al)) {
                        if (al_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&al_secao, sizeof(struct info_secao), 1, arq_secao_al)) {
                                if (al_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_al != NULL){
                                        do{
                                            fread(&al_v, sizeof(struct voto), 1, arq_voto_al);

                                            if(i == 0){
                                                maior = al_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < al_v.numeros_votos){
                                                    maior = al_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_al));

                                        do{
                                            fread(&al_v, sizeof(struct voto), 1, arq_voto_al);
                                            if(maior == al_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",al_v.municipio);
                                                printf("Nome do Candidato: %s -- ",al_v.nome_candidato);
                                                printf("Partido: %s -- ",al_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",al_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_al));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_al);
        fclose(arq_secao_al);
        fclose(arq_mun_al);
        fclose(arq_candidato_al);
        fclose(arq_voto_al);
        fclose(arq_resultado_al);
    }

    else if(!(strcmp(cad_dados,"AP"))) {

        FILE *arq_zona_ap;
        FILE *arq_secao_ap;
        FILE *arq_mun_ap;
        FILE *arq_candidato_ap;
        FILE *arq_voto_ap;
        FILE *arq_resultado_ap;

        arq_voto_ap = fopen("arq_voto_ap.bin","rb");
        arq_resultado_ap = fopen("arq_candidato_ap.bin","ab");
        arq_zona_ap = fopen("arq_zona_ap.bin", "rb");
        arq_secao_ap = fopen("arq_secao_ap.bin", "rb");
        arq_mun_ap = fopen("arq_mun_ap.bin", "rb");
        arq_candidato_ap = fopen("arq_candidato_ap.bin","rb");

        if (arq_zona_ap != NULL || arq_secao_ap != NULL || arq_mun_ap != NULL || arq_candidato_ap != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&ap, sizeof(struct municipio), 1, arq_mun_ap)) {
                if (!(strcmp(ap.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&ap_zona, sizeof(struct info_zona), 1, arq_zona_ap)) {
                        if (ap_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&ap_secao, sizeof(struct info_secao), 1, arq_secao_ap)) {
                                if (ap_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_ap != NULL){
                                        do{
                                            fread(&ap_v, sizeof(struct voto), 1, arq_voto_ap);

                                            if(i == 0){
                                                maior = ap_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < ap_v.numeros_votos){
                                                    maior = ap_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_ap));

                                        do{
                                            fread(&ap_v, sizeof(struct voto), 1, arq_voto_ap);
                                            if(maior == ap_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",ap_v.municipio);
                                                printf("Nome do Candidato: %s -- ",ap_v.nome_candidato);
                                                printf("Partido: %s -- ",ap_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",ap_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_ap));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_ap);
        fclose(arq_secao_ap);
        fclose(arq_mun_ap);
        fclose(arq_candidato_ap);
        fclose(arq_voto_ap);
        fclose(arq_resultado_ap);
    }

    else if(!(strcmp(cad_dados,"AM"))) {

        FILE *arq_zona_am;
        FILE *arq_secao_am;
        FILE *arq_mun_am;
        FILE *arq_candidato_am;
        FILE *arq_voto_am;
        FILE *arq_resultado_am;

        arq_voto_am = fopen("arq_voto_am.bin","rb");
        arq_resultado_am = fopen("arq_candidato_am.bin","ab");
        arq_zona_am = fopen("arq_zona_am.bin", "rb");
        arq_secao_am = fopen("arq_secao_am.bin", "rb");
        arq_mun_am = fopen("arq_mun_am.bin", "rb");
        arq_candidato_am = fopen("arq_candidato_am.bin","rb");

        if (arq_zona_am != NULL || arq_secao_am != NULL || arq_mun_am != NULL || arq_candidato_am != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&am, sizeof(struct municipio), 1, arq_mun_am)) {
                if (!(strcmp(am.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&am_zona, sizeof(struct info_zona), 1, arq_zona_am)) {
                        if (am_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&am_secao, sizeof(struct info_secao), 1, arq_secao_am)) {
                                if (am_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_am != NULL){
                                        do{
                                            fread(&am_v, sizeof(struct voto), 1, arq_voto_am);

                                            if(i == 0){
                                                maior = am_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < am_v.numeros_votos){
                                                    maior = am_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_am));

                                        do{
                                            fread(&am_v, sizeof(struct voto), 1, arq_voto_am);
                                            if(maior == am_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",am_v.municipio);
                                                printf("Nome do Candidato: %s -- ",am_v.nome_candidato);
                                                printf("Partido: %s -- ",am_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",am_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_am));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_am);
        fclose(arq_secao_am);
        fclose(arq_mun_am);
        fclose(arq_candidato_am);
        fclose(arq_voto_am);
        fclose(arq_resultado_am);
    }

    else if(!(strcmp(cad_dados,"BA"))) {

        FILE *arq_zona_ba;
        FILE *arq_secao_ba;
        FILE *arq_mun_ba;
        FILE *arq_candidato_ba;
        FILE *arq_voto_ba;
        FILE *arq_resultado_ba;

        arq_voto_ba = fopen("arq_voto_ba.bin","rb");
        arq_resultado_ba = fopen("arq_candidato_ba.bin","ab");
        arq_zona_ba = fopen("arq_zona_ba.bin", "rb");
        arq_secao_ba = fopen("arq_secao_ba.bin", "rb");
        arq_mun_ba = fopen("arq_mun_ba.bin", "rb");
        arq_candidato_ba = fopen("arq_candidato_ba.bin","rb");

        if (arq_zona_ba != NULL || arq_secao_ba != NULL || arq_mun_ba != NULL || arq_candidato_ba != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&ba, sizeof(struct municipio), 1, arq_mun_ba)) {
                if (!(strcmp(ba.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&ba_zona, sizeof(struct info_zona), 1, arq_zona_ba)) {
                        if (ba_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&ba_secao, sizeof(struct info_secao), 1, arq_secao_ba)) {
                                if (ba_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_ba != NULL){
                                        do{
                                            fread(&ba_v, sizeof(struct voto), 1, arq_voto_ba);

                                            if(i == 0){
                                                maior = ba_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < ba_v.numeros_votos){
                                                    maior = ba_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_ba));

                                        do{
                                            fread(&ba_v, sizeof(struct voto), 1, arq_voto_ba);
                                            if(maior == ba_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",ba_v.municipio);
                                                printf("Nome do Candidato: %s -- ",ba_v.nome_candidato);
                                                printf("Partido: %s -- ",ba_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",ba_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_ba));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_ba);
        fclose(arq_secao_ba);
        fclose(arq_mun_ba);
        fclose(arq_candidato_ba);
        fclose(arq_voto_ba);
        fclose(arq_resultado_ba);
    }

    else if(!(strcmp(cad_dados,"CE"))) {

        FILE *arq_zona_ce;
        FILE *arq_secao_ce;
        FILE *arq_mun_ce;
        FILE *arq_candidato_ce;
        FILE *arq_voto_ce;
        FILE *arq_resultado_ce;

        arq_voto_ce = fopen("arq_voto_ce.bin","rb");
        arq_resultado_ce = fopen("arq_candidato_ce.bin","ab");
        arq_zona_ce = fopen("arq_zona_ce.bin", "rb");
        arq_secao_ce = fopen("arq_secao_ce.bin", "rb");
        arq_mun_ce = fopen("arq_mun_ce.bin", "rb");
        arq_candidato_ce = fopen("arq_candidato_ce.bin","rb");

        if (arq_zona_ce != NULL || arq_secao_ce != NULL || arq_mun_ce != NULL || arq_candidato_ce != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&ce, sizeof(struct municipio), 1, arq_mun_ce)) {
                if (!(strcmp(ce.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&ce_zona, sizeof(struct info_zona), 1, arq_zona_ce)) {
                        if (ce_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&ce_secao, sizeof(struct info_secao), 1, arq_secao_ce)) {
                                if (ce_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_ce != NULL){
                                        do{
                                            fread(&ce_v, sizeof(struct voto), 1, arq_voto_ce);

                                            if(i == 0){
                                                maior = ce_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < ce_v.numeros_votos){
                                                    maior = ce_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_ce));

                                        do{
                                            fread(&ce_v, sizeof(struct voto), 1, arq_voto_ce);
                                            if(maior == ce_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",ce_v.municipio);
                                                printf("Nome do Candidato: %s -- ",ce_v.nome_candidato);
                                                printf("Partido: %s -- ",ce_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",ce_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_ce));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_ce);
        fclose(arq_secao_ce);
        fclose(arq_mun_ce);
        fclose(arq_candidato_ce);
        fclose(arq_voto_ce);
        fclose(arq_resultado_ce);
    }

    else if(!(strcmp(cad_dados,"ES"))) {

        FILE *arq_zona_es;
        FILE *arq_secao_es;
        FILE *arq_mun_es;
        FILE *arq_candidato_es;
        FILE *arq_voto_es;
        FILE *arq_resultado_es;

        arq_voto_es = fopen("arq_voto_es.bin","rb");
        arq_resultado_es = fopen("arq_candidato_es.bin","ab");
        arq_zona_es = fopen("arq_zona_es.bin", "rb");
        arq_secao_es = fopen("arq_secao_es.bin", "rb");
        arq_mun_es = fopen("arq_mun_es.bin", "rb");
        arq_candidato_es = fopen("arq_candidato_es.bin","rb");

        if (arq_zona_es != NULL || arq_secao_es != NULL || arq_mun_es != NULL || arq_candidato_es != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&es, sizeof(struct municipio), 1, arq_mun_es)) {
                if (!(strcmp(es.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&es_zona, sizeof(struct info_zona), 1, arq_zona_es)) {
                        if (es_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&es_secao, sizeof(struct info_secao), 1, arq_secao_es)) {
                                if (es_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_es != NULL){
                                        do{
                                            fread(&es_v, sizeof(struct voto), 1, arq_voto_es);

                                            if(i == 0){
                                                maior = es_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < es_v.numeros_votos){
                                                    maior = es_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_es));

                                        do{
                                            fread(&es_v, sizeof(struct voto), 1, arq_voto_es);
                                            if(maior == es_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",es_v.municipio);
                                                printf("Nome do Candidato: %s -- ",es_v.nome_candidato);
                                                printf("Partido: %s -- ",es_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",es_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_es));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_es);
        fclose(arq_secao_es);
        fclose(arq_mun_es);
        fclose(arq_candidato_es);
        fclose(arq_voto_es);
        fclose(arq_resultado_es);
    }

    else if(!(strcmp(cad_dados,"GO"))) {

        FILE *arq_zona_go;
        FILE *arq_secao_go;
        FILE *arq_mun_go;
        FILE *arq_candidato_go;
        FILE *arq_voto_go;
        FILE *arq_resultado_go;

        arq_voto_go = fopen("arq_voto_go.bin","rb");
        arq_resultado_go = fopen("arq_candidato_go.bin","ab");
        arq_zona_go = fopen("arq_zona_go.bin", "rb");
        arq_secao_go = fopen("arq_secao_go.bin", "rb");
        arq_mun_go = fopen("arq_mun_go.bin", "rb");
        arq_candidato_go = fopen("arq_candidato_go.bin","rb");

        if (arq_zona_go != NULL || arq_secao_go != NULL || arq_mun_go != NULL || arq_candidato_go != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&go, sizeof(struct municipio), 1, arq_mun_go)) {
                if (!(strcmp(go.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&go_zona, sizeof(struct info_zona), 1, arq_zona_go)) {
                        if (go_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&go_secao, sizeof(struct info_secao), 1, arq_secao_go)) {
                                if (go_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_go != NULL){
                                        do{
                                            fread(&go_v, sizeof(struct voto), 1, arq_voto_go);

                                            if(i == 0){
                                                maior = go_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < go_v.numeros_votos){
                                                    maior = go_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_go));

                                        do{
                                            fread(&go_v, sizeof(struct voto), 1, arq_voto_go);
                                            if(maior == go_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",go_v.municipio);
                                                printf("Nome do Candidato: %s -- ",go_v.nome_candidato);
                                                printf("Partido: %s -- ",go_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",go_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_go));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_go);
        fclose(arq_secao_go);
        fclose(arq_mun_go);
        fclose(arq_candidato_go);
        fclose(arq_voto_go);
        fclose(arq_resultado_go);
    }

    else if(!(strcmp(cad_dados,"MA"))) {

        FILE *arq_zona_ma;
        FILE *arq_secao_ma;
        FILE *arq_mun_ma;
        FILE *arq_candidato_ma;
        FILE *arq_voto_ma;
        FILE *arq_resultado_ma;

        arq_voto_ma = fopen("arq_voto_ma.bin","rb");
        arq_resultado_ma = fopen("arq_candidato_ma.bin","ab");
        arq_zona_ma = fopen("arq_zona_ma.bin", "rb");
        arq_secao_ma = fopen("arq_secao_ma.bin", "rb");
        arq_mun_ma = fopen("arq_mun_ma.bin", "rb");
        arq_candidato_ma = fopen("arq_candidato_ma.bin","rb");

        if (arq_zona_ma != NULL || arq_secao_ma != NULL || arq_mun_ma != NULL || arq_candidato_ma != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&ma, sizeof(struct municipio), 1, arq_mun_ma)) {
                if (!(strcmp(ma.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&ma_zona, sizeof(struct info_zona), 1, arq_zona_ma)) {
                        if (ma_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&ma_secao, sizeof(struct info_secao), 1, arq_secao_ma)) {
                                if (ma_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_ma != NULL){
                                        do{
                                            fread(&ma_v, sizeof(struct voto), 1, arq_voto_ma);

                                            if(i == 0){
                                                maior = ma_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < ma_v.numeros_votos){
                                                    maior = ma_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_ma));

                                        do{
                                            fread(&ma_v, sizeof(struct voto), 1, arq_voto_ma);
                                            if(maior == ma_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",ma_v.municipio);
                                                printf("Nome do Candidato: %s -- ",ma_v.nome_candidato);
                                                printf("Partido: %s -- ",ma_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",ma_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_ma));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_ma);
        fclose(arq_secao_ma);
        fclose(arq_mun_ma);
        fclose(arq_candidato_ma);
        fclose(arq_voto_ma);
        fclose(arq_resultado_ma);
    }

    else if(!(strcmp(cad_dados,"MT"))) {

        FILE *arq_zona_mt;
        FILE *arq_secao_mt;
        FILE *arq_mun_mt;
        FILE *arq_candidato_mt;
        FILE *arq_voto_mt;
        FILE *arq_resultado_mt;

        arq_voto_mt = fopen("arq_voto_mt.bin","rb");
        arq_resultado_mt = fopen("arq_candidato_mt.bin","ab");
        arq_zona_mt = fopen("arq_zona_mt.bin", "rb");
        arq_secao_mt = fopen("arq_secao_mt.bin", "rb");
        arq_mun_mt = fopen("arq_mun_mt.bin", "rb");
        arq_candidato_mt = fopen("arq_candidato_mt.bin","rb");

        if (arq_zona_mt != NULL || arq_secao_mt != NULL || arq_mun_mt != NULL || arq_candidato_mt != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&mt, sizeof(struct municipio), 1, arq_mun_mt)) {
                if (!(strcmp(mt.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&mt_zona, sizeof(struct info_zona), 1, arq_zona_mt)) {
                        if (mt_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&mt_secao, sizeof(struct info_secao), 1, arq_secao_mt)) {
                                if (mt_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_mt != NULL){
                                        do{
                                            fread(&mt_v, sizeof(struct voto), 1, arq_voto_mt);

                                            if(i == 0){
                                                maior = mt_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < mt_v.numeros_votos){
                                                    maior = mt_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_mt));

                                        do{
                                            fread(&mt_v, sizeof(struct voto), 1, arq_voto_mt);
                                            if(maior == mt_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",mt_v.municipio);
                                                printf("Nome do Candidato: %s -- ",mt_v.nome_candidato);
                                                printf("Partido: %s -- ",mt_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",mt_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_mt));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_mt);
        fclose(arq_secao_mt);
        fclose(arq_mun_mt);
        fclose(arq_candidato_mt);
        fclose(arq_voto_mt);
        fclose(arq_resultado_mt);
    }

    else if(!(strcmp(cad_dados,"MS"))) {

        FILE *arq_zona_ms;
        FILE *arq_secao_ms;
        FILE *arq_mun_ms;
        FILE *arq_candidato_ms;
        FILE *arq_voto_ms;
        FILE *arq_resultado_ms;

        arq_voto_ms = fopen("arq_voto_ms.bin","rb");
        arq_resultado_ms = fopen("arq_candidato_ms.bin","ab");
        arq_zona_ms = fopen("arq_zona_ms.bin", "rb");
        arq_secao_ms = fopen("arq_secao_ms.bin", "rb");
        arq_mun_ms = fopen("arq_mun_ms.bin", "rb");
        arq_candidato_ms = fopen("arq_candidato_ms.bin","rb");

        if (arq_zona_ms != NULL || arq_secao_ms != NULL || arq_mun_ms != NULL || arq_candidato_ms != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&ms, sizeof(struct municipio), 1, arq_mun_ms)) {
                if (!(strcmp(ms.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&ms_zona, sizeof(struct info_zona), 1, arq_zona_ms)) {
                        if (ms_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&ms_secao, sizeof(struct info_secao), 1, arq_secao_ms)) {
                                if (ms_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_ms != NULL){
                                        do{
                                            fread(&ms_v, sizeof(struct voto), 1, arq_voto_ms);

                                            if(i == 0){
                                                maior = ms_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < ms_v.numeros_votos){
                                                    maior = ms_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_ms));

                                        do{
                                            fread(&ms_v, sizeof(struct voto), 1, arq_voto_ms);
                                            if(maior == ms_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",ms_v.municipio);
                                                printf("Nome do Candidato: %s -- ",ms_v.nome_candidato);
                                                printf("Partido: %s -- ",ms_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",ms_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_ms));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_ms);
        fclose(arq_secao_ms);
        fclose(arq_mun_ms);
        fclose(arq_candidato_ms);
        fclose(arq_voto_ms);
        fclose(arq_resultado_ms);
    }

    else if(!(strcmp(cad_dados,"MG"))) {

        FILE *arq_zona_mg;
        FILE *arq_secao_mg;
        FILE *arq_mun_mg;
        FILE *arq_candidato_mg;
        FILE *arq_voto_mg;
        FILE *arq_resultado_mg;

        arq_voto_mg = fopen("arq_voto_mg.bin","rb");
        arq_resultado_mg = fopen("arq_candidato_mg.bin","ab");
        arq_zona_mg = fopen("arq_zona_mg.bin", "rb");
        arq_secao_mg = fopen("arq_secao_mg.bin", "rb");
        arq_mun_mg = fopen("arq_mun_mg.bin", "rb");
        arq_candidato_mg = fopen("arq_candidato_mg.bin","rb");

        if (arq_zona_mg != NULL || arq_secao_mg != NULL || arq_mun_mg != NULL || arq_candidato_mg != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&mg, sizeof(struct municipio), 1, arq_mun_mg)) {
                if (!(strcmp(mg.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&mg_zona, sizeof(struct info_zona), 1, arq_zona_mg)) {
                        if (mg_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&mg_secao, sizeof(struct info_secao), 1, arq_secao_mg)) {
                                if (mg_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_mg != NULL){
                                        do{
                                            fread(&mg_v, sizeof(struct voto), 1, arq_voto_mg);

                                            if(i == 0){
                                                maior = mg_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < mg_v.numeros_votos){
                                                    maior = mg_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_mg));

                                        do{
                                            fread(&mg_v, sizeof(struct voto), 1, arq_voto_mg);
                                            if(maior == mg_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",mg_v.municipio);
                                                printf("Nome do Candidato: %s -- ",mg_v.nome_candidato);
                                                printf("Partido: %s -- ",mg_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",mg_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_mg));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_mg);
        fclose(arq_secao_mg);
        fclose(arq_mun_mg);
        fclose(arq_candidato_mg);
        fclose(arq_voto_mg);
        fclose(arq_resultado_mg);
    }

    else if(!(strcmp(cad_dados,"PA"))) {

        FILE *arq_zona_pa;
        FILE *arq_secao_pa;
        FILE *arq_mun_pa;
        FILE *arq_candidato_pa;
        FILE *arq_voto_pa;
        FILE *arq_resultado_pa;

        arq_voto_pa = fopen("arq_voto_pa.bin","rb");
        arq_resultado_pa = fopen("arq_candidato_pa.bin","ab");
        arq_zona_pa = fopen("arq_zona_pa.bin", "rb");
        arq_secao_pa = fopen("arq_secao_pa.bin", "rb");
        arq_mun_pa = fopen("arq_mun_pa.bin", "rb");
        arq_candidato_pa = fopen("arq_candidato_pa.bin","rb");

        if (arq_zona_pa != NULL || arq_secao_pa != NULL || arq_mun_pa != NULL || arq_candidato_pa != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&pa, sizeof(struct municipio), 1, arq_mun_pa)) {
                if (!(strcmp(pa.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&pa_zona, sizeof(struct info_zona), 1, arq_zona_pa)) {
                        if (pa_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&pa_secao, sizeof(struct info_secao), 1, arq_secao_pa)) {
                                if (pa_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_pa != NULL){
                                        do{
                                            fread(&pa_v, sizeof(struct voto), 1, arq_voto_pa);

                                            if(i == 0){
                                                maior = pa_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < pa_v.numeros_votos){
                                                    maior = pa_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_pa));

                                        do{
                                            fread(&pa_v, sizeof(struct voto), 1, arq_voto_pa);
                                            if(maior == pa_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",pa_v.municipio);
                                                printf("Nome do Candidato: %s -- ",pa_v.nome_candidato);
                                                printf("Partido: %s -- ",pa_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",pa_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_pa));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_pa);
        fclose(arq_secao_pa);
        fclose(arq_mun_pa);
        fclose(arq_candidato_pa);
        fclose(arq_voto_pa);
        fclose(arq_resultado_pa);
    }

    else if(!(strcmp(cad_dados,"PB"))) {

        FILE *arq_zona_pb;
        FILE *arq_secao_pb;
        FILE *arq_mun_pb;
        FILE *arq_candidato_pb;
        FILE *arq_voto_pb;
        FILE *arq_resultado_pb;

        arq_voto_pb = fopen("arq_voto_pb.bin","rb");
        arq_resultado_pb = fopen("arq_candidato_pb.bin","ab");
        arq_zona_pb = fopen("arq_zona_pb.bin", "rb");
        arq_secao_pb = fopen("arq_secao_pb.bin", "rb");
        arq_mun_pb = fopen("arq_mun_pb.bin", "rb");
        arq_candidato_pb = fopen("arq_candidato_pb.bin","rb");

        if (arq_zona_pb != NULL || arq_secao_pb != NULL || arq_mun_pb != NULL || arq_candidato_pb != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&pb, sizeof(struct municipio), 1, arq_mun_pb)) {
                if (!(strcmp(pb.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&pb_zona, sizeof(struct info_zona), 1, arq_zona_pb)) {
                        if (pb_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&pb_secao, sizeof(struct info_secao), 1, arq_secao_pb)) {
                                if (pb_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_pb != NULL){
                                        do{
                                            fread(&pb_v, sizeof(struct voto), 1, arq_voto_pb);

                                            if(i == 0){
                                                maior = pb_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < pb_v.numeros_votos){
                                                    maior = pb_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_pb));

                                        do{
                                            fread(&pb_v, sizeof(struct voto), 1, arq_voto_pb);
                                            if(maior == pb_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",pb_v.municipio);
                                                printf("Nome do Candidato: %s -- ",pb_v.nome_candidato);
                                                printf("Partido: %s -- ",pb_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",pb_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_pb));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_pb);
        fclose(arq_secao_pb);
        fclose(arq_mun_pb);
        fclose(arq_candidato_pb);
        fclose(arq_voto_pb);
        fclose(arq_resultado_pb);
    }

    else if(!(strcmp(cad_dados,"PR"))) {

        FILE *arq_zona_pr;
        FILE *arq_secao_pr;
        FILE *arq_mun_pr;
        FILE *arq_candidato_pr;
        FILE *arq_voto_pr;
        FILE *arq_resultado_pr;

        arq_voto_pr = fopen("arq_voto_pr.bin","rb");
        arq_resultado_pr = fopen("arq_candidato_pr.bin","ab");
        arq_zona_pr = fopen("arq_zona_pr.bin", "rb");
        arq_secao_pr = fopen("arq_secao_pr.bin", "rb");
        arq_mun_pr = fopen("arq_mun_pr.bin", "rb");
        arq_candidato_pr = fopen("arq_candidato_pr.bin","rb");

        if (arq_zona_pr != NULL || arq_secao_pr != NULL || arq_mun_pr != NULL || arq_candidato_pr != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&pr, sizeof(struct municipio), 1, arq_mun_pr)) {
                if (!(strcmp(pr.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&pr_zona, sizeof(struct info_zona), 1, arq_zona_pr)) {
                        if (pr_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&pr_secao, sizeof(struct info_secao), 1, arq_secao_pr)) {
                                if (pr_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_pr != NULL){
                                        do{
                                            fread(&pr_v, sizeof(struct voto), 1, arq_voto_pr);

                                            if(i == 0){
                                                maior = pr_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < pr_v.numeros_votos){
                                                    maior = pr_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_pr));

                                        do{
                                            fread(&pr_v, sizeof(struct voto), 1, arq_voto_pr);
                                            if(maior == pr_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",pr_v.municipio);
                                                printf("Nome do Candidato: %s -- ",pr_v.nome_candidato);
                                                printf("Partido: %s -- ",pr_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",pr_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_pr));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_pr);
        fclose(arq_secao_pr);
        fclose(arq_mun_pr);
        fclose(arq_candidato_pr);
        fclose(arq_voto_pr);
        fclose(arq_resultado_pr);
    }

    else if(!(strcmp(cad_dados,"PE"))) {

        FILE *arq_zona_pe;
        FILE *arq_secao_pe;
        FILE *arq_mun_pe;
        FILE *arq_candidato_pe;
        FILE *arq_voto_pe;
        FILE *arq_resultado_pe;

        arq_voto_pe = fopen("arq_voto_pe.bin","rb");
        arq_resultado_pe = fopen("arq_candidato_pe.bin","ab");
        arq_zona_pe = fopen("arq_zona_pe.bin", "rb");
        arq_secao_pe = fopen("arq_secao_pe.bin", "rb");
        arq_mun_pe = fopen("arq_mun_pe.bin", "rb");
        arq_candidato_pe = fopen("arq_candidato_pe.bin","rb");

        if (arq_zona_pe != NULL || arq_secao_pe != NULL || arq_mun_pe != NULL || arq_candidato_pe != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&pe, sizeof(struct municipio), 1, arq_mun_pe)) {
                if (!(strcmp(pe.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&pe_zona, sizeof(struct info_zona), 1, arq_zona_pe)) {
                        if (pe_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&pe_secao, sizeof(struct info_secao), 1, arq_secao_pe)) {
                                if (pe_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_pe != NULL){
                                        do{
                                            fread(&pe_v, sizeof(struct voto), 1, arq_voto_pe);

                                            if(i == 0){
                                                maior = pe_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < pe_v.numeros_votos){
                                                    maior = pe_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_pe));

                                        do{
                                            fread(&pe_v, sizeof(struct voto), 1, arq_voto_pe);
                                            if(maior == pe_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",pe_v.municipio);
                                                printf("Nome do Candidato: %s -- ",pe_v.nome_candidato);
                                                printf("Partido: %s -- ",pe_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",pe_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_pe));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_pe);
        fclose(arq_secao_pe);
        fclose(arq_mun_pe);
        fclose(arq_candidato_pe);
        fclose(arq_voto_pe);
        fclose(arq_resultado_pe);
    }

    else if(!(strcmp(cad_dados,"PI"))) {

        FILE *arq_zona_pi;
        FILE *arq_secao_pi;
        FILE *arq_mun_pi;
        FILE *arq_candidato_pi;
        FILE *arq_voto_pi;
        FILE *arq_resultado_pi;

        arq_voto_pi = fopen("arq_voto_pi.bin","rb");
        arq_resultado_pi = fopen("arq_candidato_pi.bin","ab");
        arq_zona_pi = fopen("arq_zona_pi.bin", "rb");
        arq_secao_pi = fopen("arq_secao_pi.bin", "rb");
        arq_mun_pi = fopen("arq_mun_pi.bin", "rb");
        arq_candidato_pi = fopen("arq_candidato_pi.bin","rb");

        if (arq_zona_pi != NULL || arq_secao_pi != NULL || arq_mun_pi != NULL || arq_candidato_pi != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&pi, sizeof(struct municipio), 1, arq_mun_pi)) {
                if (!(strcmp(pi.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&pi_zona, sizeof(struct info_zona), 1, arq_zona_pi)) {
                        if (pi_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&pi_secao, sizeof(struct info_secao), 1, arq_secao_pi)) {
                                if (pi_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_pi != NULL){
                                        do{
                                            fread(&pi_v, sizeof(struct voto), 1, arq_voto_pi);

                                            if(i == 0){
                                                maior = pi_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < pi_v.numeros_votos){
                                                    maior = pi_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_pi));

                                        do{
                                            fread(&pi_v, sizeof(struct voto), 1, arq_voto_pi);
                                            if(maior == pi_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",pi_v.municipio);
                                                printf("Nome do Candidato: %s -- ",pi_v.nome_candidato);
                                                printf("Partido: %s -- ",pi_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",pi_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_pi));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_pi);
        fclose(arq_secao_pi);
        fclose(arq_mun_pi);
        fclose(arq_candidato_pi);
        fclose(arq_voto_pi);
        fclose(arq_resultado_pi);
    }

    else if(!(strcmp(cad_dados,"RJ"))) {

        FILE *arq_zona_rj;
        FILE *arq_secao_rj;
        FILE *arq_mun_rj;
        FILE *arq_candidato_rj;
        FILE *arq_voto_rj;
        FILE *arq_resultado_rj;

        arq_voto_rj = fopen("arq_voto_rj.bin","rb");
        arq_resultado_rj = fopen("arq_candidato_rj.bin","ab");
        arq_zona_rj = fopen("arq_zona_rj.bin", "rb");
        arq_secao_rj = fopen("arq_secao_rj.bin", "rb");
        arq_mun_rj = fopen("arq_mun_rj.bin", "rb");
        arq_candidato_rj = fopen("arq_candidato_rj.bin","rb");

        if (arq_zona_rj != NULL || arq_secao_rj != NULL || arq_mun_rj != NULL || arq_candidato_rj != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&rj, sizeof(struct municipio), 1, arq_mun_rj)) {
                if (!(strcmp(rj.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&rj_zona, sizeof(struct info_zona), 1, arq_zona_rj)) {
                        if (rj_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&rj_secao, sizeof(struct info_secao), 1, arq_secao_rj)) {
                                if (rj_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_rj != NULL){
                                        do{
                                            fread(&rj_v, sizeof(struct voto), 1, arq_voto_rj);

                                            if(i == 0){
                                                maior = rj_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < rj_v.numeros_votos){
                                                    maior = rj_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_rj));

                                        do{
                                            fread(&rj_v, sizeof(struct voto), 1, arq_voto_rj);
                                            if(maior == rj_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",rj_v.municipio);
                                                printf("Nome do Candidato: %s -- ",rj_v.nome_candidato);
                                                printf("Partido: %s -- ",rj_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",rj_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_rj));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_rj);
        fclose(arq_secao_rj);
        fclose(arq_mun_rj);
        fclose(arq_candidato_rj);
        fclose(arq_voto_rj);
        fclose(arq_resultado_rj);
    }

    else if(!(strcmp(cad_dados,"RN"))) {

        FILE *arq_zona_rn;
        FILE *arq_secao_rn;
        FILE *arq_mun_rn;
        FILE *arq_candidato_rn;
        FILE *arq_voto_rn;
        FILE *arq_resultado_rn;

        arq_voto_rn = fopen("arq_voto_rn.bin","rb");
        arq_resultado_rn = fopen("arq_candidato_rn.bin","ab");
        arq_zona_rn = fopen("arq_zona_rn.bin", "rb");
        arq_secao_rn = fopen("arq_secao_rn.bin", "rb");
        arq_mun_rn = fopen("arq_mun_rn.bin", "rb");
        arq_candidato_rn = fopen("arq_candidato_rn.bin","rb");

        if (arq_zona_rn != NULL || arq_secao_rn != NULL || arq_mun_rn != NULL || arq_candidato_rn != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&rn, sizeof(struct municipio), 1, arq_mun_rn)) {
                if (!(strcmp(rn.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&rn_zona, sizeof(struct info_zona), 1, arq_zona_rn)) {
                        if (rn_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&rn_secao, sizeof(struct info_secao), 1, arq_secao_rn)) {
                                if (rn_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_rn != NULL){
                                        do{
                                            fread(&rn_v, sizeof(struct voto), 1, arq_voto_rn);

                                            if(i == 0){
                                                maior = rn_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < rn_v.numeros_votos){
                                                    maior = rn_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_rn));

                                        do{
                                            fread(&rn_v, sizeof(struct voto), 1, arq_voto_rn);
                                            if(maior == rn_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",rn_v.municipio);
                                                printf("Nome do Candidato: %s -- ",rn_v.nome_candidato);
                                                printf("Partido: %s -- ",rn_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",rn_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_rn));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_rn);
        fclose(arq_secao_rn);
        fclose(arq_mun_rn);
        fclose(arq_candidato_rn);
        fclose(arq_voto_rn);
        fclose(arq_resultado_rn);
    }

    else if(!(strcmp(cad_dados,"RS"))) {

        FILE *arq_zona_rs;
        FILE *arq_secao_rs;
        FILE *arq_mun_rs;
        FILE *arq_candidato_rs;
        FILE *arq_voto_rs;
        FILE *arq_resultado_rs;

        arq_voto_rs = fopen("arq_voto_rs.bin","rb");
        arq_resultado_rs = fopen("arq_candidato_rs.bin","ab");
        arq_zona_rs = fopen("arq_zona_rs.bin", "rb");
        arq_secao_rs = fopen("arq_secao_rs.bin", "rb");
        arq_mun_rs = fopen("arq_mun_rs.bin", "rb");
        arq_candidato_rs = fopen("arq_candidato_rs.bin","rb");

        if (arq_zona_rs != NULL || arq_secao_rs != NULL || arq_mun_rs != NULL || arq_candidato_rs != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&rs, sizeof(struct municipio), 1, arq_mun_rs)) {
                if (!(strcmp(rs.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&rs_zona, sizeof(struct info_zona), 1, arq_zona_rs)) {
                        if (rs_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&rs_secao, sizeof(struct info_secao), 1, arq_secao_rs)) {
                                if (rs_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_rs != NULL){
                                        do{
                                            fread(&rs_v, sizeof(struct voto), 1, arq_voto_rs);

                                            if(i == 0){
                                                maior = rs_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < rs_v.numeros_votos){
                                                    maior = rs_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_rs));

                                        do{
                                            fread(&rs_v, sizeof(struct voto), 1, arq_voto_rs);
                                            if(maior == rs_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",rs_v.municipio);
                                                printf("Nome do Candidato: %s -- ",rs_v.nome_candidato);
                                                printf("Partido: %s -- ",rs_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",rs_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_rs));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_rs);
        fclose(arq_secao_rs);
        fclose(arq_mun_rs);
        fclose(arq_candidato_rs);
        fclose(arq_voto_rs);
        fclose(arq_resultado_rs);
    }

    else if(!(strcmp(cad_dados,"RO"))) {

        FILE *arq_zona_ro;
        FILE *arq_secao_ro;
        FILE *arq_mun_ro;
        FILE *arq_candidato_ro;
        FILE *arq_voto_ro;
        FILE *arq_resultado_ro;

        arq_voto_ro = fopen("arq_voto_ro.bin","rb");
        arq_resultado_ro = fopen("arq_candidato_ro.bin","ab");
        arq_zona_ro = fopen("arq_zona_ro.bin", "rb");
        arq_secao_ro = fopen("arq_secao_ro.bin", "rb");
        arq_mun_ro = fopen("arq_mun_ro.bin", "rb");
        arq_candidato_ro = fopen("arq_candidato_ro.bin","rb");

        if (arq_zona_ro != NULL || arq_secao_ro != NULL || arq_mun_ro != NULL || arq_candidato_ro != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&ro, sizeof(struct municipio), 1, arq_mun_ro)) {
                if (!(strcmp(ro.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&ro_zona, sizeof(struct info_zona), 1, arq_zona_ro)) {
                        if (ro_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&ro_secao, sizeof(struct info_secao), 1, arq_secao_ro)) {
                                if (ro_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_ro != NULL){
                                        do{
                                            fread(&ro_v, sizeof(struct voto), 1, arq_voto_ro);

                                            if(i == 0){
                                                maior = ro_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < ro_v.numeros_votos){
                                                    maior = ro_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_ro));

                                        do{
                                            fread(&ro_v, sizeof(struct voto), 1, arq_voto_ro);
                                            if(maior == ro_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",ro_v.municipio);
                                                printf("Nome do Candidato: %s -- ",ro_v.nome_candidato);
                                                printf("Partido: %s -- ",ro_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",ro_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_ro));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_ro);
        fclose(arq_secao_ro);
        fclose(arq_mun_ro);
        fclose(arq_candidato_ro);
        fclose(arq_voto_ro);
        fclose(arq_resultado_ro);
    }

    else if(!(strcmp(cad_dados,"RR"))) {

        FILE *arq_zona_rr;
        FILE *arq_secao_rr;
        FILE *arq_mun_rr;
        FILE *arq_candidato_rr;
        FILE *arq_voto_rr;
        FILE *arq_resultado_rr;

        arq_voto_rr = fopen("arq_voto_rr.bin","rb");
        arq_resultado_rr = fopen("arq_candidato_rr.bin","ab");
        arq_zona_rr = fopen("arq_zona_rr.bin", "rb");
        arq_secao_rr = fopen("arq_secao_rr.bin", "rb");
        arq_mun_rr = fopen("arq_mun_rr.bin", "rb");
        arq_candidato_rr = fopen("arq_candidato_rr.bin","rb");

        if (arq_zona_rr != NULL || arq_secao_rr != NULL || arq_mun_rr != NULL || arq_candidato_rr != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&rr, sizeof(struct municipio), 1, arq_mun_rr)) {
                if (!(strcmp(rr.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&rr_zona, sizeof(struct info_zona), 1, arq_zona_rr)) {
                        if (rr_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&rr_secao, sizeof(struct info_secao), 1, arq_secao_rr)) {
                                if (rr_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_rr != NULL){
                                        do{
                                            fread(&rr_v, sizeof(struct voto), 1, arq_voto_rr);

                                            if(i == 0){
                                                maior = rr_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < rr_v.numeros_votos){
                                                    maior = rr_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_rr));

                                        do{
                                            fread(&rr_v, sizeof(struct voto), 1, arq_voto_rr);
                                            if(maior == rr_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",rr_v.municipio);
                                                printf("Nome do Candidato: %s -- ",rr_v.nome_candidato);
                                                printf("Partido: %s -- ",rr_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",rr_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_rr));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_rr);
        fclose(arq_secao_rr);
        fclose(arq_mun_rr);
        fclose(arq_candidato_rr);
        fclose(arq_voto_rr);
        fclose(arq_resultado_rr);
    }

    else if(!(strcmp(cad_dados,"SC"))) {

        FILE *arq_zona_sc;
        FILE *arq_secao_sc;
        FILE *arq_mun_sc;
        FILE *arq_candidato_sc;
        FILE *arq_voto_sc;
        FILE *arq_resultado_sc;

        arq_voto_sc = fopen("arq_voto_sc.bin","rb");
        arq_resultado_sc = fopen("arq_candidato_sc.bin","ab");
        arq_zona_sc = fopen("arq_zona_sc.bin", "rb");
        arq_secao_sc = fopen("arq_secao_sc.bin", "rb");
        arq_mun_sc = fopen("arq_mun_sc.bin", "rb");
        arq_candidato_sc = fopen("arq_candidato_sc.bin","rb");

        if (arq_zona_sc != NULL || arq_secao_sc != NULL || arq_mun_sc != NULL || arq_candidato_sc != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&sc, sizeof(struct municipio), 1, arq_mun_sc)) {
                if (!(strcmp(sc.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&sc_zona, sizeof(struct info_zona), 1, arq_zona_sc)) {
                        if (sc_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&sc_secao, sizeof(struct info_secao), 1, arq_secao_sc)) {
                                if (sc_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_sc != NULL){
                                        do{
                                            fread(&sc_v, sizeof(struct voto), 1, arq_voto_sc);

                                            if(i == 0){
                                                maior = sc_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < sc_v.numeros_votos){
                                                    maior = sc_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_sc));

                                        do{
                                            fread(&sc_v, sizeof(struct voto), 1, arq_voto_sc);
                                            if(maior == sc_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",sc_v.municipio);
                                                printf("Nome do Candidato: %s -- ",sc_v.nome_candidato);
                                                printf("Partido: %s -- ",sc_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",sc_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_sc));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_sc);
        fclose(arq_secao_sc);
        fclose(arq_mun_sc);
        fclose(arq_candidato_sc);
        fclose(arq_voto_sc);
        fclose(arq_resultado_sc);
    }

    else if(!(strcmp(cad_dados,"SP"))) {

        FILE *arq_zona_sp;
        FILE *arq_secao_sp;
        FILE *arq_mun_sp;
        FILE *arq_candidato_sp;
        FILE *arq_voto_sp;
        FILE *arq_resultado_sp;

        arq_voto_sp = fopen("arq_voto_sp.bin","rb");
        arq_resultado_sp = fopen("arq_candidato_sp.bin","ab");
        arq_zona_sp = fopen("arq_zona_sp.bin", "rb");
        arq_secao_sp = fopen("arq_secao_sp.bin", "rb");
        arq_mun_sp = fopen("arq_mun_sp.bin", "rb");
        arq_candidato_sp = fopen("arq_candidato_sp.bin","rb");

        if (arq_zona_sp != NULL || arq_secao_sp != NULL || arq_mun_sp != NULL || arq_candidato_sp != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&sp, sizeof(struct municipio), 1, arq_mun_sp)) {
                if (!(strcmp(sp.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&sp_zona, sizeof(struct info_zona), 1, arq_zona_sp)) {
                        if (sp_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&sp_secao, sizeof(struct info_secao), 1, arq_secao_sp)) {
                                if (sp_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_sp != NULL){
                                        do{
                                            fread(&sc_v, sizeof(struct voto), 1, arq_voto_sp);

                                            if(i == 0){
                                                maior = sp_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < sp_v.numeros_votos){
                                                    maior = sp_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_sp));

                                        do{
                                            fread(&sp_v, sizeof(struct voto), 1, arq_voto_sp);
                                            if(maior == sp_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",sp_v.municipio);
                                                printf("Nome do Candidato: %s -- ",sp_v.nome_candidato);
                                                printf("Partido: %s -- ",sp_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",sp_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_sp));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_sp);
        fclose(arq_secao_sp);
        fclose(arq_mun_sp);
        fclose(arq_candidato_sp);
        fclose(arq_voto_sp);
        fclose(arq_resultado_sp);
    }

    else if(!(strcmp(cad_dados,"SE"))) {

        FILE *arq_zona_se;
        FILE *arq_secao_se;
        FILE *arq_mun_se;
        FILE *arq_candidato_se;
        FILE *arq_voto_se;
        FILE *arq_resultado_se;

        arq_voto_se = fopen("arq_voto_se.bin","rb");
        arq_resultado_se = fopen("arq_candidato_se.bin","ab");
        arq_zona_se = fopen("arq_zona_se.bin", "rb");
        arq_secao_se = fopen("arq_secao_se.bin", "rb");
        arq_mun_se = fopen("arq_mun_se.bin", "rb");
        arq_candidato_se = fopen("arq_candidato_se.bin","rb");

        if (arq_zona_se != NULL || arq_secao_se != NULL || arq_mun_se != NULL || arq_candidato_se != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&se, sizeof(struct municipio), 1, arq_mun_se)) {
                if (!(strcmp(se.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&se_zona, sizeof(struct info_zona), 1, arq_zona_se)) {
                        if (se_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&se_secao, sizeof(struct info_secao), 1, arq_secao_se)) {
                                if (se_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_se != NULL){
                                        do{
                                            fread(&se_v, sizeof(struct voto), 1, arq_voto_se);

                                            if(i == 0){
                                                maior = se_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < se_v.numeros_votos){
                                                    maior = se_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_se));

                                        do{
                                            fread(&se_v, sizeof(struct voto), 1, arq_voto_se);
                                            if(maior == se_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",se_v.municipio);
                                                printf("Nome do Candidato: %s -- ",se_v.nome_candidato);
                                                printf("Partido: %s -- ",se_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",se_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_se));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_se);
        fclose(arq_secao_se);
        fclose(arq_mun_se);
        fclose(arq_candidato_se);
        fclose(arq_voto_se);
        fclose(arq_resultado_se);
    }

    else if(!(strcmp(cad_dados,"TO"))) {

        FILE *arq_zona_to;
        FILE *arq_secao_to;
        FILE *arq_mun_to;
        FILE *arq_candidato_to;
        FILE *arq_voto_to;
        FILE *arq_resultado_to;

        arq_voto_to = fopen("arq_voto_to.bin","rb");
        arq_resultado_to = fopen("arq_candidato_to.bin","ab");
        arq_zona_to = fopen("arq_zona_to.bin", "rb");
        arq_secao_to = fopen("arq_secao_to.bin", "rb");
        arq_mun_to = fopen("arq_mun_to.bin", "rb");
        arq_candidato_to = fopen("arq_candidato_to.bin","rb");

        if (arq_zona_to != NULL || arq_secao_to != NULL || arq_mun_to != NULL || arq_candidato_to != NULL) {
            getchar();
            printf("\nMunicipio para verificar o resultado: ");
            fgets(municipio, 100, stdin);

            while (fread(&to, sizeof(struct municipio), 1, arq_mun_to)) {
                if (!(strcmp(to.nomeMunicipio, municipio))) {

                    printf("\nNumero da zona eleitoral para verificar o resultado: ");
                    scanf("%d", &zona);

                    while (fread(&to_zona, sizeof(struct info_zona), 1, arq_zona_to)) {
                        if (to_zona.numero_zona == zona) {

                            printf("\nNumero da secao eleitoral para a verificar o resultado: ");
                            scanf("%d", &secao);

                            while (fread(&to_secao, sizeof(struct info_secao), 1, arq_secao_to)) {
                                if (to_secao.num_secao == secao) {

                                    i = 0;

                                    if(arq_voto_to != NULL){
                                        do{
                                            fread(&to_v, sizeof(struct voto), 1, arq_voto_to);

                                            if(i == 0){
                                                maior = to_v.numeros_votos;
                                                i += 1;
                                            }else{
                                                if(maior < to_v.numeros_votos){
                                                    maior = to_v.numeros_votos;
                                                    i += 1;
                                                }
                                            }

                                        }while (!feof(arq_voto_to));

                                        do{
                                            fread(&to_v, sizeof(struct voto), 1, arq_voto_to);
                                            if(maior == to_v.numeros_votos){
                                                linha();
                                                printf("PREFEIRO ELEITO");
                                                linha();
                                                printf("\nMunicipio: %s -- ",to_v.municipio);
                                                printf("Nome do Candidato: %s -- ",to_v.nome_candidato);
                                                printf("Partido: %s -- ",to_v.sigla_partido);
                                                printf("Quantidade de votos: %ld ",to_v.numeros_votos);
                                                linha();
                                            }


                                        }while (!feof(arq_voto_to));
                                    }
                                    else{
                                        linha();
                                        printf("\nArquivo nao encontrado");
                                        linha();
                                    }


                                }
                            }
                        }
                    }
                }
            }
        }


        fclose(arq_zona_to);
        fclose(arq_secao_to);
        fclose(arq_mun_to);
        fclose(arq_candidato_to);
        fclose(arq_voto_to);
        fclose(arq_resultado_to);
    }





}








