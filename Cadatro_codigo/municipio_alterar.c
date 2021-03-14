#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

/*
 * TRABALHO FINAL DE INTRODUCAO A PROGRAMACAO
 *
 * DUPLA:
 *
 * Paulo Victor Santos Magalhães
 * Caio Farias Soares
 *
 */

char alterar_nome_mun[100];

int v_municipio = 0;



int alterar_municipio_ac(){

    FILE *arq_mun_ac; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_ac = fopen("arq_mun_ac.bin","rb");


    v_municipio = 0;



    do {
        fread(&ac, sizeof(struct municipio), 1, arq_mun_ac);
        if(!(strcmp(alterar_nome_mun,ac.nomeMunicipio))){

            fclose(arq_mun_ac);

            arq_mun_ac = fopen("arq_mun_ac.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_ac,8,SEEK_CUR);
            strcpy(ac.nomeMunicipio,alterar_nome_mun);
            fwrite(&ac, sizeof(struct municipio),1,arq_mun_ac);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",ac.nomeMunicipio);
            linha();


            fclose(arq_mun_ac);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_ac)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_ac);

    return v_municipio;
}

int alterar_municipio_al(){

    FILE *arq_mun_al; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_al = fopen("arq_mun_al.bin","rb");


    v_municipio = 0;



    do {
        fread(&al, sizeof(struct municipio), 1, arq_mun_al);
        if(!(strcmp(alterar_nome_mun,al.nomeMunicipio))){

            fclose(arq_mun_al);

            arq_mun_al = fopen("arq_mun_al.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_al,8,SEEK_CUR);
            strcpy(al.nomeMunicipio,alterar_nome_mun);
            fwrite(&al, sizeof(struct municipio),1,arq_mun_al);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",al.nomeMunicipio);
            linha();


            fclose(arq_mun_al);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_al)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_al);

    return v_municipio;
}

int alterar_municipio_ap(){

    FILE *arq_mun_ap; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_ap = fopen("arq_mun_ap.bin","rb");


    v_municipio = 0;



    do {
        fread(&ap, sizeof(struct municipio), 1, arq_mun_ap);
        if(!(strcmp(alterar_nome_mun,ap.nomeMunicipio))){

            fclose(arq_mun_ap);

            arq_mun_ap = fopen("arq_mun_ap.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_ap,8,SEEK_CUR);
            strcpy(ap.nomeMunicipio,alterar_nome_mun);
            fwrite(&ap, sizeof(struct municipio),1,arq_mun_ap);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",ap.nomeMunicipio);
            linha();


            fclose(arq_mun_ap);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_ap)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_ap);

    return v_municipio;
}

int alterar_municipio_am(){

    FILE *arq_mun_am; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_am = fopen("arq_mun_am.bin","rb");


    v_municipio = 0;



    do {
        fread(&am, sizeof(struct municipio), 1, arq_mun_am);
        if(!(strcmp(alterar_nome_mun,am.nomeMunicipio))){

            fclose(arq_mun_am);

            arq_mun_am = fopen("arq_mun_am.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_am,8,SEEK_CUR);
            strcpy(am.nomeMunicipio,alterar_nome_mun);
            fwrite(&am, sizeof(struct municipio),1,arq_mun_am);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",am.nomeMunicipio);
            linha();


            fclose(arq_mun_am);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_am)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_am);

    return v_municipio;
}

int alterar_municipio_ba(){

    FILE *arq_mun_ba; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_ba = fopen("arq_mun_ba.bin","rb");


    v_municipio = 0;



    do {
        fread(&ba, sizeof(struct municipio), 1, arq_mun_ba);
        if(!(strcmp(alterar_nome_mun,ba.nomeMunicipio))){

            fclose(arq_mun_ba);

            arq_mun_ba = fopen("arq_mun_ba.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_ba,8,SEEK_CUR);
            strcpy(ba.nomeMunicipio,alterar_nome_mun);
            fwrite(&ba, sizeof(struct municipio),1,arq_mun_ba);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",ba.nomeMunicipio);
            linha();


            fclose(arq_mun_ba);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_ba)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_ba);

    return v_municipio;
}

int alterar_municipio_ce(){

    FILE *arq_mun_ce; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_ce = fopen("arq_mun_ce.bin","rb");


    v_municipio = 0;



    do {
        fread(&ce, sizeof(struct municipio), 1, arq_mun_ce);
        if(!(strcmp(alterar_nome_mun,ce.nomeMunicipio))){

            fclose(arq_mun_ce);

            arq_mun_ce = fopen("arq_mun_ce.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_ce,8,SEEK_CUR);
            strcpy(ce.nomeMunicipio,alterar_nome_mun);
            fwrite(&ce, sizeof(struct municipio),1,arq_mun_ce);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",ce.nomeMunicipio);
            linha();


            fclose(arq_mun_ce);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_ce)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_ce);

    return v_municipio;
}

int alterar_municipio_es(){

    FILE *arq_mun_es; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_es = fopen("arq_mun_es.bin","rb");


    v_municipio = 0;



    do {
        fread(&es, sizeof(struct municipio), 1, arq_mun_es);
        if(!(strcmp(alterar_nome_mun,es.nomeMunicipio))){

            fclose(arq_mun_es);

            arq_mun_es = fopen("arq_mun_es.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_es,8,SEEK_CUR);
            strcpy(es.nomeMunicipio,alterar_nome_mun);
            fwrite(&es, sizeof(struct municipio),1,arq_mun_es);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",es.nomeMunicipio);
            linha();


            fclose(arq_mun_es);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_es)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_es);

    return v_municipio;
}

int alterar_municipio_go(){

    FILE *arq_mun_go; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_go = fopen("arq_mun_go.bin","rb");


    v_municipio = 0;



    do {
        fread(&go, sizeof(struct municipio), 1, arq_mun_go);
        if(!(strcmp(alterar_nome_mun,go.nomeMunicipio))){

            fclose(arq_mun_go);

            arq_mun_go = fopen("arq_mun_go.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_go,8,SEEK_CUR);
            strcpy(go.nomeMunicipio,alterar_nome_mun);
            fwrite(&go, sizeof(struct municipio),1,arq_mun_go);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",go.nomeMunicipio);
            linha();


            fclose(arq_mun_go);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_go)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_go);

    return v_municipio;
}

int alterar_municipio_ma(){

    FILE *arq_mun_ma; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_ma = fopen("arq_mun_ma.bin","rb");


    v_municipio = 0;



    do {
        fread(&ma, sizeof(struct municipio), 1, arq_mun_ma);
        if(!(strcmp(alterar_nome_mun,ma.nomeMunicipio))){

            fclose(arq_mun_ma);

            arq_mun_ma = fopen("arq_mun_ma.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_ma,8,SEEK_CUR);
            strcpy(ma.nomeMunicipio,alterar_nome_mun);
            fwrite(&ma, sizeof(struct municipio),1,arq_mun_ma);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",ma.nomeMunicipio);
            linha();


            fclose(arq_mun_ma);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_ma)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_ma);

    return v_municipio;
}

int alterar_municipio_mt(){

    FILE *arq_mun_mt; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_mt = fopen("arq_mun_mt.bin","rb");


    v_municipio = 0;



    do {
        fread(&mt, sizeof(struct municipio), 1, arq_mun_mt);
        if(!(strcmp(alterar_nome_mun,mt.nomeMunicipio))){

            fclose(arq_mun_mt);

            arq_mun_mt = fopen("arq_mun_mt.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_mt,8,SEEK_CUR);
            strcpy(mt.nomeMunicipio,alterar_nome_mun);
            fwrite(&mt, sizeof(struct municipio),1,arq_mun_mt);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",mt.nomeMunicipio);
            linha();


            fclose(arq_mun_mt);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_mt)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_mt);

    return v_municipio;
}

int alterar_municipio_ms(){

    FILE *arq_mun_ms; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_ms = fopen("arq_mun_ms.bin","rb");


    v_municipio = 0;



    do {
        fread(&ms, sizeof(struct municipio), 1, arq_mun_ms);
        if(!(strcmp(alterar_nome_mun,ms.nomeMunicipio))){

            fclose(arq_mun_ms);

            arq_mun_ms = fopen("arq_mun_ms.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_ms,8,SEEK_CUR);
            strcpy(ms.nomeMunicipio,alterar_nome_mun);
            fwrite(&ms, sizeof(struct municipio),1,arq_mun_ms);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",ms.nomeMunicipio);
            linha();


            fclose(arq_mun_ms);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_ms)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_ms);

    return v_municipio;
}

int alterar_municipio_mg(){

    FILE *arq_mun_mg; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_mg = fopen("arq_mun_mg.bin","rb");


    v_municipio = 0;



    do {
        fread(&mg, sizeof(struct municipio), 1, arq_mun_mg);
        if(!(strcmp(alterar_nome_mun,mg.nomeMunicipio))){

            fclose(arq_mun_mg);

            arq_mun_mg = fopen("arq_mun_mg.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_mg,8,SEEK_CUR);
            strcpy(mg.nomeMunicipio,alterar_nome_mun);
            fwrite(&mg, sizeof(struct municipio),1,arq_mun_mg);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",mg.nomeMunicipio);
            linha();


            fclose(arq_mun_mg);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_mg)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_mg);

    return v_municipio;
}

int alterar_municipio_pa(){

    FILE *arq_mun_pa; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_pa = fopen("arq_mun_pa.bin","rb");


    v_municipio = 0;



    do {
        fread(&pa, sizeof(struct municipio), 1, arq_mun_pa);
        if(!(strcmp(alterar_nome_mun,pa.nomeMunicipio))){

            fclose(arq_mun_pa);

            arq_mun_pa = fopen("arq_mun_pa.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_pa,8,SEEK_CUR);
            strcpy(pa.nomeMunicipio,alterar_nome_mun);
            fwrite(&pa, sizeof(struct municipio),1,arq_mun_pa);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",mg.nomeMunicipio);
            linha();


            fclose(arq_mun_pa);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_pa)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_pa);

    return v_municipio;
}

int alterar_municipio_pb(){

    FILE *arq_mun_pb; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_pb = fopen("arq_mun_pb.bin","rb");


    v_municipio = 0;



    do {
        fread(&pb, sizeof(struct municipio), 1, arq_mun_pb);
        if(!(strcmp(alterar_nome_mun,pb.nomeMunicipio))){

            fclose(arq_mun_pb);

            arq_mun_pb = fopen("arq_mun_pb.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_pb,8,SEEK_CUR);
            strcpy(pb.nomeMunicipio,alterar_nome_mun);
            fwrite(&pb, sizeof(struct municipio),1,arq_mun_pb);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",pb.nomeMunicipio);
            linha();


            fclose(arq_mun_pb);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_pb)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_pb);

    return v_municipio;
}

int alterar_municipio_pr(){

    FILE *arq_mun_pr; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_pr = fopen("arq_mun_pr.bin","rb");


    v_municipio = 0;



    do {
        fread(&pr, sizeof(struct municipio), 1, arq_mun_pr);
        if(!(strcmp(alterar_nome_mun,pr.nomeMunicipio))){

            fclose(arq_mun_pr);

            arq_mun_pr = fopen("arq_mun_pr.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_pr,8,SEEK_CUR);
            strcpy(pr.nomeMunicipio,alterar_nome_mun);
            fwrite(&pr, sizeof(struct municipio),1,arq_mun_pr);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",pr.nomeMunicipio);
            linha();


            fclose(arq_mun_pr);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_pr)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_pr);

    return v_municipio;
}

int alterar_municipio_pe(){

    FILE *arq_mun_pe; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_pe = fopen("arq_mun_pe.bin","rb");


    v_municipio = 0;



    do {
        fread(&pe, sizeof(struct municipio), 1, arq_mun_pe);
        if(!(strcmp(alterar_nome_mun,pe.nomeMunicipio))){

            fclose(arq_mun_pe);

            arq_mun_pe = fopen("arq_mun_pe.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_pe,8,SEEK_CUR);
            strcpy(pe.nomeMunicipio,alterar_nome_mun);
            fwrite(&pe, sizeof(struct municipio),1,arq_mun_pe);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",pe.nomeMunicipio);
            linha();


            fclose(arq_mun_pe);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_pe)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_pe);

    return v_municipio;
}

int alterar_municipio_pi(){

    FILE *arq_mun_pi; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_pi = fopen("arq_mun_pi.bin","rb");


    v_municipio = 0;



    do {
        fread(&pi, sizeof(struct municipio), 1, arq_mun_pi);
        if(!(strcmp(alterar_nome_mun,pi.nomeMunicipio))){

            fclose(arq_mun_pi);

            arq_mun_pi = fopen("arq_mun_pi.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_pi,8,SEEK_CUR);
            strcpy(pi.nomeMunicipio,alterar_nome_mun);
            fwrite(&pi, sizeof(struct municipio),1,arq_mun_pi);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",pi.nomeMunicipio);
            linha();


            fclose(arq_mun_pi);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_pi)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_pi);

    return v_municipio;
}

int alterar_municipio_rj(){

    FILE *arq_mun_rj; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_rj = fopen("arq_mun_rj.bin","rb");


    v_municipio = 0;



    do {
        fread(&rj, sizeof(struct municipio), 1, arq_mun_rj);
        if(!(strcmp(alterar_nome_mun,rj.nomeMunicipio))){

            fclose(arq_mun_rj);

            arq_mun_rj = fopen("arq_mun_rj.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_rj,8,SEEK_CUR);
            strcpy(rj.nomeMunicipio,alterar_nome_mun);
            fwrite(&rj, sizeof(struct municipio),1,arq_mun_rj);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",rj.nomeMunicipio);
            linha();


            fclose(arq_mun_rj);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_rj)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_rj);

    return v_municipio;
}

int alterar_municipio_rn(){

    FILE *arq_mun_rn; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_rn = fopen("arq_mun_rn.bin","rb");


    v_municipio = 0;



    do {
        fread(&rn, sizeof(struct municipio), 1, arq_mun_rn);
        if(!(strcmp(alterar_nome_mun,rn.nomeMunicipio))){

            fclose(arq_mun_rn);

            arq_mun_rn = fopen("arq_mun_rn.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_rn,8,SEEK_CUR);
            strcpy(rn.nomeMunicipio,alterar_nome_mun);
            fwrite(&rn, sizeof(struct municipio),1,arq_mun_rn);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",rn.nomeMunicipio);
            linha();


            fclose(arq_mun_rn);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_rn)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_rn);

    return v_municipio;
}

int alterar_municipio_rs(){

    FILE *arq_mun_rs; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_rs = fopen("arq_mun_rs.bin","rb");


    v_municipio = 0;



    do {
        fread(&rs, sizeof(struct municipio), 1, arq_mun_rs);
        if(!(strcmp(alterar_nome_mun,rs.nomeMunicipio))){

            fclose(arq_mun_rs);

            arq_mun_rs = fopen("arq_mun_rs.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_rs,8,SEEK_CUR);
            strcpy(rs.nomeMunicipio,alterar_nome_mun);
            fwrite(&rs, sizeof(struct municipio),1,arq_mun_rs);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",rs.nomeMunicipio);
            linha();


            fclose(arq_mun_rs);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_rs)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_rs);

    return v_municipio;
}

int alterar_municipio_ro(){

    FILE *arq_mun_ro; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_ro = fopen("arq_mun_ro.bin","rb");


    v_municipio = 0;



    do {
        fread(&ro, sizeof(struct municipio), 1, arq_mun_ro);
        if(!(strcmp(alterar_nome_mun,ro.nomeMunicipio))){

            fclose(arq_mun_ro);

            arq_mun_ro = fopen("arq_mun_ro.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_ro,8,SEEK_CUR);
            strcpy(ro.nomeMunicipio,alterar_nome_mun);
            fwrite(&ro, sizeof(struct municipio),1,arq_mun_ro);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",ro.nomeMunicipio);
            linha();


            fclose(arq_mun_ro);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_ro)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_ro);

    return v_municipio;
}

int alterar_municipio_rr(){

    FILE *arq_mun_rr; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_rr = fopen("arq_mun_rr.bin","rb");


    v_municipio = 0;



    do {
        fread(&rr, sizeof(struct municipio), 1, arq_mun_rr);
        if(!(strcmp(alterar_nome_mun,rr.nomeMunicipio))){

            fclose(arq_mun_rr);

            arq_mun_rr = fopen("arq_mun_rr.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_rr,8,SEEK_CUR);
            strcpy(rr.nomeMunicipio,alterar_nome_mun);
            fwrite(&rr, sizeof(struct municipio),1,arq_mun_rr);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",rr.nomeMunicipio);
            linha();


            fclose(arq_mun_rr);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_rr)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_rr);

    return v_municipio;
}

int alterar_municipio_sc(){

    FILE *arq_mun_sc; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_sc = fopen("arq_mun_sc.bin","rb");


    v_municipio = 0;



    do {
        fread(&sc, sizeof(struct municipio), 1, arq_mun_sc);
        if(!(strcmp(alterar_nome_mun,sc.nomeMunicipio))){

            fclose(arq_mun_sc);

            arq_mun_sc = fopen("arq_mun_sc.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_sc,8,SEEK_CUR);
            strcpy(sc.nomeMunicipio,alterar_nome_mun);
            fwrite(&sc, sizeof(struct municipio),1,arq_mun_sc);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",sc.nomeMunicipio);
            linha();


            fclose(arq_mun_sc);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_sc)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_sc);

    return v_municipio;
}

int alterar_municipio_sp(){

    FILE *arq_mun_sp; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_sp = fopen("arq_mun_sp.bin","rb");


    v_municipio = 0;



    do {
        fread(&sp, sizeof(struct municipio), 1, arq_mun_sp);
        if(!(strcmp(alterar_nome_mun,sp.nomeMunicipio))){

            fclose(arq_mun_sp);

            arq_mun_sp = fopen("arq_mun_sp.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_sp,8,SEEK_CUR);
            strcpy(sp.nomeMunicipio,alterar_nome_mun);
            fwrite(&sp, sizeof(struct municipio),1,arq_mun_sp);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",sp.nomeMunicipio);
            linha();


            fclose(arq_mun_sp);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_sp)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_sp);

    return v_municipio;
}


int alterar_municipio_se(){

    FILE *arq_mun_se; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_se = fopen("arq_mun_se.bin","rb");


    v_municipio = 0;



    do {
        fread(&se, sizeof(struct municipio), 1, arq_mun_se);
        if(!(strcmp(alterar_nome_mun,se.nomeMunicipio))){

            fclose(arq_mun_se);

            arq_mun_se = fopen("arq_mun_se.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_se,8,SEEK_CUR);
            strcpy(se.nomeMunicipio,alterar_nome_mun);
            fwrite(&se, sizeof(struct municipio),1,arq_mun_se);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",se.nomeMunicipio);
            linha();


            fclose(arq_mun_se);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_se)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_se);

    return v_municipio;
}

int alterar_municipio_to(){

    FILE *arq_mun_to; // Numeros de nunicipios que estao no arquivo no Estado
    arq_mun_to = fopen("arq_mun_to.bin","rb");


    v_municipio = 0;



    do {
        fread(&to, sizeof(struct municipio), 1, arq_mun_to);
        if(!(strcmp(alterar_nome_mun,to.nomeMunicipio))){

            fclose(arq_mun_to);

            arq_mun_to = fopen("arq_mun_to.bin","ab");

            printf("\nNovo nome para o municipio: %s",alterar_nome_mun);
            fflush(stdin);
            printf("\nDigite: ");
            fgets(alterar_nome_mun,100,stdin);


            fseek(arq_mun_to,8,SEEK_CUR);
            strcpy(to.nomeMunicipio,alterar_nome_mun);
            fwrite(&to, sizeof(struct municipio),1,arq_mun_to);

            linha();
            printf("\nNOVO NOME PARA O MUNICIPIO: %s",to.nomeMunicipio);
            linha();


            fclose(arq_mun_to);

            return v_municipio = 1;


        }
    } while (!feof(arq_mun_to)); // enquanto não chegar ao final do arquivo

    fclose(arq_mun_to);

    return v_municipio;
}



void func_alterar_municipio(){
    char alterar_mun[3];
    int tamStr,i;


    // Esse comando faz com que nao tenha novos numeros aleatorios a cada nova execucao do programa.
    srand( (unsigned)time(NULL) );

    printf("\nMUNICIPIOS RESTANTE PARA O CADASTRO NO TRE: \n");
    estados_aparecer();

    getchar();
    printf("\nDigite a UF do Estado para o cadastro do municipio: ");
    fgets(alterar_mun,3,stdin);

    // Converte minuscula em maiscula
    tamStr = strlen(alterar_mun);
    for(i=0; i < tamStr; i++)
    {                            // Converte cada caracter de Str
        alterar_mun[i] =toupper(alterar_mun[i]);  // para maiuscula
    }

    /* Aqui verifica qual a UF foi digitada, a partir disso, haverá uma condição para qual
     * Estado será cadastrado (No caso vai ser cadastrado por meio de uma struct), se uma UF for digitado errado
     * havera uma mensagem relatado que a UF não existe...
     *
     * O comando rand() retorna um numero aleatorio (no caso o codigo do municipio)
     *
     *  */
    if(!(strcmp(alterar_mun,"AC"))){
        FILE *arq_mun_ac; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_ac = fopen("arq_mun_ac.bin","rb");

        if(arq_mun_ac != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_ac())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_ac);
    }

    else if(!(strcmp(alterar_mun,"AL"))){
        FILE *arq_mun_al; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_al = fopen("arq_mun_al.bin","rb");

        if(arq_mun_al != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_al())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_al);
    }

    else if(!(strcmp(alterar_mun,"AP"))){
        FILE *arq_mun_ap; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_ap = fopen("arq_mun_ap.bin","rb");

        if(arq_mun_ap != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_ap())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_ap);
    }

    else if(!(strcmp(alterar_mun,"AM"))){
        FILE *arq_mun_am; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_am = fopen("arq_mun_am.bin","rb");

        if(arq_mun_am != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_am())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_am);
    }

    else if(!(strcmp(alterar_mun,"BA"))){
        FILE *arq_mun_ba; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_ba = fopen("arq_mun_ba.bin","rb");

        if(arq_mun_ba != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_ba())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_ba);
    }

    else if(!(strcmp(alterar_mun,"CE"))){
        FILE *arq_mun_ce; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_ce = fopen("arq_mun_ce.bin","rb");

        if(arq_mun_ce != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_ce())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_ce);
    }

    else if(!(strcmp(alterar_mun,"ES"))){
        FILE *arq_mun_es; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_es = fopen("arq_mun_es.bin","rb");

        if(arq_mun_es != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_es())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_es);
    }

    else if(!(strcmp(alterar_mun,"GO"))){
        FILE *arq_mun_go; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_go = fopen("arq_mun_go.bin","rb");

        if(arq_mun_go != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_go())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_go);
    }

    else if(!(strcmp(alterar_mun,"MA"))){
        FILE *arq_mun_ma; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_ma = fopen("arq_mun_ma.bin","rb");

        if(arq_mun_ma != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_ma())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_ma);
    }

    else if(!(strcmp(alterar_mun,"MT"))){
        FILE *arq_mun_mt; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_mt = fopen("arq_mun_mt.bin","rb");

        if(arq_mun_mt != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_mt())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_mt);
    }

    else if(!(strcmp(alterar_mun,"MS"))){
        FILE *arq_mun_ms; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_ms = fopen("arq_mun_ms.bin","rb");

        if(arq_mun_ms != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_ms())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_ms);
    }

    else if(!(strcmp(alterar_mun,"MG"))){
        FILE *arq_mun_mg; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_mg = fopen("arq_mun_mg.bin","rb");

        if(arq_mun_mg != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_mg())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_mg);
    }

    else if(!(strcmp(alterar_mun,"PA"))){
        FILE *arq_mun_pa; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_pa = fopen("arq_mun_pa.bin","rb");

        if(arq_mun_pa != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_pa())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_pa);
    }

    else if(!(strcmp(alterar_mun,"PB"))){
        FILE *arq_mun_pb; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_pb = fopen("arq_mun_pb.bin","rb");

        if(arq_mun_pb != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_pb())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_pb);
    }

    else if(!(strcmp(alterar_mun,"PR"))){
        FILE *arq_mun_pr; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_pr = fopen("arq_mun_pr.bin","rb");

        if(arq_mun_pr != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_pr())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_pr);
    }

    else if(!(strcmp(alterar_mun,"PE"))){
        FILE *arq_mun_pe; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_pe = fopen("arq_mun_pe.bin","rb");

        if(arq_mun_pe != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_pe())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_pe);
    }

    else if(!(strcmp(alterar_mun,"PI"))){
        FILE *arq_mun_pi; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_pi = fopen("arq_mun_pi.bin","rb");

        if(arq_mun_pi != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_pi())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_pi);
    }

    else if(!(strcmp(alterar_mun,"RJ"))){
        FILE *arq_mun_rj; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_rj = fopen("arq_mun_rj.bin","rb");

        if(arq_mun_rj != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_rj())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_rj);
    }

    else if(!(strcmp(alterar_mun,"RN"))){
        FILE *arq_mun_rn; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_rn = fopen("arq_mun_rn.bin","rb");

        if(arq_mun_rn != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_rn())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_rn);
    }

    else if(!(strcmp(alterar_mun,"RS"))){
        FILE *arq_mun_rs; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_rs = fopen("arq_mun_rs.bin","rb");

        if(arq_mun_rs != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_rs())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_rs);
    }

    else if(!(strcmp(alterar_mun,"RO"))){
        FILE *arq_mun_ro; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_ro = fopen("arq_mun_ro.bin","rb");

        if(arq_mun_ro != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_ro())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_ro);
    }

    else if(!(strcmp(alterar_mun,"RR"))){
        FILE *arq_mun_rr; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_rr = fopen("arq_mun_rr.bin","rb");

        if(arq_mun_rr != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_rr())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_rr);
    }

    else if(!(strcmp(alterar_mun,"SC"))){
        FILE *arq_mun_sc; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_sc = fopen("arq_mun_sc.bin","rb");

        if(arq_mun_sc != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_sc())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_sc);
    }

    else if(!(strcmp(alterar_mun,"SP"))){
        FILE *arq_mun_sp; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_sp = fopen("arq_mun_sp.bin","rb");

        if(arq_mun_sp != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_sp())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_sp);
    }

    else if(!(strcmp(alterar_mun,"SE"))){
        FILE *arq_mun_se; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_se = fopen("arq_mun_se.bin","rb");

        if(arq_mun_se != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_se())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_se);
    }

    else if(!(strcmp(alterar_mun,"TO"))){
        FILE *arq_mun_to; // Numeros de nunicipios que estao no arquivo no Estado
        arq_mun_to = fopen("arq_mun_to.bin","rb");

        if(arq_mun_to != NULL){
            linha();
            printf("\nALTERAR DADOS DO MUNICIPIO NO ESTADO: %s",alterar_mun);
            printf("\n");
            linha();

            printf("\nAlterar nome de municipio, digite o nome para alteracao: ");
            getchar();
            fgets(alterar_nome_mun,100,stdin);

            if(!(alterar_municipio_to())){
                linha();
                printf("\nNENHUM MUNICIPIO ENCONTRADO");
                linha();
            }

        }else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        linha();



        fclose(arq_mun_to);
    }


    else{
        printf("########## OPACAO INVALIDA ##########\n");
    }

}