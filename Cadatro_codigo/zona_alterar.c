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


int zona_alterar;
int v_zona = 0;


int alterar_zona_ac(){

    FILE *arq_zona_ac;
    arq_zona_ac = fopen("arq_zona_ac.bin","rb");


    v_zona = 0;



    do {
        fread(&ac_zona, sizeof(struct info_zona), 1, arq_zona_ac);
        if(zona_alterar == ac_zona.numero_zona){

            fclose(arq_zona_ac);

            arq_zona_ac = fopen("arq_zona_ac.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_ac,500,SEEK_CUR);

            ac_zona.numero_zona = zona_alterar;

            fwrite(&ac_zona, sizeof(struct info_zona),1,arq_zona_ac);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",ac_zona.numero_zona);
            linha();


            fclose(arq_zona_ac);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_ac)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_ac);

    return v_zona;
}

int alterar_zona_al(){

    FILE *arq_zona_al;
    arq_zona_al = fopen("arq_zona_al.bin","rb");


    v_zona = 0;



    do {
        fread(&al_zona, sizeof(struct info_zona), 1, arq_zona_al);
        if(zona_alterar == al_zona.numero_zona){

            fclose(arq_zona_al);

            arq_zona_al = fopen("arq_zona_al.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_al,500,SEEK_CUR);

            al_zona.numero_zona = zona_alterar;

            fwrite(&al_zona, sizeof(struct info_zona),1,arq_zona_al);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",al_zona.numero_zona);
            linha();


            fclose(arq_zona_al);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_al)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_al);

    return v_zona;
}

int alterar_zona_ap(){

    FILE *arq_zona_ap;
    arq_zona_ap = fopen("arq_zona_ap.bin","rb");


    v_zona = 0;



    do {
        fread(&ap_zona, sizeof(struct info_zona), 1, arq_zona_ap);
        if(zona_alterar == ap_zona.numero_zona){

            fclose(arq_zona_ap);

            arq_zona_ap = fopen("arq_zona_ap.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_ap,500,SEEK_CUR);

            ap_zona.numero_zona = zona_alterar;

            fwrite(&ap_zona, sizeof(struct info_zona),1,arq_zona_ap);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",ap_zona.numero_zona);
            linha();


            fclose(arq_zona_ap);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_ap)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_ap);

    return v_zona;
}

int alterar_zona_am(){

    FILE *arq_zona_am;
    arq_zona_am = fopen("arq_zona_am.bin","rb");


    v_zona = 0;



    do {
        fread(&am_zona, sizeof(struct info_zona), 1, arq_zona_am);
        if(zona_alterar == am_zona.numero_zona){

            fclose(arq_zona_am);

            arq_zona_am = fopen("arq_zona_am.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_am,500,SEEK_CUR);

            am_zona.numero_zona = zona_alterar;

            fwrite(&am_zona, sizeof(struct info_zona),1,arq_zona_am);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",am_zona.numero_zona);
            linha();


            fclose(arq_zona_am);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_am)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_am);

    return v_zona;
}

int alterar_zona_ba(){

    FILE *arq_zona_ba;
    arq_zona_ba = fopen("arq_zona_ba.bin","rb");


    v_zona = 0;



    do {
        fread(&ba_zona, sizeof(struct info_zona), 1, arq_zona_ba);
        if(zona_alterar == ba_zona.numero_zona){

            fclose(arq_zona_ba);

            arq_zona_ba = fopen("arq_zona_ba.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_ba,500,SEEK_CUR);

            ba_zona.numero_zona = zona_alterar;

            fwrite(&ba_zona, sizeof(struct info_zona),1,arq_zona_ba);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",ba_zona.numero_zona);
            linha();


            fclose(arq_zona_ba);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_ba)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_ba);

    return v_zona;
}

int alterar_zona_ce(){

    FILE *arq_zona_ce;
    arq_zona_ce = fopen("arq_zona_ce.bin","rb");


    v_zona = 0;



    do {
        fread(&ce_zona, sizeof(struct info_zona), 1, arq_zona_ce);
        if(zona_alterar == ce_zona.numero_zona){

            fclose(arq_zona_ce);

            arq_zona_ce = fopen("arq_zona_ce.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_ce,500,SEEK_CUR);

            ce_zona.numero_zona = zona_alterar;

            fwrite(&ce_zona, sizeof(struct info_zona),1,arq_zona_ce);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",ce_zona.numero_zona);
            linha();


            fclose(arq_zona_ce);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_ce)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_ce);

    return v_zona;
}

int alterar_zona_es(){

    FILE *arq_zona_es;
    arq_zona_es = fopen("arq_zona_es.bin","rb");


    v_zona = 0;



    do {
        fread(&es_zona, sizeof(struct info_zona), 1, arq_zona_es);
        if(zona_alterar == es_zona.numero_zona){

            fclose(arq_zona_es);

            arq_zona_es = fopen("arq_zona_es.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_es,500,SEEK_CUR);

            es_zona.numero_zona = zona_alterar;

            fwrite(&es_zona, sizeof(struct info_zona),1,arq_zona_es);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",es_zona.numero_zona);
            linha();


            fclose(arq_zona_es);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_es)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_es);

    return v_zona;
}

int alterar_zona_go(){

    FILE *arq_zona_go;
    arq_zona_go = fopen("arq_zona_go.bin","rb");


    v_zona = 0;



    do {
        fread(&go_zona, sizeof(struct info_zona), 1, arq_zona_go);
        if(zona_alterar == go_zona.numero_zona){

            fclose(arq_zona_go);

            arq_zona_go = fopen("arq_zona_go.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_go,500,SEEK_CUR);

            go_zona.numero_zona = zona_alterar;

            fwrite(&go_zona, sizeof(struct info_zona),1,arq_zona_go);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",go_zona.numero_zona);
            linha();


            fclose(arq_zona_go);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_go)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_go);

    return v_zona;
}

int alterar_zona_ma(){

    FILE *arq_zona_ma;
    arq_zona_ma = fopen("arq_zona_ma.bin","rb");


    v_zona = 0;



    do {
        fread(&ma_zona, sizeof(struct info_zona), 1, arq_zona_ma);
        if(zona_alterar == ma_zona.numero_zona){

            fclose(arq_zona_ma);

            arq_zona_ma = fopen("arq_zona_ma.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_ma,500,SEEK_CUR);

            ma_zona.numero_zona = zona_alterar;

            fwrite(&ma_zona, sizeof(struct info_zona),1,arq_zona_ma);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",ma_zona.numero_zona);
            linha();


            fclose(arq_zona_ma);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_ma)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_ma);

    return v_zona;
}

int alterar_zona_mt(){

    FILE *arq_zona_mt;
    arq_zona_mt = fopen("arq_zona_mt.bin","rb");


    v_zona = 0;



    do {
        fread(&mt_zona, sizeof(struct info_zona), 1, arq_zona_mt);
        if(zona_alterar == mt_zona.numero_zona){

            fclose(arq_zona_mt);

            arq_zona_mt = fopen("arq_zona_mt.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_mt,500,SEEK_CUR);

            mt_zona.numero_zona = zona_alterar;

            fwrite(&mt_zona, sizeof(struct info_zona),1,arq_zona_mt);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",mt_zona.numero_zona);
            linha();


            fclose(arq_zona_mt);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_mt)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_mt);

    return v_zona;
}

int alterar_zona_ms(){

    FILE *arq_zona_ms;
    arq_zona_ms = fopen("arq_zona_ms.bin","rb");


    v_zona = 0;



    do {
        fread(&ms_zona, sizeof(struct info_zona), 1, arq_zona_ms);
        if(zona_alterar == ms_zona.numero_zona){

            fclose(arq_zona_ms);

            arq_zona_ms = fopen("arq_zona_ms.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_ms,500,SEEK_CUR);

            ms_zona.numero_zona = zona_alterar;

            fwrite(&ms_zona, sizeof(struct info_zona),1,arq_zona_ms);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",ms_zona.numero_zona);
            linha();


            fclose(arq_zona_ms);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_ms)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_ms);

    return v_zona;
}

int alterar_zona_mg(){

    FILE *arq_zona_mg;
    arq_zona_mg = fopen("arq_zona_mg.bin","rb");


    v_zona = 0;



    do {
        fread(&mg_zona, sizeof(struct info_zona), 1, arq_zona_mg);
        if(zona_alterar == mg_zona.numero_zona){

            fclose(arq_zona_mg);

            arq_zona_mg = fopen("arq_zona_mg.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_mg,500,SEEK_CUR);

            mg_zona.numero_zona = zona_alterar;

            fwrite(&mg_zona, sizeof(struct info_zona),1,arq_zona_mg);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",mg_zona.numero_zona);
            linha();


            fclose(arq_zona_mg);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_mg)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_mg);

    return v_zona;
}

int alterar_zona_pa(){

    FILE *arq_zona_pa;
    arq_zona_pa = fopen("arq_zona_pa.bin","rb");


    v_zona = 0;



    do {
        fread(&pa_zona, sizeof(struct info_zona), 1, arq_zona_pa);
        if(zona_alterar == pa_zona.numero_zona){

            fclose(arq_zona_pa);

            arq_zona_pa = fopen("arq_zona_pa.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_pa,500,SEEK_CUR);

            pa_zona.numero_zona = zona_alterar;

            fwrite(&pa_zona, sizeof(struct info_zona),1,arq_zona_pa);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",pa_zona.numero_zona);
            linha();


            fclose(arq_zona_pa);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_pa)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_pa);

    return v_zona;
}

int alterar_zona_pb(){

    FILE *arq_zona_pb;
    arq_zona_pb = fopen("arq_zona_pb.bin","rb");


    v_zona = 0;



    do {
        fread(&pb_zona, sizeof(struct info_zona), 1, arq_zona_pb);
        if(zona_alterar == pb_zona.numero_zona){

            fclose(arq_zona_pb);

            arq_zona_pb = fopen("arq_zona_pb.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_pb,500,SEEK_CUR);

            pb_zona.numero_zona = zona_alterar;

            fwrite(&pb_zona, sizeof(struct info_zona),1,arq_zona_pb);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",pb_zona.numero_zona);
            linha();


            fclose(arq_zona_pb);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_pb)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_pb);

    return v_zona;
}

int alterar_zona_pr(){

    FILE *arq_zona_pr;
    arq_zona_pr = fopen("arq_zona_pr.bin","rb");


    v_zona = 0;



    do {
        fread(&pr_zona, sizeof(struct info_zona), 1, arq_zona_pr);
        if(zona_alterar == pr_zona.numero_zona){

            fclose(arq_zona_pr);

            arq_zona_pr = fopen("arq_zona_pr.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_pr,500,SEEK_CUR);

            pr_zona.numero_zona = zona_alterar;

            fwrite(&pr_zona, sizeof(struct info_zona),1,arq_zona_pr);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",pr_zona.numero_zona);
            linha();


            fclose(arq_zona_pr);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_pr)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_pr);

    return v_zona;
}

int alterar_zona_pe(){

    FILE *arq_zona_pe;
    arq_zona_pe = fopen("arq_zona_pe.bin","rb");


    v_zona = 0;



    do {
        fread(&pe_zona, sizeof(struct info_zona), 1, arq_zona_pe);
        if(zona_alterar == pe_zona.numero_zona){

            fclose(arq_zona_pe);

            arq_zona_pe = fopen("arq_zona_pe.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_pe,500,SEEK_CUR);

            pe_zona.numero_zona = zona_alterar;

            fwrite(&pe_zona, sizeof(struct info_zona),1,arq_zona_pe);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",pe_zona.numero_zona);
            linha();


            fclose(arq_zona_pe);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_pe)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_pe);

    return v_zona;
}

int alterar_zona_pi(){

    FILE *arq_zona_pi;
    arq_zona_pi = fopen("arq_zona_pi.bin","rb");


    v_zona = 0;



    do {
        fread(&pi_zona, sizeof(struct info_zona), 1, arq_zona_pi);
        if(zona_alterar == pi_zona.numero_zona){

            fclose(arq_zona_pi);

            arq_zona_pi = fopen("arq_zona_pi.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_pi,500,SEEK_CUR);

            pi_zona.numero_zona = zona_alterar;

            fwrite(&pi_zona, sizeof(struct info_zona),1,arq_zona_pi);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",pi_zona.numero_zona);
            linha();


            fclose(arq_zona_pi);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_pi)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_pi);

    return v_zona;
}

int alterar_zona_rj(){

    FILE *arq_zona_rj;
    arq_zona_rj = fopen("arq_zona_rj.bin","rb");


    v_zona = 0;



    do {
        fread(&rj_zona, sizeof(struct info_zona), 1, arq_zona_rj);
        if(zona_alterar == rj_zona.numero_zona){

            fclose(arq_zona_rj);

            arq_zona_rj = fopen("arq_zona_rj.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_rj,500,SEEK_CUR);

            rj_zona.numero_zona = zona_alterar;

            fwrite(&rj_zona, sizeof(struct info_zona),1,arq_zona_rj);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",rj_zona.numero_zona);
            linha();


            fclose(arq_zona_rj);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_rj)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_rj);

    return v_zona;
}

int alterar_zona_rn(){

    FILE *arq_zona_rn;
    arq_zona_rn = fopen("arq_zona_rn.bin","rb");


    v_zona = 0;



    do {
        fread(&rn_zona, sizeof(struct info_zona), 1, arq_zona_rn);
        if(zona_alterar == rn_zona.numero_zona){

            fclose(arq_zona_rn);

            arq_zona_rn = fopen("arq_zona_rn.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_rn,500,SEEK_CUR);

            rn_zona.numero_zona = zona_alterar;

            fwrite(&rn_zona, sizeof(struct info_zona),1,arq_zona_rn);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",rn_zona.numero_zona);
            linha();


            fclose(arq_zona_rn);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_rn)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_rn);

    return v_zona;
}

int alterar_zona_rs(){

    FILE *arq_zona_rs;
    arq_zona_rs = fopen("arq_zona_rs.bin","rb");


    v_zona = 0;



    do {
        fread(&rs_zona, sizeof(struct info_zona), 1, arq_zona_rs);
        if(zona_alterar == rs_zona.numero_zona){

            fclose(arq_zona_rs);

            arq_zona_rs = fopen("arq_zona_rs.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_rs,500,SEEK_CUR);

            rs_zona.numero_zona = zona_alterar;

            fwrite(&rs_zona, sizeof(struct info_zona),1,arq_zona_rs);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",rs_zona.numero_zona);
            linha();


            fclose(arq_zona_rs);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_rs)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_rs);

    return v_zona;
}

int alterar_zona_ro(){

    FILE *arq_zona_ro;
    arq_zona_ro = fopen("arq_zona_ro.bin","rb");


    v_zona = 0;



    do {
        fread(&ro_zona, sizeof(struct info_zona), 1, arq_zona_ro);
        if(zona_alterar == ro_zona.numero_zona){

            fclose(arq_zona_ro);

            arq_zona_ro = fopen("arq_zona_ro.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_ro,500,SEEK_CUR);

            ro_zona.numero_zona = zona_alterar;

            fwrite(&ro_zona, sizeof(struct info_zona),1,arq_zona_ro);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",ro_zona.numero_zona);
            linha();


            fclose(arq_zona_ro);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_ro)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_ro);

    return v_zona;
}

int alterar_zona_rr(){

    FILE *arq_zona_rr;
    arq_zona_rr = fopen("arq_zona_rr.bin","rb");


    v_zona = 0;



    do {
        fread(&rr_zona, sizeof(struct info_zona), 1, arq_zona_rr);
        if(zona_alterar == rr_zona.numero_zona){

            fclose(arq_zona_rr);

            arq_zona_rr = fopen("arq_zona_rr.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_rr,500,SEEK_CUR);

            rr_zona.numero_zona = zona_alterar;

            fwrite(&rr_zona, sizeof(struct info_zona),1,arq_zona_rr);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",rr_zona.numero_zona);
            linha();


            fclose(arq_zona_rr);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_rr)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_rr);

    return v_zona;
}

int alterar_zona_sc(){

    FILE *arq_zona_sc;
    arq_zona_sc = fopen("arq_zona_sc.bin","rb");


    v_zona = 0;



    do {
        fread(&sc_zona, sizeof(struct info_zona), 1, arq_zona_sc);
        if(zona_alterar == sc_zona.numero_zona){

            fclose(arq_zona_sc);

            arq_zona_sc = fopen("arq_zona_sc.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_sc,500,SEEK_CUR);

            sc_zona.numero_zona = zona_alterar;

            fwrite(&sc_zona, sizeof(struct info_zona),1,arq_zona_sc);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",sc_zona.numero_zona);
            linha();


            fclose(arq_zona_sc);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_sc)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_sc);

    return v_zona;
}

int alterar_zona_sp(){

    FILE *arq_zona_sp;
    arq_zona_sp = fopen("arq_zona_sp.bin","rb");


    v_zona = 0;



    do {
        fread(&sp_zona, sizeof(struct info_zona), 1, arq_zona_sp);
        if(zona_alterar == sp_zona.numero_zona){

            fclose(arq_zona_sp);

            arq_zona_sp = fopen("arq_zona_sp.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_sp,500,SEEK_CUR);

            sp_zona.numero_zona = zona_alterar;

            fwrite(&sp_zona, sizeof(struct info_zona),1,arq_zona_sp);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",sp_zona.numero_zona);
            linha();


            fclose(arq_zona_sp);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_sp)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_sp);

    return v_zona;
}

int alterar_zona_se(){

    FILE *arq_zona_se;
    arq_zona_se = fopen("arq_zona_se.bin","rb");


    v_zona = 0;



    do {
        fread(&se_zona, sizeof(struct info_zona), 1, arq_zona_se);
        if(zona_alterar == se_zona.numero_zona){

            fclose(arq_zona_se);

            arq_zona_se = fopen("arq_zona_se.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_se,500,SEEK_CUR);

            se_zona.numero_zona = zona_alterar;

            fwrite(&se_zona, sizeof(struct info_zona),1,arq_zona_se);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",se_zona.numero_zona);
            linha();


            fclose(arq_zona_se);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_se)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_se);

    return v_zona;
}

int alterar_zona_to(){

    FILE *arq_zona_to;
    arq_zona_to = fopen("arq_zona_to.bin","rb");


    v_zona = 0;



    do {
        fread(&to_zona, sizeof(struct info_zona), 1, arq_zona_to);
        if(zona_alterar == to_zona.numero_zona){

            fclose(arq_zona_to);

            arq_zona_to = fopen("arq_zona_to.bin","ab");

            printf("\nNovo numero para zona: %d",zona_alterar);
            fflush(stdin);
            printf("\nDigite: ");
            scanf("%d",&zona_alterar);


            fseek(arq_zona_to,500,SEEK_CUR);

            to_zona.numero_zona = zona_alterar;

            fwrite(&to_zona, sizeof(struct info_zona),1,arq_zona_to);

            linha();
            printf("\nNOVO NUMERO PARA ZONA: %d",to_zona.numero_zona);
            linha();


            fclose(arq_zona_to);

            return v_zona = 1;


        }
    } while (!feof(arq_zona_to)); // enquanto não chegar ao final do arquivo

    fclose(arq_zona_to);

    return v_zona;
}





void func_alterar_zona(){
    char alterar_zona[3];
    int tamStr,i;


    // Esse comando faz com que nao tenha novos numeros aleatorios a cada nova execucao do programa.
    srand( (unsigned)time(NULL) );

    printf("\nMUNICIPIOS RESTANTE PARA O CADASTRO NO TRE: \n");
    estados_aparecer();

    getchar();
    printf("\nDigite a UF do Estado para o cadastro do municipio: ");
    fgets(alterar_zona,3,stdin);

    // Converte minuscula em maiscula
    tamStr = strlen(alterar_zona);
    for(i=0; i < tamStr; i++)
    {                            // Converte cada caracter de Str
        alterar_zona[i] =toupper(alterar_zona[i]);  // para maiuscula
    }

    /* Aqui verifica qual a UF foi digitada, a partir disso, haverá uma condição para qual
     * Estado será cadastrado (No caso vai ser cadastrado por meio de uma struct), se uma UF for digitado errado
     * havera uma mensagem relatado que a UF não existe...
     *
     * O comando rand() retorna um numero aleatorio (no caso o codigo do municipio)
     *
     *  */
    if(!(strcmp(alterar_zona,"AC"))){
        FILE *arq_zona_ac;
        arq_zona_ac = fopen("arq_zona_ac.bin","rb");

        if(arq_zona_ac != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_ac())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_ac);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

        }

    else if(!(strcmp(alterar_zona,"AL"))){
        FILE *arq_zona_al;
        arq_zona_al = fopen("arq_zona_al.bin","rb");

        if(arq_zona_al != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_al())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_al);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }

    else if(!(strcmp(alterar_zona,"AP"))){
        FILE *arq_zona_ap;
        arq_zona_ap = fopen("arq_zona_ap.bin","rb");

        if(arq_zona_ap != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_ap())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_ap);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }

    else if(!(strcmp(alterar_zona,"AM"))){
        FILE *arq_zona_am;
        arq_zona_am = fopen("arq_zona_am.bin","rb");

        if(arq_zona_am != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_am())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_am);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }

    else if(!(strcmp(alterar_zona,"BA"))){
        FILE *arq_zona_ba;
        arq_zona_ba = fopen("arq_zona_ba.bin","rb");

        if(arq_zona_ba != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_ba())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_ba);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }

    else if(!(strcmp(alterar_zona,"CE"))){
        FILE *arq_zona_ce;
        arq_zona_ce = fopen("arq_zona_ce.bin","rb");

        if(arq_zona_ce != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_ce())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_ce);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }

    else if(!(strcmp(alterar_zona,"ES"))){
        FILE *arq_zona_es;
        arq_zona_es = fopen("arq_zona_es.bin","rb");

        if(arq_zona_es != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_es())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_es);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }

    else if(!(strcmp(alterar_zona,"GO"))){
        FILE *arq_zona_go;
        arq_zona_go = fopen("arq_zona_go.bin","rb");

        if(arq_zona_go != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_go())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_go);
        }

        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }

    else if(!(strcmp(alterar_zona,"MA"))){
        FILE *arq_zona_ma;
        arq_zona_ma = fopen("arq_zona_ma.bin","rb");

        if(arq_zona_ma != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_ma())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_ma);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }

    else if(!(strcmp(alterar_zona,"MT"))){
        FILE *arq_zona_mt;
        arq_zona_mt = fopen("arq_zona_mt.bin","rb");

        if(arq_zona_mt != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_mt())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_mt);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }

    else if(!(strcmp(alterar_zona,"MS"))){
        FILE *arq_zona_ms;
        arq_zona_ms = fopen("arq_zona_ms.bin","rb");

        if(arq_zona_ms != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_ms())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_ms);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }

    else if(!(strcmp(alterar_zona,"MG"))){
        FILE *arq_zona_mg;
        arq_zona_mg = fopen("arq_zona_mg.bin","rb");

        if(arq_zona_mg != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_mg())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_mg);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }

    else if(!(strcmp(alterar_zona,"PA"))){
        FILE *arq_zona_pa;
        arq_zona_pa = fopen("arq_zona_pa.bin","rb");

        if(arq_zona_pa != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_pa())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_pa);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }

    else if(!(strcmp(alterar_zona,"PB"))){
        FILE *arq_zona_pb;
        arq_zona_pb = fopen("arq_zona_pb.bin","rb");

        if(arq_zona_pb != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_pb())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_pb);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }

    else if(!(strcmp(alterar_zona,"PR"))){
        FILE *arq_zona_pr;
        arq_zona_pr = fopen("arq_zona_pr.bin","rb");

        if(arq_zona_pr != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_pr())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_pr);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }

    else if(!(strcmp(alterar_zona,"PE"))){
        FILE *arq_zona_pe;
        arq_zona_pe = fopen("arq_zona_pe.bin","rb");

        if(arq_zona_pe != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_pe())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_pe);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }

    else if(!(strcmp(alterar_zona,"PI"))){
        FILE *arq_zona_pi;
        arq_zona_pi = fopen("arq_zona_pi.bin","rb");

        if(arq_zona_pi != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_pi())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_pi);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }

    else if(!(strcmp(alterar_zona,"RJ"))){
        FILE *arq_zona_rj;
        arq_zona_rj = fopen("arq_zona_rj.bin","rb");

        if(arq_zona_rj != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_rj())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_rj);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }


    else if(!(strcmp(alterar_zona,"RN"))){
        FILE *arq_zona_rn;
        arq_zona_rn = fopen("arq_zona_rn.bin","rb");

        if(arq_zona_rn != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_rn())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_rn);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }

    else if(!(strcmp(alterar_zona,"RS"))){
        FILE *arq_zona_rs;
        arq_zona_rs = fopen("arq_zona_rs.bin","rb");

        if(arq_zona_rs != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_rs())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_rs);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }

    else if(!(strcmp(alterar_zona,"RO"))){
        FILE *arq_zona_ro;
        arq_zona_ro = fopen("arq_zona_ro.bin","rb");

        if(arq_zona_ro != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_ro())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_ro);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }

    else if(!(strcmp(alterar_zona,"RR"))){
        FILE *arq_zona_rr;
        arq_zona_rr = fopen("arq_zona_rr.bin","rb");

        if(arq_zona_rr != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_rr())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_rr);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }

    else if(!(strcmp(alterar_zona,"SC"))){
        FILE *arq_zona_sc;
        arq_zona_sc = fopen("arq_zona_sc.bin","rb");

        if(arq_zona_sc != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_sc())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_sc);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }

    else if(!(strcmp(alterar_zona,"SP"))){
        FILE *arq_zona_sp;
        arq_zona_sp = fopen("arq_zona_sp.bin","rb");

        if(arq_zona_sp != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_sp())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_sp);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }

    else if(!(strcmp(alterar_zona,"SE"))){
        FILE *arq_zona_se;
        arq_zona_se = fopen("arq_zona_se.bin","rb");

        if(arq_zona_se != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_se())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_se);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }

    else if(!(strcmp(alterar_zona,"TO"))){
        FILE *arq_zona_to;
        arq_zona_to = fopen("arq_zona_to.bin","rb");

        if(arq_zona_to != NULL){
            linha();
            printf("\nALTERAR DADOS DO NUMERO DA ZONA DO ESTADO: %s",alterar_zona);
            printf("\n");
            linha();

            printf("\nAlterar numero da zona, digite o numero para alteracao: ");
            getchar();
            scanf("%d",&zona_alterar);

            if(!(alterar_zona_to())){
                linha();
                printf("\nNUNHUMA ZONA ENCONTRADA");
                linha();
            }


            fclose(arq_zona_to);
        }
        else{
            linha();
            printf("\nNao existe nenhum dados para alteracao");
            linha();
        }

    }

    else{
        linha();
        printf("########## OPACAO INVALIDA ##########\n");
        linha();
    }


}