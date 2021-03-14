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

int secao_alterar;
int zona2_alterar;

int v_secao = 0;

int alterar_secao_ac(){
    FILE *arq_secao_ac;
    arq_secao_ac = fopen("arq_secao_ac.bin","rb");


    v_secao = 0;



    do {
        fread(&ac_secao, sizeof(struct info_secao), 1, arq_secao_ac);
        if(secao_alterar == ac_secao.num_secao){

            fclose(arq_secao_ac);

            arq_secao_ac = fopen("arq_secao_ac.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_ac,224,SEEK_CUR);

            ac_secao.num_secao = secao_alterar;

            fwrite(&ac_secao, sizeof(struct info_secao), 1, arq_secao_ac);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",ac_secao.num_secao);
            linha();


            fclose(arq_secao_ac);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_ac)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_ac);

    return v_secao;
}

int alterar_secao_al(){
    FILE *arq_secao_al;
    arq_secao_al = fopen("arq_secao_al.bin","rb");


    v_secao = 0;



    do {
        fread(&al_secao, sizeof(struct info_secao), 1, arq_secao_al);
        if(secao_alterar == al_secao.num_secao){

            fclose(arq_secao_al);

            arq_secao_al = fopen("arq_secao_al.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_al,224,SEEK_CUR);

            al_secao.num_secao = secao_alterar;

            fwrite(&al_secao, sizeof(struct info_secao), 1, arq_secao_al);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",al_secao.num_secao);
            linha();


            fclose(arq_secao_al);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_al)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_al);

    return v_secao;
}

int alterar_secao_ap(){
    FILE *arq_secao_ap;
    arq_secao_ap = fopen("arq_secao_ap.bin","rb");


    v_secao = 0;



    do {
        fread(&ap_secao, sizeof(struct info_secao), 1, arq_secao_ap);
        if(secao_alterar == ap_secao.num_secao){

            fclose(arq_secao_ap);

            arq_secao_ap = fopen("arq_secao_ap.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_ap,224,SEEK_CUR);

            ap_secao.num_secao = secao_alterar;

            fwrite(&ap_secao, sizeof(struct info_secao), 1, arq_secao_ap);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",ap_secao.num_secao);
            linha();


            fclose(arq_secao_ap);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_ap)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_ap);

    return v_secao;
}

int alterar_secao_am(){
    FILE *arq_secao_am;
    arq_secao_am = fopen("arq_secao_am.bin","rb");


    v_secao = 0;



    do {
        fread(&am_secao, sizeof(struct info_secao), 1, arq_secao_am);
        if(secao_alterar == am_secao.num_secao){

            fclose(arq_secao_am);

            arq_secao_am = fopen("arq_secao_am.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_am,224,SEEK_CUR);

            am_secao.num_secao = secao_alterar;

            fwrite(&am_secao, sizeof(struct info_secao), 1, arq_secao_am);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",am_secao.num_secao);
            linha();


            fclose(arq_secao_am);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_am)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_am);

    return v_secao;
}

int alterar_secao_ba(){
    FILE *arq_secao_ba;
    arq_secao_ba = fopen("arq_secao_ba.bin","rb");


    v_secao = 0;



    do {
        fread(&ba_secao, sizeof(struct info_secao), 1, arq_secao_ba);
        if(secao_alterar == ba_secao.num_secao){

            fclose(arq_secao_ba);

            arq_secao_ba = fopen("arq_secao_ba.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_ba,224,SEEK_CUR);

            ba_secao.num_secao = secao_alterar;

            fwrite(&ba_secao, sizeof(struct info_secao), 1, arq_secao_ba);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",ba_secao.num_secao);
            linha();


            fclose(arq_secao_ba);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_ba)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_ba);

    return v_secao;
}

int alterar_secao_ce(){
    FILE *arq_secao_ce;
    arq_secao_ce = fopen("arq_secao_ce.bin","rb");


    v_secao = 0;



    do {
        fread(&ce_secao, sizeof(struct info_secao), 1, arq_secao_ce);
        if(secao_alterar == ce_secao.num_secao){

            fclose(arq_secao_ce);

            arq_secao_ce = fopen("arq_secao_ce.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_ce,224,SEEK_CUR);

            ce_secao.num_secao = secao_alterar;

            fwrite(&ce_secao, sizeof(struct info_secao), 1, arq_secao_ce);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",ce_secao.num_secao);
            linha();


            fclose(arq_secao_ce);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_ce)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_ce);

    return v_secao;
}

int alterar_secao_es(){
    FILE *arq_secao_es;
    arq_secao_es = fopen("arq_secao_es.bin","rb");


    v_secao = 0;



    do {
        fread(&es_secao, sizeof(struct info_secao), 1, arq_secao_es);
        if(secao_alterar == es_secao.num_secao){

            fclose(arq_secao_es);

            arq_secao_es = fopen("arq_secao_es.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_es,224,SEEK_CUR);

            es_secao.num_secao = secao_alterar;

            fwrite(&es_secao, sizeof(struct info_secao), 1, arq_secao_es);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",es_secao.num_secao);
            linha();


            fclose(arq_secao_es);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_es)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_es);

    return v_secao;
}

int alterar_secao_go(){
    FILE *arq_secao_go;
    arq_secao_go = fopen("arq_secao_go.bin","rb");


    v_secao = 0;



    do {
        fread(&go_secao, sizeof(struct info_secao), 1, arq_secao_go);
        if(secao_alterar == go_secao.num_secao){

            fclose(arq_secao_go);

            arq_secao_go = fopen("arq_secao_go.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_go,224,SEEK_CUR);

            go_secao.num_secao = secao_alterar;

            fwrite(&go_secao, sizeof(struct info_secao), 1, arq_secao_go);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",go_secao.num_secao);
            linha();


            fclose(arq_secao_go);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_go)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_go);

    return v_secao;
}

int alterar_secao_ma(){
    FILE *arq_secao_ma;
    arq_secao_ma = fopen("arq_secao_ma.bin","rb");


    v_secao = 0;



    do {
        fread(&ma_secao, sizeof(struct info_secao), 1, arq_secao_ma);
        if(secao_alterar == ma_secao.num_secao){

            fclose(arq_secao_ma);

            arq_secao_ma = fopen("arq_secao_ma.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_ma,224,SEEK_CUR);

            ma_secao.num_secao = secao_alterar;

            fwrite(&ma_secao, sizeof(struct info_secao), 1, arq_secao_ma);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",ma_secao.num_secao);
            linha();


            fclose(arq_secao_ma);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_ma)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_ma);

    return v_secao;
}

int alterar_secao_mt(){
    FILE *arq_secao_mt;
    arq_secao_mt = fopen("arq_secao_mt.bin","rb");


    v_secao = 0;



    do {
        fread(&mt_secao, sizeof(struct info_secao), 1, arq_secao_mt);
        if(secao_alterar == mt_secao.num_secao){

            fclose(arq_secao_mt);

            arq_secao_mt = fopen("arq_secao_mt.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_mt,224,SEEK_CUR);

            mt_secao.num_secao = secao_alterar;

            fwrite(&mt_secao, sizeof(struct info_secao), 1, arq_secao_mt);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",mt_secao.num_secao);
            linha();


            fclose(arq_secao_mt);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_mt)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_mt);

    return v_secao;
}

int alterar_secao_ms(){
    FILE *arq_secao_ms;
    arq_secao_ms = fopen("arq_secao_ms.bin","rb");


    v_secao = 0;



    do {
        fread(&ms_secao, sizeof(struct info_secao), 1, arq_secao_ms);
        if(secao_alterar == ms_secao.num_secao){

            fclose(arq_secao_ms);

            arq_secao_ms = fopen("arq_secao_ms.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_ms,224,SEEK_CUR);

            ms_secao.num_secao = secao_alterar;

            fwrite(&ms_secao, sizeof(struct info_secao), 1, arq_secao_ms);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",ms_secao.num_secao);
            linha();


            fclose(arq_secao_ms);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_ms)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_ms);

    return v_secao;
}

int alterar_secao_mg(){
    FILE *arq_secao_mg;
    arq_secao_mg = fopen("arq_secao_mg.bin","rb");


    v_secao = 0;



    do {
        fread(&mg_secao, sizeof(struct info_secao), 1, arq_secao_mg);
        if(secao_alterar == mg_secao.num_secao){

            fclose(arq_secao_mg);

            arq_secao_mg = fopen("arq_secao_mg.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_mg,224,SEEK_CUR);

            mg_secao.num_secao = secao_alterar;

            fwrite(&mg_secao, sizeof(struct info_secao), 1, arq_secao_mg);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",mg_secao.num_secao);
            linha();


            fclose(arq_secao_mg);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_mg)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_mg);

    return v_secao;
}

int alterar_secao_pa(){
    FILE *arq_secao_pa;
    arq_secao_pa = fopen("arq_secao_pa.bin","rb");


    v_secao = 0;



    do {
        fread(&pa_secao, sizeof(struct info_secao), 1, arq_secao_pa);
        if(secao_alterar == pa_secao.num_secao){

            fclose(arq_secao_pa);

            arq_secao_pa = fopen("arq_secao_pa.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_pa,224,SEEK_CUR);

            pa_secao.num_secao = secao_alterar;

            fwrite(&pa_secao, sizeof(struct info_secao), 1, arq_secao_pa);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",pa_secao.num_secao);
            linha();


            fclose(arq_secao_pa);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_pa)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_pa);

    return v_secao;
}

int alterar_secao_pb(){
    FILE *arq_secao_pb;
    arq_secao_pb = fopen("arq_secao_pb.bin","rb");


    v_secao = 0;



    do {
        fread(&pb_secao, sizeof(struct info_secao), 1, arq_secao_pb);
        if(secao_alterar == pb_secao.num_secao){

            fclose(arq_secao_pb);

            arq_secao_pb = fopen("arq_secao_pb.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_pb,224,SEEK_CUR);

            pb_secao.num_secao = secao_alterar;

            fwrite(&pb_secao, sizeof(struct info_secao), 1, arq_secao_pb);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",pb_secao.num_secao);
            linha();


            fclose(arq_secao_pb);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_pb)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_pb);

    return v_secao;
}

int alterar_secao_pr(){
    FILE *arq_secao_pr;
    arq_secao_pr = fopen("arq_secao_pr.bin","rb");


    v_secao = 0;



    do {
        fread(&pr_secao, sizeof(struct info_secao), 1, arq_secao_pr);
        if(secao_alterar == pr_secao.num_secao){

            fclose(arq_secao_pr);

            arq_secao_pr = fopen("arq_secao_pr.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_pr,224,SEEK_CUR);

            pr_secao.num_secao = secao_alterar;

            fwrite(&pr_secao, sizeof(struct info_secao), 1, arq_secao_pr);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",pr_secao.num_secao);
            linha();


            fclose(arq_secao_pr);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_pr)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_pr);

    return v_secao;
}


int alterar_secao_pe(){
    FILE *arq_secao_pe;
    arq_secao_pe = fopen("arq_secao_pe.bin","rb");


    v_secao = 0;



    do {
        fread(&pe_secao, sizeof(struct info_secao), 1, arq_secao_pe);
        if(secao_alterar == pe_secao.num_secao){

            fclose(arq_secao_pe);

            arq_secao_pe = fopen("arq_secao_pe.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_pe,224,SEEK_CUR);

            pe_secao.num_secao = secao_alterar;

            fwrite(&pe_secao, sizeof(struct info_secao), 1, arq_secao_pe);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",pe_secao.num_secao);
            linha();


            fclose(arq_secao_pe);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_pe)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_pe);

    return v_secao;
}

int alterar_secao_pi(){
    FILE *arq_secao_pi;
    arq_secao_pi = fopen("arq_secao_pi.bin","rb");


    v_secao = 0;



    do {
        fread(&pi_secao, sizeof(struct info_secao), 1, arq_secao_pi);
        if(secao_alterar == pi_secao.num_secao){

            fclose(arq_secao_pi);

            arq_secao_pi = fopen("arq_secao_pi.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_pi,224,SEEK_CUR);

            pi_secao.num_secao = secao_alterar;

            fwrite(&pi_secao, sizeof(struct info_secao), 1, arq_secao_pi);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",pi_secao.num_secao);
            linha();


            fclose(arq_secao_pi);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_pi)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_pi);

    return v_secao;
}

int alterar_secao_rj(){
    FILE *arq_secao_rj;
    arq_secao_rj = fopen("arq_secao_rj.bin","rb");


    v_secao = 0;



    do {
        fread(&rj_secao, sizeof(struct info_secao), 1, arq_secao_rj);
        if(secao_alterar == rj_secao.num_secao){

            fclose(arq_secao_rj);

            arq_secao_rj = fopen("arq_secao_rj.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_rj,224,SEEK_CUR);

            rj_secao.num_secao = secao_alterar;

            fwrite(&rj_secao, sizeof(struct info_secao), 1, arq_secao_rj);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",rj_secao.num_secao);
            linha();


            fclose(arq_secao_rj);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_rj)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_rj);

    return v_secao;
}

int alterar_secao_rn(){
    FILE *arq_secao_rn;
    arq_secao_rn = fopen("arq_secao_rn.bin","rb");


    v_secao = 0;



    do {
        fread(&rn_secao, sizeof(struct info_secao), 1, arq_secao_rn);
        if(secao_alterar == rn_secao.num_secao){

            fclose(arq_secao_rn);

            arq_secao_rn = fopen("arq_secao_rn.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_rn,224,SEEK_CUR);

            rn_secao.num_secao = secao_alterar;

            fwrite(&rn_secao, sizeof(struct info_secao), 1, arq_secao_rn);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",rn_secao.num_secao);
            linha();


            fclose(arq_secao_rn);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_rn)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_rn);

    return v_secao;
}

int alterar_secao_rs(){
    FILE *arq_secao_rs;
    arq_secao_rs = fopen("arq_secao_rs.bin","rb");


    v_secao = 0;



    do {
        fread(&rs_secao, sizeof(struct info_secao), 1, arq_secao_rs);
        if(secao_alterar == rs_secao.num_secao){

            fclose(arq_secao_rs);

            arq_secao_rs = fopen("arq_secao_rs.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_rs,224,SEEK_CUR);

            rs_secao.num_secao = secao_alterar;

            fwrite(&rs_secao, sizeof(struct info_secao), 1, arq_secao_rs);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",rs_secao.num_secao);
            linha();


            fclose(arq_secao_rs);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_rs)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_rs);

    return v_secao;
}

int alterar_secao_ro(){
    FILE *arq_secao_ro;
    arq_secao_ro = fopen("arq_secao_ro.bin","rb");


    v_secao = 0;



    do {
        fread(&ro_secao, sizeof(struct info_secao), 1, arq_secao_ro);
        if(secao_alterar == ro_secao.num_secao){

            fclose(arq_secao_ro);

            arq_secao_ro = fopen("arq_secao_ro.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_ro,224,SEEK_CUR);

            ro_secao.num_secao = secao_alterar;

            fwrite(&ro_secao, sizeof(struct info_secao), 1, arq_secao_ro);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",ro_secao.num_secao);
            linha();


            fclose(arq_secao_ro);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_ro)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_ro);

    return v_secao;
}

int alterar_secao_rr(){
    FILE *arq_secao_rr;
    arq_secao_rr = fopen("arq_secao_rr.bin","rb");


    v_secao = 0;



    do {
        fread(&rr_secao, sizeof(struct info_secao), 1, arq_secao_rr);
        if(secao_alterar == rr_secao.num_secao){

            fclose(arq_secao_rr);

            arq_secao_rr = fopen("arq_secao_rr.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_rr,224,SEEK_CUR);

            rr_secao.num_secao = secao_alterar;

            fwrite(&rr_secao, sizeof(struct info_secao), 1, arq_secao_rr);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",rr_secao.num_secao);
            linha();


            fclose(arq_secao_rr);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_rr)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_rr);

    return v_secao;
}

int alterar_secao_sc(){
    FILE *arq_secao_sc;
    arq_secao_sc = fopen("arq_secao_sc.bin","rb");


    v_secao = 0;



    do {
        fread(&sc_secao, sizeof(struct info_secao), 1, arq_secao_sc);
        if(secao_alterar == sc_secao.num_secao){

            fclose(arq_secao_sc);

            arq_secao_sc = fopen("arq_secao_sc.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_sc,224,SEEK_CUR);

            sc_secao.num_secao = secao_alterar;

            fwrite(&sc_secao, sizeof(struct info_secao), 1, arq_secao_sc);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",sc_secao.num_secao);
            linha();


            fclose(arq_secao_sc);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_sc)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_sc);

    return v_secao;
}

int alterar_secao_sp(){
    FILE *arq_secao_sp;
    arq_secao_sp = fopen("arq_secao_sp.bin","rb");


    v_secao = 0;



    do {
        fread(&sp_secao, sizeof(struct info_secao), 1, arq_secao_sp);
        if(secao_alterar == sp_secao.num_secao){

            fclose(arq_secao_sp);

            arq_secao_sp = fopen("arq_secao_sp.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_sp,224,SEEK_CUR);

            sp_secao.num_secao = secao_alterar;

            fwrite(&sp_secao, sizeof(struct info_secao), 1, arq_secao_sp);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",sp_secao.num_secao);
            linha();


            fclose(arq_secao_sp);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_sp)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_sp);

    return v_secao;
}

int alterar_secao_se(){
    FILE *arq_secao_se;
    arq_secao_se = fopen("arq_secao_se.bin","rb");


    v_secao = 0;



    do {
        fread(&se_secao, sizeof(struct info_secao), 1, arq_secao_se);
        if(secao_alterar == se_secao.num_secao){

            fclose(arq_secao_se);

            arq_secao_se = fopen("arq_secao_se.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_se,224,SEEK_CUR);

            se_secao.num_secao = secao_alterar;

            fwrite(&se_secao, sizeof(struct info_secao), 1, arq_secao_se);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",se_secao.num_secao);
            linha();


            fclose(arq_secao_se);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_se)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_se);

    return v_secao;
}

int alterar_secao_to(){
    FILE *arq_secao_to;
    arq_secao_to = fopen("arq_secao_to.bin","rb");


    v_secao = 0;



    do {
        fread(&to_secao, sizeof(struct info_secao), 1, arq_secao_to);
        if(secao_alterar == to_secao.num_secao){

            fclose(arq_secao_to);

            arq_secao_to = fopen("arq_secao_to.bin","ab");

            printf("\nNovo numero para secao: %d",secao_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&secao_alterar);


            fseek(arq_secao_to,224,SEEK_CUR);

            to_secao.num_secao = secao_alterar;

            fwrite(&to_secao, sizeof(struct info_secao), 1, arq_secao_to);

            linha();
            printf("\nNOVO NUMERO PARA SECAO: %d",to_secao.num_secao);
            linha();


            fclose(arq_secao_to);

            return v_secao = 1;


        }
    } while (!feof(arq_secao_to)); // enquanto não chegar ao final do arquivo

    fclose(arq_secao_to);

    return v_secao;
}


void func_alterar_sec(){
    char alterar_secao[3];
    int tamStr,i;


    // Esse comando faz com que nao tenha novos numeros aleatorios a cada nova execucao do programa.
    srand( (unsigned)time(NULL) );

    printf("\nMUNICIPIOS RESTANTE PARA O CADASTRO NO TRE: \n");
    estados_aparecer();

    getchar();
    printf("\nDigite a UF do Estado para o cadastro do municipio: ");
    fgets(alterar_secao,3,stdin);

    // Converte minuscula em maiscula
    tamStr = strlen(alterar_secao);
    for(i=0; i < tamStr; i++)
    {                            // Converte cada caracter de Str
        alterar_secao[i] =toupper(alterar_secao[i]);  // para maiuscula
    }

    /* Aqui verifica qual a UF foi digitada, a partir disso, haverá uma condição para qual
     * Estado será cadastrado (No caso vai ser cadastrado por meio de uma struct), se uma UF for digitado errado
     * havera uma mensagem relatado que a UF não existe...
     *
     * O comando rand() retorna um numero aleatorio (no caso o codigo do municipio)
     *
     *  */
    if(!(strcmp(alterar_secao,"AC"))){
        FILE *arq_zona_ac;
        FILE *arq_secao_ac;
        arq_zona_ac = fopen("arq_zona_ac.bin","rb");
        arq_secao_ac = fopen("arq_secao_ac.bin","rb");

        if(arq_zona_ac != NULL || arq_secao_ac != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&ac_zona, sizeof(struct info_zona),1,arq_zona_ac)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(ac_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_ac())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
                }

                }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_ac);
        fclose(arq_secao_ac);
    }

    else if(!(strcmp(alterar_secao,"AL"))){
        FILE *arq_zona_al;
        FILE *arq_secao_al;
        arq_zona_al = fopen("arq_zona_al.bin","rb");
        arq_secao_al = fopen("arq_secao_al.bin","rb");

        if(arq_zona_al != NULL || arq_secao_al != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&al_zona, sizeof(struct info_zona),1,arq_zona_al)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(al_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_al())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_al);
        fclose(arq_secao_al);
    }

    else if(!(strcmp(alterar_secao,"AP"))){
        FILE *arq_zona_ap;
        FILE *arq_secao_ap;
        arq_zona_ap = fopen("arq_zona_ap.bin","rb");
        arq_secao_ap = fopen("arq_secao_ap.bin","rb");

        if(arq_zona_ap != NULL || arq_secao_ap != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&ap_zona, sizeof(struct info_zona),1,arq_zona_ap)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(ap_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_ap())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_ap);
        fclose(arq_secao_ap);
    }

    else if(!(strcmp(alterar_secao,"AM"))){
        FILE *arq_zona_am;
        FILE *arq_secao_am;
        arq_zona_am = fopen("arq_zona_am.bin","rb");
        arq_secao_am = fopen("arq_secao_am.bin","rb");

        if(arq_zona_am != NULL || arq_secao_am != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&am_zona, sizeof(struct info_zona),1,arq_zona_am)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(am_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_am())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_am);
        fclose(arq_secao_am);
    }

    else if(!(strcmp(alterar_secao,"BA"))){
        FILE *arq_zona_ba;
        FILE *arq_secao_ba;
        arq_zona_ba = fopen("arq_zona_ba.bin","rb");
        arq_secao_ba = fopen("arq_secao_ba.bin","rb");

        if(arq_zona_ba != NULL || arq_secao_ba != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&ba_zona, sizeof(struct info_zona),1,arq_zona_ba)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(ba_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_ba())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_ba);
        fclose(arq_secao_ba);
    }

    else if(!(strcmp(alterar_secao,"CE"))){
        FILE *arq_zona_ce;
        FILE *arq_secao_ce;
        arq_zona_ce = fopen("arq_zona_ce.bin","rb");
        arq_secao_ce = fopen("arq_secao_ce.bin","rb");

        if(arq_zona_ce != NULL || arq_secao_ce != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&ce_zona, sizeof(struct info_zona),1,arq_zona_ce)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(ce_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_ce())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_ce);
        fclose(arq_secao_ce);
    }

    else if(!(strcmp(alterar_secao,"ES"))){
        FILE *arq_zona_es;
        FILE *arq_secao_es;
        arq_zona_es = fopen("arq_zona_es.bin","rb");
        arq_secao_es = fopen("arq_secao_es.bin","rb");

        if(arq_zona_es != NULL || arq_secao_es != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&es_zona, sizeof(struct info_zona),1,arq_zona_es)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(es_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_es())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_es);
        fclose(arq_secao_es);
    }

    else if(!(strcmp(alterar_secao,"GO"))){
        FILE *arq_zona_go;
        FILE *arq_secao_go;
        arq_zona_go = fopen("arq_zona_go.bin","rb");
        arq_secao_go = fopen("arq_secao_go.bin","rb");

        if(arq_zona_go != NULL || arq_secao_go != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&go_zona, sizeof(struct info_zona),1,arq_zona_go)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(go_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_go())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_go);
        fclose(arq_secao_go);
    }

    else if(!(strcmp(alterar_secao,"MA"))){
        FILE *arq_zona_ma;
        FILE *arq_secao_ma;
        arq_zona_ma = fopen("arq_zona_ma.bin","rb");
        arq_secao_ma = fopen("arq_secao_ma.bin","rb");

        if(arq_zona_ma != NULL || arq_secao_ma != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&ma_zona, sizeof(struct info_zona),1,arq_zona_ma)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(ma_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_ma())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_ma);
        fclose(arq_secao_ma);
    }

    else if(!(strcmp(alterar_secao,"MT"))){
        FILE *arq_zona_mt;
        FILE *arq_secao_mt;
        arq_zona_mt = fopen("arq_zona_mt.bin","rb");
        arq_secao_mt = fopen("arq_secao_mt.bin","rb");

        if(arq_zona_mt != NULL || arq_secao_mt != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&mt_zona, sizeof(struct info_zona),1,arq_zona_mt)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(mt_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_mt())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_mt);
        fclose(arq_secao_mt);
    }

    else if(!(strcmp(alterar_secao,"MS"))){
        FILE *arq_zona_ms;
        FILE *arq_secao_ms;
        arq_zona_ms = fopen("arq_zona_ms.bin","rb");
        arq_secao_ms = fopen("arq_secao_ms.bin","rb");

        if(arq_zona_ms != NULL || arq_secao_ms != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&ms_zona, sizeof(struct info_zona),1,arq_zona_ms)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(ms_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_ms())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_ms);
        fclose(arq_secao_ms);
    }

    else if(!(strcmp(alterar_secao,"MG"))){
        FILE *arq_zona_mg;
        FILE *arq_secao_mg;
        arq_zona_mg = fopen("arq_zona_mg.bin","rb");
        arq_secao_mg = fopen("arq_secao_mg.bin","rb");

        if(arq_zona_mg != NULL || arq_secao_mg != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&mg_zona, sizeof(struct info_zona),1,arq_zona_mg)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(mg_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_mg())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_mg);
        fclose(arq_secao_mg);
    }

    else if(!(strcmp(alterar_secao,"PA"))){
        FILE *arq_zona_pa;
        FILE *arq_secao_pa;
        arq_zona_pa = fopen("arq_zona_pa.bin","rb");
        arq_secao_pa = fopen("arq_secao_pa.bin","rb");

        if(arq_zona_pa != NULL || arq_secao_pa != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&pa_zona, sizeof(struct info_zona),1,arq_zona_pa)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(pa_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_pa())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_pa);
        fclose(arq_secao_pa);
    }

    else if(!(strcmp(alterar_secao,"PB"))){
        FILE *arq_zona_pb;
        FILE *arq_secao_pb;
        arq_zona_pb = fopen("arq_zona_pb.bin","rb");
        arq_secao_pb = fopen("arq_secao_pb.bin","rb");

        if(arq_zona_pb != NULL || arq_secao_pb != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&pb_zona, sizeof(struct info_zona),1,arq_zona_pb)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(pb_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_pb())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_pb);
        fclose(arq_secao_pb);
    }

    else if(!(strcmp(alterar_secao,"PR"))){
        FILE *arq_zona_pr;
        FILE *arq_secao_pr;
        arq_zona_pr = fopen("arq_zona_pr.bin","rb");
        arq_secao_pr = fopen("arq_secao_pr.bin","rb");

        if(arq_zona_pr != NULL || arq_secao_pr != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&pr_zona, sizeof(struct info_zona),1,arq_zona_pr)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(pr_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_pr())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_pr);
        fclose(arq_secao_pr);
    }

    else if(!(strcmp(alterar_secao,"PE"))){
        FILE *arq_zona_pe;
        FILE *arq_secao_pe;
        arq_zona_pe = fopen("arq_zona_pe.bin","rb");
        arq_secao_pe = fopen("arq_secao_pe.bin","rb");

        if(arq_zona_pe != NULL || arq_secao_pe != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&pe_zona, sizeof(struct info_zona),1,arq_zona_pe)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(pe_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_pe())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_pe);
        fclose(arq_secao_pe);
    }

    else if(!(strcmp(alterar_secao,"PI"))){
        FILE *arq_zona_pi;
        FILE *arq_secao_pi;
        arq_zona_pi = fopen("arq_zona_pi.bin","rb");
        arq_secao_pi = fopen("arq_secao_pi.bin","rb");

        if(arq_zona_pi != NULL || arq_secao_pi != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&pi_zona, sizeof(struct info_zona),1,arq_zona_pi)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(pi_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_pi())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_pi);
        fclose(arq_secao_pi);
    }

    else if(!(strcmp(alterar_secao,"RJ"))){
        FILE *arq_zona_rj;
        FILE *arq_secao_rj;
        arq_zona_rj = fopen("arq_zona_rj.bin","rb");
        arq_secao_rj = fopen("arq_secao_rj.bin","rb");

        if(arq_zona_rj != NULL || arq_secao_rj != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&rj_zona, sizeof(struct info_zona),1,arq_zona_rj)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(rj_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_rj())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_rj);
        fclose(arq_secao_rj);
    }

    else if(!(strcmp(alterar_secao,"RN"))){
        FILE *arq_zona_rn;
        FILE *arq_secao_rn;
        arq_zona_rn = fopen("arq_zona_rn.bin","rb");
        arq_secao_rn = fopen("arq_secao_rn.bin","rb");

        if(arq_zona_rn != NULL || arq_secao_rn != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&rn_zona, sizeof(struct info_zona),1,arq_zona_rn)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(rn_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_rn())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_rn);
        fclose(arq_secao_rn);
    }

    else if(!(strcmp(alterar_secao,"RS"))){
        FILE *arq_zona_rs;
        FILE *arq_secao_rs;
        arq_zona_rs = fopen("arq_zona_rs.bin","rb");
        arq_secao_rs = fopen("arq_secao_rs.bin","rb");

        if(arq_zona_rs != NULL || arq_secao_rs != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&rs_zona, sizeof(struct info_zona),1,arq_zona_rs)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(rs_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_rs())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_rs);
        fclose(arq_secao_rs);
    }

    else if(!(strcmp(alterar_secao,"RO"))){
        FILE *arq_zona_ro;
        FILE *arq_secao_ro;
        arq_zona_ro = fopen("arq_zona_ro.bin","rb");
        arq_secao_ro = fopen("arq_secao_ro.bin","rb");

        if(arq_zona_ro != NULL || arq_secao_ro != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&ro_zona, sizeof(struct info_zona),1,arq_zona_ro)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(ro_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_ro())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_ro);
        fclose(arq_secao_ro);
    }

    else if(!(strcmp(alterar_secao,"RR"))){
        FILE *arq_zona_rr;
        FILE *arq_secao_rr;
        arq_zona_rr = fopen("arq_zona_rr.bin","rb");
        arq_secao_rr = fopen("arq_secao_rr.bin","rb");

        if(arq_zona_rr != NULL || arq_secao_rr != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&rr_zona, sizeof(struct info_zona),1,arq_zona_rr)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(rr_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_rr())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_rr);
        fclose(arq_secao_rr);
    }

    else if(!(strcmp(alterar_secao,"SC"))){
        FILE *arq_zona_sc;
        FILE *arq_secao_sc;
        arq_zona_sc = fopen("arq_zona_sc.bin","rb");
        arq_secao_sc = fopen("arq_secao_sc.bin","rb");

        if(arq_zona_sc != NULL || arq_secao_sc != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&sc_zona, sizeof(struct info_zona),1,arq_zona_sc)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(sc_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_sc())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_sc);
        fclose(arq_secao_sc);
    }

    else if(!(strcmp(alterar_secao,"SP"))){
        FILE *arq_zona_sp;
        FILE *arq_secao_sp;
        arq_zona_sp = fopen("arq_zona_sp.bin","rb");
        arq_secao_sp = fopen("arq_secao_sp.bin","rb");

        if(arq_zona_sp != NULL || arq_secao_sp != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&sp_zona, sizeof(struct info_zona),1,arq_zona_sp)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(sp_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_sp())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_sp);
        fclose(arq_secao_sp);
    }

    else if(!(strcmp(alterar_secao,"SE"))){
        FILE *arq_zona_se;
        FILE *arq_secao_se;
        arq_zona_se = fopen("arq_zona_se.bin","rb");
        arq_secao_se = fopen("arq_secao_se.bin","rb");

        if(arq_zona_se != NULL || arq_secao_se != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&se_zona, sizeof(struct info_zona),1,arq_zona_se)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(se_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_se())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_se);
        fclose(arq_secao_se);
    }

    else if(!(strcmp(alterar_secao,"TO"))){
        FILE *arq_zona_to;
        FILE *arq_secao_to;
        arq_zona_to = fopen("arq_zona_to.bin","rb");
        arq_secao_to = fopen("arq_secao_to.bin","rb");

        if(arq_zona_to != NULL || arq_secao_to != NULL){

            getchar();
            printf("\nNumero da Zona Eleitoral para alterar a Secao Eleitoral: ");
            scanf("%d",&zona2_alterar);
            while(fread(&to_zona, sizeof(struct info_zona),1,arq_zona_to)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(to_zona.numero_zona == zona2_alterar){
                    linha();
                    printf("\nALTERAR DADOS DO NUMERO DA SECAO DO ESTADO: %s",alterar_secao);
                    printf("\n");
                    linha();

                    printf("\nAlterar numero da secao, digite o numero para alteracao: ");
                    getchar();
                    scanf("%d",&secao_alterar);

                    if(!(alterar_secao_to())){
                        linha();
                        printf("\nNUNHUMA SECAO ENCONTRADA");
                        linha();
                    }

                }
            }

        }

        else{
            linha();
            printf("Dados nao encontrados.");
            linha();
        }

        fclose(arq_zona_to);
        fclose(arq_secao_to);
    }




    else{
        linha();
        printf("########## OPACAO INVALIDA ##########\n");
        linha();
    }

}