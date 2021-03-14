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

int repetir_endereco_zona = 0;
int repetir_juiz_zona = 0;
int repetir_chefe_zona = 0;
int repetir_numero_zona = 0;

char nome_endereco[100];
char nome_juiz[100];
char nome_chefe[100];
int numero_zona;

// struct para as informacoes das zonas eleitorais
struct info_zona{
    char endereco_zona[100];
    char telefone_zona[100];
    char juiz_zona[100];
    char chefe_zona[100];
    char municipio_zona[100];
    int numero_zona;

}ac_zona,al_zona,ap_zona,am_zona,ba_zona,ce_zona,es_zona,go_zona,ma_zona,mt_zona,ms_zona,mg_zona,pa_zona,pb_zona,pr_zona,pe_zona,pi_zona,rj_zona,rn_zona,rs_zona,ro_zona,rr_zona,sc_zona,sp_zona,se_zona,to_zona;


// As seguintes funcoes mostram se existe um mesmo endereco de um arquivo
int verificar_endereco_ac(){
    //AC
    FILE *arq_zona_ac;
    arq_zona_ac = fopen("arq_zona_ac.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&ac_zona, sizeof(struct info_zona), 1, arq_zona_ac);
        if(!(strcmp(nome_endereco,ac_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_ac)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ac);

    return repetir_endereco_zona;
}

int verificar_endereco_al(){
    //AL
    FILE *arq_zona_al;
    arq_zona_al = fopen("arq_zona_al.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&al_zona, sizeof(struct info_zona), 1, arq_zona_al);
        if(!(strcmp(nome_endereco,al_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_al)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_al);

    return repetir_endereco_zona;
}

int verificar_endereco_ap(){
    //AP
    FILE *arq_zona_ap;
    arq_zona_ap = fopen("arq_zona_ap.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&ap_zona, sizeof(struct info_zona), 1, arq_zona_ap);
        if(!(strcmp(nome_endereco,ap_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_ap)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ap);

    return repetir_endereco_zona;
}

int verificar_endereco_am(){
    //AM
    FILE *arq_zona_am;
    arq_zona_am = fopen("arq_zona_am.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&am_zona, sizeof(struct info_zona), 1, arq_zona_am);
        if(!(strcmp(nome_endereco,am_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_am)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_am);

    return repetir_endereco_zona;
}

int verificar_endereco_ba(){
    //BA
    FILE *arq_zona_ba;
    arq_zona_ba = fopen("arq_zona_ba.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&ba_zona, sizeof(struct info_zona), 1, arq_zona_ba);
        if(!(strcmp(nome_endereco,ba_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_ba)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ba);

    return repetir_endereco_zona;
}

int verificar_endereco_ce(){
    //CE
    FILE *arq_zona_ce;
    arq_zona_ce = fopen("arq_zona_ce.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&ce_zona, sizeof(struct info_zona), 1, arq_zona_ce);
        if(!(strcmp(nome_endereco,ce_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_ce)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ce);

    return repetir_endereco_zona;
}

int verificar_endereco_es(){
    //ES
    FILE *arq_zona_es;
    arq_zona_es = fopen("arq_zona_es.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&es_zona, sizeof(struct info_zona), 1, arq_zona_es);
        if(!(strcmp(nome_endereco,es_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_es)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_es);

    return repetir_endereco_zona;
}

int verificar_endereco_go(){
    //GO
    FILE *arq_zona_go;
    arq_zona_go = fopen("arq_zona_go.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&go_zona, sizeof(struct info_zona), 1, arq_zona_go);
        if(!(strcmp(nome_endereco,go_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_go)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_go);

    return repetir_endereco_zona;
}

int verificar_endereco_ma(){
    //MA
    FILE *arq_zona_ma;
    arq_zona_ma = fopen("arq_zona_ma.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&ma_zona, sizeof(struct info_zona), 1, arq_zona_ma);
        if(!(strcmp(nome_endereco,ma_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_ma)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ma);

    return repetir_endereco_zona;
}

int verificar_endereco_mt(){
    //MT
    FILE *arq_zona_mt;
    arq_zona_mt = fopen("arq_zona_mt.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&mt_zona, sizeof(struct info_zona), 1, arq_zona_mt);
        if(!(strcmp(nome_endereco,ma_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_mt)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_mt);

    return repetir_endereco_zona;
}

int verificar_endereco_ms(){
    //MS
    FILE *arq_zona_ms;
    arq_zona_ms = fopen("arq_zona_ms.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&ms_zona, sizeof(struct info_zona), 1, arq_zona_ms);
        if(!(strcmp(nome_endereco,ms_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_ms)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ms);

    return repetir_endereco_zona;
}

int verificar_endereco_mg(){
    //MG
    FILE *arq_zona_mg;
    arq_zona_mg = fopen("arq_zona_mg.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&mg_zona, sizeof(struct info_zona), 1, arq_zona_mg);
        if(!(strcmp(nome_endereco,mg_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_mg)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_mg);

    return repetir_endereco_zona;
}

int verificar_endereco_pa(){
    //PA
    FILE *arq_zona_pa;
    arq_zona_pa = fopen("arq_zona_pa.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&pa_zona, sizeof(struct info_zona), 1, arq_zona_pa);
        if(!(strcmp(nome_endereco,pa_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_pa)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_pa);

    return repetir_endereco_zona;
}

int verificar_endereco_pb(){
    //PB
    FILE *arq_zona_pb;
    arq_zona_pb = fopen("arq_zona_pb.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&pb_zona, sizeof(struct info_zona), 1, arq_zona_pb);
        if(!(strcmp(nome_endereco,pb_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_pb)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_pb);

    return repetir_endereco_zona;
}

int verificar_endereco_pr(){
    //PR
    FILE *arq_zona_pr;
    arq_zona_pr = fopen("arq_zona_pr.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&pr_zona, sizeof(struct info_zona), 1, arq_zona_pr);
        if(!(strcmp(nome_endereco,pr_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_pr)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_pr);

    return repetir_endereco_zona;
}

int verificar_endereco_pe(){
    //PE
    FILE *arq_zona_pe;
    arq_zona_pe = fopen("arq_zona_pe.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&pe_zona, sizeof(struct info_zona), 1, arq_zona_pe);
        if(!(strcmp(nome_endereco,pe_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_pe)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_pe);

    return repetir_endereco_zona;
}

int verificar_endereco_pi(){
    //PI
    FILE *arq_zona_pi;
    arq_zona_pi = fopen("arq_zona_pi.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&pi_zona, sizeof(struct info_zona), 1, arq_zona_pi);
        if(!(strcmp(nome_endereco,pi_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_pi)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_pi);

    return repetir_endereco_zona;
}

int verificar_endereco_rj(){
    //RJ
    FILE *arq_zona_rj;
    arq_zona_rj = fopen("arq_zona_rj.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&rj_zona, sizeof(struct info_zona), 1, arq_zona_rj);
        if(!(strcmp(nome_endereco,rj_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_rj)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_rj);

    return repetir_endereco_zona;
}

int verificar_endereco_rn(){
    //RN
    FILE *arq_zona_rn;
    arq_zona_rn = fopen("arq_zona_rn.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&rn_zona, sizeof(struct info_zona), 1, arq_zona_rn);
        if(!(strcmp(nome_endereco,rn_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_rn)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_rn);

    return repetir_endereco_zona;
}

int verificar_endereco_rs(){
    //RS
    FILE *arq_zona_rs;
    arq_zona_rs = fopen("arq_zona_rs.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&rs_zona, sizeof(struct info_zona), 1, arq_zona_rs);
        if(!(strcmp(nome_endereco,rs_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_rs)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_rs);

    return repetir_endereco_zona;
}

int verificar_endereco_ro(){
    //RO
    FILE *arq_zona_ro;
    arq_zona_ro = fopen("arq_zona_ro.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&ro_zona, sizeof(struct info_zona), 1, arq_zona_ro);
        if(!(strcmp(nome_endereco,ro_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_ro)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ro);

    return repetir_endereco_zona;
}

int verificar_endereco_rr(){
    //RR
    FILE *arq_zona_rr;
    arq_zona_rr = fopen("arq_zona_rr.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&rr_zona, sizeof(struct info_zona), 1, arq_zona_rr);
        if(!(strcmp(nome_endereco,rr_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_rr)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_rr);

    return repetir_endereco_zona;
}

int verificar_endereco_sc(){
    //SC
    FILE *arq_zona_sc;
    arq_zona_sc = fopen("arq_zona_sc.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&sc_zona, sizeof(struct info_zona), 1, arq_zona_sc);
        if(!(strcmp(nome_endereco,sc_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_sc)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_sc);

    return repetir_endereco_zona;
}

int verificar_endereco_sp(){
    //SP
    FILE *arq_zona_sp;
    arq_zona_sp = fopen("arq_zona_sp.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&sp_zona, sizeof(struct info_zona), 1, arq_zona_sp);
        if(!(strcmp(nome_endereco,sp_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_sp)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_sp);

    return repetir_endereco_zona;
}

int verificar_endereco_se(){
    //SE
    FILE *arq_zona_se;
    arq_zona_se = fopen("arq_zona_se.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&se_zona, sizeof(struct info_zona), 1, arq_zona_se);
        if(!(strcmp(nome_endereco,se_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_se)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_se);

    return repetir_endereco_zona;
}

int verificar_endereco_to(){
    //TO
    FILE *arq_zona_to;
    arq_zona_to = fopen("arq_zona_to.bin","rb");

    repetir_endereco_zona = 0;


    do {
        fread(&to_zona, sizeof(struct info_zona), 1, arq_zona_to);
        if(!(strcmp(nome_endereco,to_zona.endereco_zona))){
            printf("\nENDERECO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_endereco,100,stdin);
            repetir_endereco_zona = 1;
        }
    } while (!feof(arq_zona_to)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_to);

    return repetir_endereco_zona;
}




// Verificar se existe um mesmo juiz eleitoral
int verificar_juiz_ac(){
    //AC
    FILE *arq_zona_ac;
    arq_zona_ac = fopen("arq_zona_ac.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&ac_zona, sizeof(struct info_zona), 1, arq_zona_ac);
        if(!(strcmp(nome_juiz,ac_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_ac)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ac);

    return repetir_juiz_zona;
}

int verificar_juiz_al(){
    //AL
    FILE *arq_zona_al;
    arq_zona_al = fopen("arq_zona_al.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&al_zona, sizeof(struct info_zona), 1, arq_zona_al);
        if(!(strcmp(nome_juiz,al_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_al)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_al);

    return repetir_juiz_zona;
}

int verificar_juiz_ap(){
    //AP
    FILE *arq_zona_ap;
    arq_zona_ap = fopen("arq_zona_ap.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&ap_zona, sizeof(struct info_zona), 1, arq_zona_ap);
        if(!(strcmp(nome_juiz,ap_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_ap)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ap);

    return repetir_juiz_zona;
}

int verificar_juiz_am(){
    //AM
    FILE *arq_zona_am;
    arq_zona_am = fopen("arq_zona_am.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&am_zona, sizeof(struct info_zona), 1, arq_zona_am);
        if(!(strcmp(nome_juiz,am_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_am)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_am);

    return repetir_juiz_zona;
}

int verificar_juiz_ba(){
    //BA
    FILE *arq_zona_ba;
    arq_zona_ba = fopen("arq_zona_ba.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&ba_zona, sizeof(struct info_zona), 1, arq_zona_ba);
        if(!(strcmp(nome_juiz,ba_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_ba)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ba);

    return repetir_juiz_zona;
}

int verificar_juiz_ce(){
    //CE
    FILE *arq_zona_ce;
    arq_zona_ce = fopen("arq_zona_ce.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&ce_zona, sizeof(struct info_zona), 1, arq_zona_ce);
        if(!(strcmp(nome_juiz,ce_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_ce)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ce);

    return repetir_juiz_zona;
}

int verificar_juiz_es(){
    //ES
    FILE *arq_zona_es;
    arq_zona_es = fopen("arq_zona_es.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&es_zona, sizeof(struct info_zona), 1, arq_zona_es);
        if(!(strcmp(nome_juiz,es_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_es)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_es);

    return repetir_juiz_zona;
}

int verificar_juiz_go(){
    //GO
    FILE *arq_zona_go;
    arq_zona_go = fopen("arq_zona_go.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&go_zona, sizeof(struct info_zona), 1, arq_zona_go);
        if(!(strcmp(nome_juiz,go_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_go)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_go);

    return repetir_juiz_zona;
}

int verificar_juiz_ma(){
    //MA
    FILE *arq_zona_ma;
    arq_zona_ma = fopen("arq_zona_ma.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&ma_zona, sizeof(struct info_zona), 1, arq_zona_ma);
        if(!(strcmp(nome_juiz,ma_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_ma)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ma);

    return repetir_juiz_zona;
}

int verificar_juiz_mt(){
    //MT
    FILE *arq_zona_mt;
    arq_zona_mt = fopen("arq_zona_mt.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&mt_zona, sizeof(struct info_zona), 1, arq_zona_mt);
        if(!(strcmp(nome_juiz,mt_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_mt)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_mt);

    return repetir_juiz_zona;
}

int verificar_juiz_ms(){
    //MS
    FILE *arq_zona_ms;
    arq_zona_ms = fopen("arq_zona_ms.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&ms_zona, sizeof(struct info_zona), 1, arq_zona_ms);
        if(!(strcmp(nome_juiz,ms_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_ms)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ms);

    return repetir_juiz_zona;
}

int verificar_juiz_mg(){
    //MG
    FILE *arq_zona_mg;
    arq_zona_mg = fopen("arq_zona_mg.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&mg_zona, sizeof(struct info_zona), 1, arq_zona_mg);
        if(!(strcmp(nome_juiz,mg_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_mg)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_mg);

    return repetir_juiz_zona;
}

int verificar_juiz_pa(){
    //PA
    FILE *arq_zona_pa;
    arq_zona_pa = fopen("arq_zona_pa.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&pa_zona, sizeof(struct info_zona), 1, arq_zona_pa);
        if(!(strcmp(nome_juiz,pa_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_pa)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_pa);

    return repetir_juiz_zona;
}

int verificar_juiz_pb(){
    //PB
    FILE *arq_zona_pb;
    arq_zona_pb = fopen("arq_zona_pb.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&pb_zona, sizeof(struct info_zona), 1, arq_zona_pb);
        if(!(strcmp(nome_juiz,pb_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_pb)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_pb);

    return repetir_juiz_zona;
}

int verificar_juiz_pr(){
    //PR
    FILE *arq_zona_pr;
    arq_zona_pr = fopen("arq_zona_pr.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&pr_zona, sizeof(struct info_zona), 1, arq_zona_pr);
        if(!(strcmp(nome_juiz,pr_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_pr)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_pr);

    return repetir_juiz_zona;
}

int verificar_juiz_pe(){
    //PE
    FILE *arq_zona_pe;
    arq_zona_pe = fopen("arq_zona_pe.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&pe_zona, sizeof(struct info_zona), 1, arq_zona_pe);
        if(!(strcmp(nome_juiz,pe_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_pe)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_pe);

    return repetir_juiz_zona;
}

int verificar_juiz_pi(){
    //PI
    FILE *arq_zona_pi;
    arq_zona_pi = fopen("arq_zona_pi.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&pi_zona, sizeof(struct info_zona), 1, arq_zona_pi);
        if(!(strcmp(nome_juiz,pi_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_pi)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_pi);

    return repetir_juiz_zona;
}

int verificar_juiz_rj(){
    //RJ
    FILE *arq_zona_rj;
    arq_zona_rj = fopen("arq_zona_rj.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&rj_zona, sizeof(struct info_zona), 1, arq_zona_rj);
        if(!(strcmp(nome_juiz,rj_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_rj)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_rj);

    return repetir_juiz_zona;
}

int verificar_juiz_rn(){
    //RN
    FILE *arq_zona_rn;
    arq_zona_rn = fopen("arq_zona_rn.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&rn_zona, sizeof(struct info_zona), 1, arq_zona_rn);
        if(!(strcmp(nome_juiz,rn_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_rn)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_rn);

    return repetir_juiz_zona;
}

int verificar_juiz_rs(){
    //RS
    FILE *arq_zona_rs;
    arq_zona_rs = fopen("arq_zona_rs.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&rs_zona, sizeof(struct info_zona), 1, arq_zona_rs);
        if(!(strcmp(nome_juiz,rs_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_rs)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_rs);

    return repetir_juiz_zona;
}

int verificar_juiz_ro(){
    //RO
    FILE *arq_zona_ro;
    arq_zona_ro = fopen("arq_zona_ro.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&ro_zona, sizeof(struct info_zona), 1, arq_zona_ro);
        if(!(strcmp(nome_juiz,ro_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_ro)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ro);

    return repetir_juiz_zona;
}

int verificar_juiz_rr(){
    //RR
    FILE *arq_zona_rr;
    arq_zona_rr = fopen("arq_zona_rr.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&rr_zona, sizeof(struct info_zona), 1, arq_zona_rr);
        if(!(strcmp(nome_juiz,rr_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_rr)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_rr);

    return repetir_juiz_zona;
}

int verificar_juiz_sc(){
    //SC
    FILE *arq_zona_sc;
    arq_zona_sc = fopen("arq_zona_sc.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&sc_zona, sizeof(struct info_zona), 1, arq_zona_sc);
        if(!(strcmp(nome_juiz,sc_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_sc)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_sc);

    return repetir_juiz_zona;
}

int verificar_juiz_sp(){
    //SP
    FILE *arq_zona_sp;
    arq_zona_sp = fopen("arq_zona_sp.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&sp_zona, sizeof(struct info_zona), 1, arq_zona_sp);
        if(!(strcmp(nome_juiz,sp_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_sp)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_sp);

    return repetir_juiz_zona;
}

int verificar_juiz_se(){
    //SE
    FILE *arq_zona_se;
    arq_zona_se = fopen("arq_zona_se.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&se_zona, sizeof(struct info_zona), 1, arq_zona_se);
        if(!(strcmp(nome_juiz,se_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_se)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_se);

    return repetir_juiz_zona;
}

int verificar_juiz_to(){
    //TO
    FILE *arq_zona_to;
    arq_zona_to = fopen("arq_zona_to.bin","rb");

    repetir_juiz_zona = 0;


    do {
        fread(&to_zona, sizeof(struct info_zona), 1, arq_zona_to);
        if(!(strcmp(nome_juiz,to_zona.juiz_zona))){
            printf("\nJUIZ ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_juiz,100,stdin);
            repetir_juiz_zona = 1;
        }
    } while (!feof(arq_zona_to)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_to);

    return repetir_juiz_zona;
}





// Verificar se existe um mesmo chefe eleitoral
int verificar_chefe_ac(){
    //AC
    FILE *arq_zona_ac;
    arq_zona_ac = fopen("arq_zona_ac.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&ac_zona, sizeof(struct info_zona), 1, arq_zona_ac);
        if(!(strcmp(nome_chefe,ac_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_ac)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ac);

    return repetir_chefe_zona;
}

int verificar_chefe_al(){
    //AL
    FILE *arq_zona_al;
    arq_zona_al = fopen("arq_zona_al.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&al_zona, sizeof(struct info_zona), 1, arq_zona_al);
        if(!(strcmp(nome_chefe,al_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_al)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_al);

    return repetir_chefe_zona;
}

int verificar_chefe_ap(){
    //AP
    FILE *arq_zona_ap;
    arq_zona_ap = fopen("arq_zona_ap.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&ap_zona, sizeof(struct info_zona), 1, arq_zona_ap);
        if(!(strcmp(nome_chefe,ap_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_ap)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ap);

    return repetir_chefe_zona;
}

int verificar_chefe_am(){
    //AM
    FILE *arq_zona_am;
    arq_zona_am = fopen("arq_zona_am.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&am_zona, sizeof(struct info_zona), 1, arq_zona_am);
        if(!(strcmp(nome_chefe,am_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_am)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_am);

    return repetir_chefe_zona;
}

int verificar_chefe_ba(){
    //BA
    FILE *arq_zona_ba;
    arq_zona_ba = fopen("arq_zona_ba.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&ba_zona, sizeof(struct info_zona), 1, arq_zona_ba);
        if(!(strcmp(nome_chefe,ba_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_ba)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ba);

    return repetir_chefe_zona;
}

int verificar_chefe_ce(){
    //CE
    FILE *arq_zona_ce;
    arq_zona_ce = fopen("arq_zona_ce.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&ce_zona, sizeof(struct info_zona), 1, arq_zona_ce);
        if(!(strcmp(nome_chefe,ce_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_ce)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ce);

    return repetir_chefe_zona;
}

int verificar_chefe_es(){
    //ES
    FILE *arq_zona_es;
    arq_zona_es = fopen("arq_zona_es.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&es_zona, sizeof(struct info_zona), 1, arq_zona_es);
        if(!(strcmp(nome_chefe,es_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_es)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_es);

    return repetir_chefe_zona;
}

int verificar_chefe_go(){
    //GO
    FILE *arq_zona_go;
    arq_zona_go = fopen("arq_zona_go.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&go_zona, sizeof(struct info_zona), 1, arq_zona_go);
        if(!(strcmp(nome_chefe,go_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_go)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_go);

    return repetir_chefe_zona;
}

int verificar_chefe_ma(){
    //MA
    FILE *arq_zona_ma;
    arq_zona_ma = fopen("arq_zona_ma.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&ma_zona, sizeof(struct info_zona), 1, arq_zona_ma);
        if(!(strcmp(nome_chefe,ma_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_ma)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ma);

    return repetir_chefe_zona;
}

int verificar_chefe_mt(){
    //MT
    FILE *arq_zona_mt;
    arq_zona_mt = fopen("arq_zona_mt.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&mt_zona, sizeof(struct info_zona), 1, arq_zona_mt);
        if(!(strcmp(nome_chefe,mt_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_mt)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_mt);

    return repetir_chefe_zona;
}

int verificar_chefe_ms(){
    //MS
    FILE *arq_zona_ms;
    arq_zona_ms = fopen("arq_zona_ms.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&ms_zona, sizeof(struct info_zona), 1, arq_zona_ms);
        if(!(strcmp(nome_chefe,ms_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_ms)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ms);

    return repetir_chefe_zona;
}

int verificar_chefe_mg(){
    //MG
    FILE *arq_zona_mg;
    arq_zona_mg = fopen("arq_zona_mg.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&mg_zona, sizeof(struct info_zona), 1, arq_zona_mg);
        if(!(strcmp(nome_chefe,mg_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_mg)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_mg);

    return repetir_chefe_zona;
}

int verificar_chefe_pa(){
    //PA
    FILE *arq_zona_pa;
    arq_zona_pa = fopen("arq_zona_pa.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&pa_zona, sizeof(struct info_zona), 1, arq_zona_pa);
        if(!(strcmp(nome_chefe,pa_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_pa)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_pa);

    return repetir_chefe_zona;
}

int verificar_chefe_pb(){
    //PB
    FILE *arq_zona_pb;
    arq_zona_pb = fopen("arq_zona_pb.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&pb_zona, sizeof(struct info_zona), 1, arq_zona_pb);
        if(!(strcmp(nome_chefe,pb_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_pb)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_pb);

    return repetir_chefe_zona;
}

int verificar_chefe_pr(){
    //PR
    FILE *arq_zona_pr;
    arq_zona_pr = fopen("arq_zona_pr.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&pr_zona, sizeof(struct info_zona), 1, arq_zona_pr);
        if(!(strcmp(nome_chefe,pr_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_pr)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_pr);

    return repetir_chefe_zona;
}

int verificar_chefe_pe(){
    //PE
    FILE *arq_zona_pe;
    arq_zona_pe = fopen("arq_zona_pe.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&pe_zona, sizeof(struct info_zona), 1, arq_zona_pe);
        if(!(strcmp(nome_chefe,pe_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_pe)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_pe);

    return repetir_chefe_zona;
}

int verificar_chefe_pi(){
    //PI
    FILE *arq_zona_pi;
    arq_zona_pi = fopen("arq_zona_pi.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&pi_zona, sizeof(struct info_zona), 1, arq_zona_pi);
        if(!(strcmp(nome_chefe,pi_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_pi)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_pi);

    return repetir_chefe_zona;
}

int verificar_chefe_rj(){
    //RJ
    FILE *arq_zona_rj;
    arq_zona_rj = fopen("arq_zona_rj.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&rj_zona, sizeof(struct info_zona), 1, arq_zona_rj);
        if(!(strcmp(nome_chefe,rj_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_rj)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_rj);

    return repetir_chefe_zona;
}

int verificar_chefe_rn(){
    //RN
    FILE *arq_zona_rn;
    arq_zona_rn = fopen("arq_zona_rn.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&rn_zona, sizeof(struct info_zona), 1, arq_zona_rn);
        if(!(strcmp(nome_chefe,rn_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_rn)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_rn);

    return repetir_chefe_zona;
}

int verificar_chefe_rs(){
    //RS
    FILE *arq_zona_rs;
    arq_zona_rs = fopen("arq_zona_rs.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&rs_zona, sizeof(struct info_zona), 1, arq_zona_rs);
        if(!(strcmp(nome_chefe,rs_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_rs)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_rs);

    return repetir_chefe_zona;
}

int verificar_chefe_ro(){
    //RO
    FILE *arq_zona_ro;
    arq_zona_ro = fopen("arq_zona_ro.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&ro_zona, sizeof(struct info_zona), 1, arq_zona_ro);
        if(!(strcmp(nome_chefe,ro_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_ro)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ro);

    return repetir_chefe_zona;
}

int verificar_chefe_rr(){
    //RR
    FILE *arq_zona_rr;
    arq_zona_rr = fopen("arq_zona_rr.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&rr_zona, sizeof(struct info_zona), 1, arq_zona_rr);
        if(!(strcmp(nome_chefe,rr_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_rr)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_rr);

    return repetir_chefe_zona;
}

int verificar_chefe_sc(){
    //SC
    FILE *arq_zona_sc;
    arq_zona_sc = fopen("arq_zona_sc.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&sc_zona, sizeof(struct info_zona), 1, arq_zona_sc);
        if(!(strcmp(nome_chefe,sc_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_sc)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_sc);

    return repetir_chefe_zona;
}

int verificar_chefe_sp(){
    //SP
    FILE *arq_zona_sp;
    arq_zona_sp = fopen("arq_zona_sp.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&sp_zona, sizeof(struct info_zona), 1, arq_zona_sp);
        if(!(strcmp(nome_chefe,sp_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_sp)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_sp);

    return repetir_chefe_zona;
}

int verificar_chefe_se(){
    //SE
    FILE *arq_zona_se;
    arq_zona_se = fopen("arq_zona_se.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&se_zona, sizeof(struct info_zona), 1, arq_zona_se);
        if(!(strcmp(nome_chefe,se_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_se)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_se);

    return repetir_chefe_zona;
}

int verificar_chefe_to(){
    //TO
    FILE *arq_zona_to;
    arq_zona_to = fopen("arq_zona_to.bin","rb");

    repetir_chefe_zona = 0;


    do {
        fread(&to_zona, sizeof(struct info_zona), 1, arq_zona_to);
        if(!(strcmp(nome_chefe,to_zona.chefe_zona))){
            printf("\nCHEFE ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            fgets(nome_chefe,100,stdin);
            repetir_chefe_zona = 1;
        }
    } while (!feof(arq_zona_to)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_to);

    return repetir_chefe_zona;
}





// Verificar se existe um mesmo numero da zona eleitoral
int verificar_numero_zona_ac(){
    //AC
    FILE *arq_zona_ac;
    arq_zona_ac = fopen("arq_zona_ac.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&ac_zona, sizeof(struct info_zona), 1, arq_zona_ac);
        if(numero_zona == ac_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_ac)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ac);

    return repetir_numero_zona;
}

int verificar_numero_zona_al(){
    //AL
    FILE *arq_zona_al;
    arq_zona_al = fopen("arq_zona_al.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&al_zona, sizeof(struct info_zona), 1, arq_zona_al);
        if(numero_zona == al_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_al)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_al);

    return repetir_numero_zona;
}

int verificar_numero_zona_ap(){
    //AP
    FILE *arq_zona_ap;
    arq_zona_ap = fopen("arq_zona_ap.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&ap_zona, sizeof(struct info_zona), 1, arq_zona_ap);
        if(numero_zona == ap_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_ap)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ap);

    return repetir_numero_zona;
}

int verificar_numero_zona_am(){
    //AM
    FILE *arq_zona_am;
    arq_zona_am = fopen("arq_zona_am.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&am_zona, sizeof(struct info_zona), 1, arq_zona_am);
        if(numero_zona == am_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_am)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_am);

    return repetir_numero_zona;
}

int verificar_numero_zona_ba(){
    //BA
    FILE *arq_zona_ba;
    arq_zona_ba = fopen("arq_zona_ba.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&ba_zona, sizeof(struct info_zona), 1, arq_zona_ba);
        if(numero_zona == ba_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_ba)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ba);

    return repetir_numero_zona;
}

int verificar_numero_zona_ce(){
    //CE
    FILE *arq_zona_ce;
    arq_zona_ce = fopen("arq_zona_ce.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&ce_zona, sizeof(struct info_zona), 1, arq_zona_ce);
        if(numero_zona == ce_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_ce)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ce);

    return repetir_numero_zona;
}

int verificar_numero_zona_es(){
    //ES
    FILE *arq_zona_es;
    arq_zona_es = fopen("arq_zona_es.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&es_zona, sizeof(struct info_zona), 1, arq_zona_es);
        if(numero_zona == es_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_es)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_es);

    return repetir_numero_zona;
}

int verificar_numero_zona_go(){
    //GO
    FILE *arq_zona_go;
    arq_zona_go = fopen("arq_zona_go.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&go_zona, sizeof(struct info_zona), 1, arq_zona_go);
        if(numero_zona == go_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_go)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_go);

    return repetir_numero_zona;
}

int verificar_numero_zona_ma(){
    //MA
    FILE *arq_zona_ma;
    arq_zona_ma = fopen("arq_zona_ma.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&ma_zona, sizeof(struct info_zona), 1, arq_zona_ma);
        if(numero_zona == ma_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_ma)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ma);

    return repetir_numero_zona;
}

int verificar_numero_zona_mt(){
    //MT
    FILE *arq_zona_mt;
    arq_zona_mt = fopen("arq_zona_mt.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&mt_zona, sizeof(struct info_zona), 1, arq_zona_mt);
        if(numero_zona == mt_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_mt)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_mt);

    return repetir_numero_zona;
}

int verificar_numero_zona_ms(){
    //MS
    FILE *arq_zona_ms;
    arq_zona_ms = fopen("arq_zona_ms.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&ms_zona, sizeof(struct info_zona), 1, arq_zona_ms);
        if(numero_zona == ms_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_ms)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ms);

    return repetir_numero_zona;
}

int verificar_numero_zona_mg(){
    //MG
    FILE *arq_zona_mg;
    arq_zona_mg = fopen("arq_zona_mg.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&mg_zona, sizeof(struct info_zona), 1, arq_zona_mg);
        if(numero_zona == mg_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_mg)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_mg);

    return repetir_numero_zona;
}

int verificar_numero_zona_pa(){
    //PA
    FILE *arq_zona_pa;
    arq_zona_pa = fopen("arq_zona_pa.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&pa_zona, sizeof(struct info_zona), 1, arq_zona_pa);
        if(numero_zona == pa_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_pa)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_pa);

    return repetir_numero_zona;
}

int verificar_numero_zona_pb(){
    //PB
    FILE *arq_zona_pb;
    arq_zona_pb = fopen("arq_zona_pb.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&pb_zona, sizeof(struct info_zona), 1, arq_zona_pb);
        if(numero_zona == pb_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_pb)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_pb);

    return repetir_numero_zona;
}

int verificar_numero_zona_pr(){
    //PR
    FILE *arq_zona_pr;
    arq_zona_pr = fopen("arq_zona_pr.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&pr_zona, sizeof(struct info_zona), 1, arq_zona_pr);
        if(numero_zona == pr_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_pr)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_pr);

    return repetir_numero_zona;
}

int verificar_numero_zona_pe(){
    //PE
    FILE *arq_zona_pe;
    arq_zona_pe = fopen("arq_zona_pe.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&pe_zona, sizeof(struct info_zona), 1, arq_zona_pe);
        if(numero_zona == pe_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_pe)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_pe);

    return repetir_numero_zona;
}

int verificar_numero_zona_pi(){
    //PI
    FILE *arq_zona_pi;
    arq_zona_pi = fopen("arq_zona_pi.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&pi_zona, sizeof(struct info_zona), 1, arq_zona_pi);
        if(numero_zona == pi_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_pi)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_pi);

    return repetir_numero_zona;
}

int verificar_numero_zona_rj(){
    //RJ
    FILE *arq_zona_rj;
    arq_zona_rj = fopen("arq_zona_rj.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&rj_zona, sizeof(struct info_zona), 1, arq_zona_rj);
        if(numero_zona == rj_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_rj)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_rj);

    return repetir_numero_zona;
}

int verificar_numero_zona_rn(){
    //RN
    FILE *arq_zona_rn;
    arq_zona_rn = fopen("arq_zona_rn.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&rn_zona, sizeof(struct info_zona), 1, arq_zona_rn);
        if(numero_zona == rn_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_rn)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_rn);

    return repetir_numero_zona;
}

int verificar_numero_zona_rs(){
    //RS
    FILE *arq_zona_rs;
    arq_zona_rs = fopen("arq_zona_rs.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&rs_zona, sizeof(struct info_zona), 1, arq_zona_rs);
        if(numero_zona == rs_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_rs)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_rs);

    return repetir_numero_zona;
}

int verificar_numero_zona_ro(){
    //RO
    FILE *arq_zona_ro;
    arq_zona_ro = fopen("arq_zona_ro.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&ro_zona, sizeof(struct info_zona), 1, arq_zona_ro);
        if(numero_zona == ro_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_ro)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_ro);

    return repetir_numero_zona;
}

int verificar_numero_zona_rr(){
    //RR
    FILE *arq_zona_rr;
    arq_zona_rr = fopen("arq_zona_rr.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&rr_zona, sizeof(struct info_zona), 1, arq_zona_rr);
        if(numero_zona == rr_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_rr)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_rr);

    return repetir_numero_zona;
}

int verificar_numero_zona_sc(){
    //SC
    FILE *arq_zona_sc;
    arq_zona_sc = fopen("arq_zona_sc.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&sc_zona, sizeof(struct info_zona), 1, arq_zona_sc);
        if(numero_zona == sc_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_sc)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_sc);

    return repetir_numero_zona;
}

int verificar_numero_zona_sp(){
    //SP
    FILE *arq_zona_sp;
    arq_zona_sp = fopen("arq_zona_sp.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&sp_zona, sizeof(struct info_zona), 1, arq_zona_sp);
        if(numero_zona == sp_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_sp)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_sp);

    return repetir_numero_zona;
}

int verificar_numero_zona_se(){
    //SE
    FILE *arq_zona_se;
    arq_zona_se = fopen("arq_zona_se.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&se_zona, sizeof(struct info_zona), 1, arq_zona_se);
        if(numero_zona == se_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_se)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_se);

    return repetir_numero_zona;
}

int verificar_numero_zona_to(){
    //TO
    FILE *arq_zona_to;
    arq_zona_to = fopen("arq_zona_to.bin","rb");

    repetir_numero_zona = 0;


    do {
        fread(&to_zona, sizeof(struct info_zona), 1, arq_zona_to);
        if(numero_zona == to_zona.numero_zona){
            printf("\nNUMERO DA ZONA ELEITORAL JA CADASTRADO, DIGITE NOVAMENTE: ");
            scanf("%d",&numero_zona);
            repetir_numero_zona = 1;
        }
    } while (!feof(arq_zona_to)); // enquanto não chegar ao final do arquivo


    fclose(arq_zona_to);

    return repetir_numero_zona;
}





// Funcao para cadastrar uma zona eleitoral
void func_cad_zona(){

    char cadZona[3]; // ira ficar amarzenada a UF que o usuario digitar
    int tamStr,i;
    int zona_tamanho;
    /* A variavel "parar" e "verificar" serve para analisar se por acaso nao for encontrado nenhum nome
     * do municipio ao mesmo tempo que tiver conteudo dentro do arquivo dos municipios */
    int verificar = 0;
    int parar = 0;

    estados_aparecer();

    getchar();
    printf("\nDigite a UF do Estado para o cadastro da zona eleitoral: ");
    fgets(cadZona,3,stdin);

    // Converte minuscula em maiscula
    tamStr = strlen(cadZona);
    for(i=0; i < tamStr; i++)
    {                            // Converte cada caracter de Str
        cadZona[i] =toupper(cadZona[i]);  // para maiuscula
    }

    // Para cadastrar uma zona eleitoral tera que existir um municipio cadastrado


    // Cadastro das zonas eleitorais seguindo cada Estado
    if(!(strcmp(cadZona,"AC"))){

        FILE *arq_mun_ac; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_ac;
        arq_mun_ac = fopen("arq_mun_ac.bin","rb"); // Abre o arquivo


        if(arq_mun_ac == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(ac_zona.municipio_zona,100,stdin);
            while(fread(&ac, sizeof(struct municipio),1,arq_mun_ac)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(ac.nomeMunicipio,ac_zona.municipio_zona))){

                    arq_zona_ac = fopen("arq_zona_ac.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_ac != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_ac();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(ac_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_ac != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_ac();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_ac != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_ac();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_ac != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_ac();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_ac);

                    arq_zona_ac = fopen("arq_zona_ac.bin","ab");

                    strcpy(ac_zona.endereco_zona,nome_endereco);
                    strcpy(ac_zona.juiz_zona,nome_juiz);
                    strcpy(ac_zona.chefe_zona,nome_chefe);
                    ac_zona.numero_zona = numero_zona;

                    fwrite(&ac_zona, sizeof(struct info_zona),1,arq_zona_ac);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",ac_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",ac_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",ac_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",ac_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",ac_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",ac_zona.numero_zona);
                    linha();

                    fclose(arq_zona_ac);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_ac);


    }
    else if(!(strcmp(cadZona,"AL"))){

        FILE *arq_mun_al; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_al;
        arq_mun_al = fopen("arq_mun_al.bin","rb"); // Abre o arquivo


        if(arq_mun_al == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(al_zona.municipio_zona,100,stdin);
            while(fread(&al, sizeof(struct municipio),1,arq_mun_al)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(al.nomeMunicipio,al_zona.municipio_zona))){

                    arq_zona_al = fopen("arq_zona_al.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_al != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_al();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(al_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_al != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_al();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_al != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_al();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_al != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_al();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_al);

                    arq_zona_al = fopen("arq_zona_al.bin","ab");

                    strcpy(al_zona.endereco_zona,nome_endereco);
                    strcpy(al_zona.juiz_zona,nome_juiz);
                    strcpy(al_zona.chefe_zona,nome_chefe);
                    al_zona.numero_zona = numero_zona;

                    fwrite(&al_zona, sizeof(struct info_zona),1,arq_zona_al);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",al_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",al_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",al_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",al_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",al_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",al_zona.numero_zona);
                    linha();

                    fclose(arq_zona_al);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_al);


    }
    else if(!(strcmp(cadZona,"AP"))){

        FILE *arq_mun_ap; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_ap;
        arq_mun_ap = fopen("arq_mun_ap.bin","rb"); // Abre o arquivo


        if(arq_mun_ap == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(ap_zona.municipio_zona,100,stdin);
            while(fread(&ap, sizeof(struct municipio),1,arq_mun_ap)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(ap.nomeMunicipio,ap_zona.municipio_zona))){

                    arq_zona_ap = fopen("arq_zona_ap.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_ap != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_ap();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(ap_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_ap != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_ap();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_ap != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_ap();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_ap != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_ap();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_ap);

                    arq_zona_ap = fopen("arq_zona_ap.bin","ab");

                    strcpy(ap_zona.endereco_zona,nome_endereco);
                    strcpy(ap_zona.juiz_zona,nome_juiz);
                    strcpy(ap_zona.chefe_zona,nome_chefe);
                    ap_zona.numero_zona = numero_zona;

                    fwrite(&ap_zona, sizeof(struct info_zona),1,arq_zona_ap);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",ap_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",ap_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",ap_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",ap_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",ap_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",ap_zona.numero_zona);
                    linha();

                    fclose(arq_zona_ap);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_ap);


    }
    else if(!(strcmp(cadZona,"AM"))){

        FILE *arq_mun_am; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_am;
        arq_mun_am = fopen("arq_mun_am.bin","rb"); // Abre o arquivo


        if(arq_mun_am == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(am_zona.municipio_zona,100,stdin);
            while(fread(&am, sizeof(struct municipio),1,arq_mun_am)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(am.nomeMunicipio,am_zona.municipio_zona))){

                    arq_zona_am = fopen("arq_zona_am.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_am != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_am();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(am_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_am != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_am();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_am != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_am();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_am != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_am();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_am);

                    arq_zona_am = fopen("arq_zona_am.bin","ab");

                    strcpy(am_zona.endereco_zona,nome_endereco);
                    strcpy(am_zona.juiz_zona,nome_juiz);
                    strcpy(am_zona.chefe_zona,nome_chefe);
                    am_zona.numero_zona = numero_zona;

                    fwrite(&am_zona, sizeof(struct info_zona),1,arq_zona_am);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",am_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",am_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",am_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",am_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",am_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",am_zona.numero_zona);
                    linha();

                    fclose(arq_zona_am);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_am);


    }
    else if(!(strcmp(cadZona,"BA"))){

        FILE *arq_mun_ba; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_ba;
        arq_mun_ba = fopen("arq_mun_ba.bin","rb"); // Abre o arquivo


        if(arq_mun_ba == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(ba_zona.municipio_zona,100,stdin);
            while(fread(&ba, sizeof(struct municipio),1,arq_mun_ba)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(ba.nomeMunicipio,ba_zona.municipio_zona))){

                    arq_zona_ba = fopen("arq_zona_ba.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_ba != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_ba();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(ba_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_ba != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_ba();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_ba != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_ba();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_ba != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_ba();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_ba);

                    arq_zona_ba = fopen("arq_zona_ba.bin","ab");

                    strcpy(ba_zona.endereco_zona,nome_endereco);
                    strcpy(ba_zona.juiz_zona,nome_juiz);
                    strcpy(ba_zona.chefe_zona,nome_chefe);
                    ba_zona.numero_zona = numero_zona;

                    fwrite(&ba_zona, sizeof(struct info_zona),1,arq_zona_ba);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",ba_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",ba_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",ba_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",ba_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",ba_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",ba_zona.numero_zona);
                    linha();

                    fclose(arq_zona_ba);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_ba);


    }
    else if(!(strcmp(cadZona,"CE"))){

        FILE *arq_mun_ce; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_ce;
        arq_mun_ce = fopen("arq_mun_ce.bin","rb"); // Abre o arquivo


        if(arq_mun_ce == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(ce_zona.municipio_zona,100,stdin);
            while(fread(&ce, sizeof(struct municipio),1,arq_mun_ce)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(ce.nomeMunicipio,ce_zona.municipio_zona))){

                    arq_zona_ce = fopen("arq_zona_ce.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_ce != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_ce();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(ce_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_ce != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_ce();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_ce != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_ce();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_ce != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_ce();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_ce);

                    arq_zona_ce = fopen("arq_zona_ce.bin","ab");

                    strcpy(ce_zona.endereco_zona,nome_endereco);
                    strcpy(ce_zona.juiz_zona,nome_juiz);
                    strcpy(ce_zona.chefe_zona,nome_chefe);
                    ce_zona.numero_zona = numero_zona;

                    fwrite(&ce_zona, sizeof(struct info_zona),1,arq_zona_ce);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",ce_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",ce_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",ce_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",ce_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",ce_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",ce_zona.numero_zona);
                    linha();

                    fclose(arq_zona_ce);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_ce);


    }
    else if(!(strcmp(cadZona,"ES"))){

        FILE *arq_mun_es; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_es;
        arq_mun_es = fopen("arq_mun_es.bin","rb"); // Abre o arquivo


        if(arq_mun_es == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(es_zona.municipio_zona,100,stdin);
            while(fread(&es, sizeof(struct municipio),1,arq_mun_es)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(es.nomeMunicipio,es_zona.municipio_zona))){

                    arq_zona_es = fopen("arq_zona_es.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_es != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_es();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(es_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_es != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_es();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_es != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_es();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_es != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_es();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_es);

                    arq_zona_es = fopen("arq_zona_es.bin","ab");

                    strcpy(es_zona.endereco_zona,nome_endereco);
                    strcpy(es_zona.juiz_zona,nome_juiz);
                    strcpy(es_zona.chefe_zona,nome_chefe);
                    es_zona.numero_zona = numero_zona;

                    fwrite(&es_zona, sizeof(struct info_zona),1,arq_zona_es);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",es_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",es_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",es_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",es_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",es_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",es_zona.numero_zona);
                    linha();

                    fclose(arq_zona_es);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_es);


    }
    else if(!(strcmp(cadZona,"GO"))){

        FILE *arq_mun_go; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_go;
        arq_mun_go = fopen("arq_mun_go.bin","rb"); // Abre o arquivo


        if(arq_mun_go == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(go_zona.municipio_zona,100,stdin);
            while(fread(&go, sizeof(struct municipio),1,arq_mun_go)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(go.nomeMunicipio,go_zona.municipio_zona))){

                    arq_zona_go = fopen("arq_zona_go.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_go != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_go();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(go_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_go != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_go();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_go != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_go();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_go != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_go();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_go);

                    arq_zona_go = fopen("arq_zona_go.bin","ab");

                    strcpy(go_zona.endereco_zona,nome_endereco);
                    strcpy(go_zona.juiz_zona,nome_juiz);
                    strcpy(go_zona.chefe_zona,nome_chefe);
                    go_zona.numero_zona = numero_zona;

                    fwrite(&go_zona, sizeof(struct info_zona),1,arq_zona_go);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",go_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",go_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",go_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",go_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",go_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",go_zona.numero_zona);
                    linha();

                    fclose(arq_zona_go);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_go);


    }
    else if(!(strcmp(cadZona,"MA"))){

        FILE *arq_mun_ma; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_ma;
        arq_mun_ma = fopen("arq_mun_ma.bin","rb"); // Abre o arquivo


        if(arq_mun_ma == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(ma_zona.municipio_zona,100,stdin);
            while(fread(&ma, sizeof(struct municipio),1,arq_mun_ma)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(ma.nomeMunicipio,ma_zona.municipio_zona))){

                    arq_zona_ma = fopen("arq_zona_ma.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_ma != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_ma();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(ma_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_ma != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_ma();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_ma != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_ma();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_ma != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_ma();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_ma);

                    arq_zona_ma = fopen("arq_zona_ma.bin","ab");

                    strcpy(ma_zona.endereco_zona,nome_endereco);
                    strcpy(ma_zona.juiz_zona,nome_juiz);
                    strcpy(ma_zona.chefe_zona,nome_chefe);
                    ma_zona.numero_zona = numero_zona;

                    fwrite(&ma_zona, sizeof(struct info_zona),1,arq_zona_ma);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",ma_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",ma_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",ma_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",ma_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",ma_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",ma_zona.numero_zona);
                    linha();

                    fclose(arq_zona_ma);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_ma);


    }
    else if(!(strcmp(cadZona,"MT"))){

        FILE *arq_mun_mt; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_mt;
        arq_mun_mt = fopen("arq_mun_mt.bin","rb"); // Abre o arquivo


        if(arq_mun_mt == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(mt_zona.municipio_zona,100,stdin);
            while(fread(&mt, sizeof(struct municipio),1,arq_mun_mt)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(mt.nomeMunicipio,mt_zona.municipio_zona))){

                    arq_zona_mt = fopen("arq_zona_mt.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_mt != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_mt();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(mt_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_mt != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_mt();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_mt != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_mt();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_mt != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_mt();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_mt);

                    arq_zona_mt = fopen("arq_zona_mt.bin","ab");

                    strcpy(mt_zona.endereco_zona,nome_endereco);
                    strcpy(mt_zona.juiz_zona,nome_juiz);
                    strcpy(mt_zona.chefe_zona,nome_chefe);
                    mt_zona.numero_zona = numero_zona;

                    fwrite(&mt_zona, sizeof(struct info_zona),1,arq_zona_mt);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",mt_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",mt_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",mt_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",mt_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",mt_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",mt_zona.numero_zona);
                    linha();

                    fclose(arq_zona_mt);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_mt);


    }
    else if(!(strcmp(cadZona,"MS"))){

        FILE *arq_mun_ms; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_ms;
        arq_mun_ms = fopen("arq_mun_ms.bin","rb"); // Abre o arquivo


        if(arq_mun_ms == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(ms_zona.municipio_zona,100,stdin);
            while(fread(&ms, sizeof(struct municipio),1,arq_mun_ms)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(ms.nomeMunicipio,ms_zona.municipio_zona))){

                    arq_zona_ms = fopen("arq_zona_ms.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_ms != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_ms();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(ms_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_ms != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_ms();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_ms != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_ms();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_ms != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_ms();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_ms);

                    arq_zona_ms = fopen("arq_zona_ms.bin","ab");

                    strcpy(ms_zona.endereco_zona,nome_endereco);
                    strcpy(ms_zona.juiz_zona,nome_juiz);
                    strcpy(ms_zona.chefe_zona,nome_chefe);
                    ms_zona.numero_zona = numero_zona;

                    fwrite(&ms_zona, sizeof(struct info_zona),1,arq_zona_ms);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",ms_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",ms_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",ms_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",ms_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",ms_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",ms_zona.numero_zona);
                    linha();

                    fclose(arq_zona_ms);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_ms);


    }
    else if(!(strcmp(cadZona,"MG"))){

        FILE *arq_mun_mg; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_mg;
        arq_mun_mg = fopen("arq_mun_mg.bin","rb"); // Abre o arquivo


        if(arq_mun_mg == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(mg_zona.municipio_zona,100,stdin);
            while(fread(&mg, sizeof(struct municipio),1,arq_mun_mg)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(mg.nomeMunicipio,mg_zona.municipio_zona))){

                    arq_zona_mg = fopen("arq_zona_mg.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_mg != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_mg();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(mg_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_mg != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_mg();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_mg != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_mg();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_mg != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_mg();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_mg);

                    arq_zona_mg = fopen("arq_zona_mg.bin","ab");

                    strcpy(mg_zona.endereco_zona,nome_endereco);
                    strcpy(mg_zona.juiz_zona,nome_juiz);
                    strcpy(mg_zona.chefe_zona,nome_chefe);
                    mg_zona.numero_zona = numero_zona;

                    fwrite(&mg_zona, sizeof(struct info_zona),1,arq_zona_mg);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",mg_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",mg_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",mg_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",mg_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",mg_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",mg_zona.numero_zona);
                    linha();

                    fclose(arq_zona_mg);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_mg);


    }
    else if(!(strcmp(cadZona,"PA"))){

        FILE *arq_mun_pa; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_pa;
        arq_mun_pa = fopen("arq_mun_pa.bin","rb"); // Abre o arquivo


        if(arq_mun_pa == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(pa_zona.municipio_zona,100,stdin);
            while(fread(&pa, sizeof(struct municipio),1,arq_mun_pa)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(pa.nomeMunicipio,pa_zona.municipio_zona))){

                    arq_zona_pa = fopen("arq_zona_pa.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_pa != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_pa();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(pa_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_pa != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_pa();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_pa != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_pa();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_pa != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_pa();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_pa);

                    arq_zona_pa = fopen("arq_zona_pa.bin","ab");

                    strcpy(pa_zona.endereco_zona,nome_endereco);
                    strcpy(pa_zona.juiz_zona,nome_juiz);
                    strcpy(pa_zona.chefe_zona,nome_chefe);
                    pa_zona.numero_zona = numero_zona;

                    fwrite(&pa_zona, sizeof(struct info_zona),1,arq_zona_pa);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",pa_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",pa_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",pa_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",pa_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",pa_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",pa_zona.numero_zona);
                    linha();

                    fclose(arq_zona_pa);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_pa);


    }
    else if(!(strcmp(cadZona,"PB"))){

        FILE *arq_mun_pb; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_pb;
        arq_mun_pb = fopen("arq_mun_pb.bin","rb"); // Abre o arquivo


        if(arq_mun_pb == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(pb_zona.municipio_zona,100,stdin);
            while(fread(&pb, sizeof(struct municipio),1,arq_mun_pb)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(pb.nomeMunicipio,pb_zona.municipio_zona))){

                    arq_zona_pb = fopen("arq_zona_pb.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_pb != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_pb();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(pb_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_pb != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_pb();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_pb != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_pb();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_pb != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_pb();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_pb);

                    arq_zona_pb = fopen("arq_zona_pb.bin","ab");

                    strcpy(pb_zona.endereco_zona,nome_endereco);
                    strcpy(pb_zona.juiz_zona,nome_juiz);
                    strcpy(pb_zona.chefe_zona,nome_chefe);
                    pb_zona.numero_zona = numero_zona;

                    fwrite(&pb_zona, sizeof(struct info_zona),1,arq_zona_pb);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",pb_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",pb_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",pb_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",pb_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",pb_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",pb_zona.numero_zona);
                    linha();

                    fclose(arq_zona_pb);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_pb);


    }
    else if(!(strcmp(cadZona,"PR"))){

        FILE *arq_mun_pr; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_pr;
        arq_mun_pr = fopen("arq_mun_pr.bin","rb"); // Abre o arquivo


        if(arq_mun_pr == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(pr_zona.municipio_zona,100,stdin);
            while(fread(&pr, sizeof(struct municipio),1,arq_mun_pr)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(pr.nomeMunicipio,pr_zona.municipio_zona))){

                    arq_zona_pr = fopen("arq_zona_pr.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_pr != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_pr();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(pr_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_pr != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_pr();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_pr != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_pr();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_pr != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_pr();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_pr);

                    arq_zona_pr = fopen("arq_zona_pr.bin","ab");

                    strcpy(pr_zona.endereco_zona,nome_endereco);
                    strcpy(pr_zona.juiz_zona,nome_juiz);
                    strcpy(pr_zona.chefe_zona,nome_chefe);
                    pr_zona.numero_zona = numero_zona;

                    fwrite(&pr_zona, sizeof(struct info_zona),1,arq_zona_pr);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",pr_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",pr_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",pr_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",pr_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",pr_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",pr_zona.numero_zona);
                    linha();

                    fclose(arq_zona_pr);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_pr);


    }
    else if(!(strcmp(cadZona,"PE"))){

        FILE *arq_mun_pe; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_pe;
        arq_mun_pe = fopen("arq_mun_pe.bin","rb"); // Abre o arquivo


        if(arq_mun_pe == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(pe_zona.municipio_zona,100,stdin);
            while(fread(&pe, sizeof(struct municipio),1,arq_mun_pe)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(pe.nomeMunicipio,pe_zona.municipio_zona))){

                    arq_zona_pe = fopen("arq_zona_pe.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_pe != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_pe();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(pe_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_pe != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_pe();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_pe != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_pe();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_pe != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_pe();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_pe);

                    arq_zona_pe = fopen("arq_zona_pe.bin","ab");

                    strcpy(pe_zona.endereco_zona,nome_endereco);
                    strcpy(pe_zona.juiz_zona,nome_juiz);
                    strcpy(pe_zona.chefe_zona,nome_chefe);
                    pe_zona.numero_zona = numero_zona;

                    fwrite(&pe_zona, sizeof(struct info_zona),1,arq_zona_pe);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",pe_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",pe_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",pe_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",pe_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",pe_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",pe_zona.numero_zona);
                    linha();

                    fclose(arq_zona_pe);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_pe);


    }
    else if(!(strcmp(cadZona,"PI"))){

        FILE *arq_mun_pi; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_pi;
        arq_mun_pi = fopen("arq_mun_pi.bin","rb"); // Abre o arquivo


        if(arq_mun_pi == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(pi_zona.municipio_zona,100,stdin);
            while(fread(&pi, sizeof(struct municipio),1,arq_mun_pi)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(pi.nomeMunicipio,pi_zona.municipio_zona))){

                    arq_zona_pi = fopen("arq_zona_pi.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_pi != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_pi();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(pi_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_pi != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_pi();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_pi != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_pi();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_pi != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_pi();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_pi);

                    arq_zona_pi = fopen("arq_zona_pi.bin","ab");

                    strcpy(pi_zona.endereco_zona,nome_endereco);
                    strcpy(pi_zona.juiz_zona,nome_juiz);
                    strcpy(pi_zona.chefe_zona,nome_chefe);
                    pi_zona.numero_zona = numero_zona;

                    fwrite(&pi_zona, sizeof(struct info_zona),1,arq_zona_pi);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",pi_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",pi_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",pi_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",pi_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",pi_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",pi_zona.numero_zona);
                    linha();

                    fclose(arq_zona_pi);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_pi);


    }
    else if(!(strcmp(cadZona,"RJ"))){

        FILE *arq_mun_rj; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_rj;
        arq_mun_rj = fopen("arq_mun_rj.bin","rb"); // Abre o arquivo


        if(arq_mun_rj == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(rj_zona.municipio_zona,100,stdin);
            while(fread(&rj, sizeof(struct municipio),1,arq_mun_rj)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(rj.nomeMunicipio,rj_zona.municipio_zona))){

                    arq_zona_rj = fopen("arq_zona_rj.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_rj != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_rj();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(rj_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_rj != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_rj();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_rj != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_rj();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_rj != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_rj();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_rj);

                    arq_zona_rj = fopen("arq_zona_rj.bin","ab");

                    strcpy(rj_zona.endereco_zona,nome_endereco);
                    strcpy(rj_zona.juiz_zona,nome_juiz);
                    strcpy(rj_zona.chefe_zona,nome_chefe);
                    rj_zona.numero_zona = numero_zona;

                    fwrite(&rj_zona, sizeof(struct info_zona),1,arq_zona_rj);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",rj_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",rj_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",rj_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",rj_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",rj_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",rj_zona.numero_zona);
                    linha();

                    fclose(arq_zona_rj);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_rj);


    }
    else if(!(strcmp(cadZona,"RN"))){

        FILE *arq_mun_rn; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_rn;
        arq_mun_rn = fopen("arq_mun_rn.bin","rb"); // Abre o arquivo


        if(arq_mun_rn == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(rn_zona.municipio_zona,100,stdin);
            while(fread(&rn, sizeof(struct municipio),1,arq_mun_rn)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(rn.nomeMunicipio,rn_zona.municipio_zona))){

                    arq_zona_rn = fopen("arq_zona_rn.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_rn != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_rn();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(rn_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_rn != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_rn();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_rn != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_rn();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_rn != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_rn();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_rn);

                    arq_zona_rn = fopen("arq_zona_rn.bin","ab");

                    strcpy(rn_zona.endereco_zona,nome_endereco);
                    strcpy(rn_zona.juiz_zona,nome_juiz);
                    strcpy(rn_zona.chefe_zona,nome_chefe);
                    rn_zona.numero_zona = numero_zona;

                    fwrite(&rn_zona, sizeof(struct info_zona),1,arq_zona_rn);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",rn_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",rn_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",rn_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",rn_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",rn_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",rn_zona.numero_zona);
                    linha();

                    fclose(arq_zona_rn);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_rn);


    }
    else if(!(strcmp(cadZona,"RS"))){

        FILE *arq_mun_rs; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_rs;
        arq_mun_rs = fopen("arq_mun_rs.bin","rb"); // Abre o arquivo


        if(arq_mun_rs == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(rs_zona.municipio_zona,100,stdin);
            while(fread(&rs, sizeof(struct municipio),1,arq_mun_rs)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(rs.nomeMunicipio,rs_zona.municipio_zona))){

                    arq_zona_rs = fopen("arq_zona_rs.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_rs != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_rs();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(rs_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_rs != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_rs();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_rs != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_rs();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_rs != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_rs();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_rs);

                    arq_zona_rs = fopen("arq_zona_rs.bin","ab");

                    strcpy(rs_zona.endereco_zona,nome_endereco);
                    strcpy(rs_zona.juiz_zona,nome_juiz);
                    strcpy(rs_zona.chefe_zona,nome_chefe);
                    rs_zona.numero_zona = numero_zona;

                    fwrite(&rs_zona, sizeof(struct info_zona),1,arq_zona_rs);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",rs_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",rs_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",rs_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",rs_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",rs_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",rs_zona.numero_zona);
                    linha();

                    fclose(arq_zona_rs);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_rs);


    }
    else if(!(strcmp(cadZona,"RO"))){

        FILE *arq_mun_ro; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_ro;
        arq_mun_ro = fopen("arq_mun_ro.bin","rb"); // Abre o arquivo


        if(arq_mun_ro == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(ro_zona.municipio_zona,100,stdin);
            while(fread(&ro, sizeof(struct municipio),1,arq_mun_ro)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(ro.nomeMunicipio,ro_zona.municipio_zona))){

                    arq_zona_ro = fopen("arq_zona_ro.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_ro != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_ro();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(ro_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_ro != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_ro();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_ro != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_ro();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_ro != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_ro();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_ro);

                    arq_zona_ro = fopen("arq_zona_ro.bin","ab");

                    strcpy(ro_zona.endereco_zona,nome_endereco);
                    strcpy(ro_zona.juiz_zona,nome_juiz);
                    strcpy(ro_zona.chefe_zona,nome_chefe);
                    ro_zona.numero_zona = numero_zona;

                    fwrite(&ro_zona, sizeof(struct info_zona),1,arq_zona_ro);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",ro_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",ro_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",ro_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",ro_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",ro_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",ro_zona.numero_zona);
                    linha();

                    fclose(arq_zona_ro);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_ro);


    }
    else if(!(strcmp(cadZona,"RR"))){

        FILE *arq_mun_rr; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_rr;
        arq_mun_rr = fopen("arq_mun_rr.bin","rb"); // Abre o arquivo


        if(arq_mun_rr == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(rr_zona.municipio_zona,100,stdin);
            while(fread(&rr, sizeof(struct municipio),1,arq_mun_rr)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(rr.nomeMunicipio,rr_zona.municipio_zona))){

                    arq_zona_rr = fopen("arq_zona_rr.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_rr != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_rr();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(rr_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_rr != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_rr();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_rr != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_rr();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_rr != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_rr();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_rr);

                    arq_zona_rr = fopen("arq_zona_rr.bin","ab");

                    strcpy(rr_zona.endereco_zona,nome_endereco);
                    strcpy(rr_zona.juiz_zona,nome_juiz);
                    strcpy(rr_zona.chefe_zona,nome_chefe);
                    rr_zona.numero_zona = numero_zona;

                    fwrite(&rr_zona, sizeof(struct info_zona),1,arq_zona_rr);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",rr_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",rr_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",rr_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",rr_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",rr_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",rr_zona.numero_zona);
                    linha();

                    fclose(arq_zona_rr);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_rr);


    }
    else if(!(strcmp(cadZona,"SC"))){

        FILE *arq_mun_sc; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_sc;
        arq_mun_sc = fopen("arq_mun_sc.bin","rb"); // Abre o arquivo


        if(arq_mun_sc == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(sc_zona.municipio_zona,100,stdin);
            while(fread(&sc, sizeof(struct municipio),1,arq_mun_sc)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(sc.nomeMunicipio,sc_zona.municipio_zona))){

                    arq_zona_sc = fopen("arq_zona_sc.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_sc != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_sc();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(sc_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_sc != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_sc();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_sc != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_sc();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_sc != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_sc();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_sc);

                    arq_zona_sc = fopen("arq_zona_sc.bin","ab");

                    strcpy(sc_zona.endereco_zona,nome_endereco);
                    strcpy(sc_zona.juiz_zona,nome_juiz);
                    strcpy(sc_zona.chefe_zona,nome_chefe);
                    sc_zona.numero_zona = numero_zona;

                    fwrite(&sc_zona, sizeof(struct info_zona),1,arq_zona_sc);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",sc_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",sc_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",sc_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",sc_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",sc_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",sc_zona.numero_zona);
                    linha();

                    fclose(arq_zona_sc);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_sc);


    }
    else if(!(strcmp(cadZona,"SP"))){

        FILE *arq_mun_sp; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_sp;
        arq_mun_sp = fopen("arq_mun_sp.bin","rb"); // Abre o arquivo


        if(arq_mun_sp == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(sp_zona.municipio_zona,100,stdin);
            while(fread(&sp, sizeof(struct municipio),1,arq_mun_sp)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(sp.nomeMunicipio,sp_zona.municipio_zona))){

                    arq_zona_sp = fopen("arq_zona_sp.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_sp != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_sp();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(sp_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_sp != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_sp();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_sp != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_sp();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_sp != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_sp();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_sp);

                    arq_zona_sp = fopen("arq_zona_sp.bin","ab");

                    strcpy(sp_zona.endereco_zona,nome_endereco);
                    strcpy(sp_zona.juiz_zona,nome_juiz);
                    strcpy(sp_zona.chefe_zona,nome_chefe);
                    sp_zona.numero_zona = numero_zona;

                    fwrite(&sp_zona, sizeof(struct info_zona),1,arq_zona_sp);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",sp_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",sp_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",sp_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",sp_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",sp_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",sp_zona.numero_zona);
                    linha();

                    fclose(arq_zona_sp);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_sp);


    }
    else if(!(strcmp(cadZona,"SE"))){

        FILE *arq_mun_se; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_se;
        arq_mun_se = fopen("arq_mun_se.bin","rb"); // Abre o arquivo


        if(arq_mun_se == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(se_zona.municipio_zona,100,stdin);
            while(fread(&se, sizeof(struct municipio),1,arq_mun_se)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(se.nomeMunicipio,se_zona.municipio_zona))){

                    arq_zona_se = fopen("arq_zona_se.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_se != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_se();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(se_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_se != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_se();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_se != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_se();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_se != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_se();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_se);

                    arq_zona_se = fopen("arq_zona_se.bin","ab");

                    strcpy(se_zona.endereco_zona,nome_endereco);
                    strcpy(se_zona.juiz_zona,nome_juiz);
                    strcpy(se_zona.chefe_zona,nome_chefe);
                    se_zona.numero_zona = numero_zona;

                    fwrite(&se_zona, sizeof(struct info_zona),1,arq_zona_se);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",se_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",se_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",se_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",se_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",se_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",se_zona.numero_zona);
                    linha();

                    fclose(arq_zona_se);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_se);


    }
    else if(!(strcmp(cadZona,"TO"))){

        FILE *arq_mun_to; // Numeros de nunicipios que estao no arquivo no Estado
        FILE *arq_zona_to;
        arq_mun_to = fopen("arq_mun_to.bin","rb"); // Abre o arquivo


        if(arq_mun_to == NULL){
            parar = 1;
            printf("\nNao existem municipios do Estado (%s) cadastrado.",cadZona);
        }else{
            getchar();
            printf("\nMunicipio para o cadastro da zona eleitoral: ");
            fgets(to_zona.municipio_zona,100,stdin);
            while(fread(&to, sizeof(struct municipio),1,arq_mun_to)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(!(strcmp(to.nomeMunicipio,to_zona.municipio_zona))){

                    arq_zona_to = fopen("arq_zona_to.bin","rb"); // Abre o arquivo

                    verificar = 1;
                    printf("\nEndereco do Cartorio Eleitoral: ");
                    fgets(nome_endereco,100,stdin);

                    // Verifica se existe um mesmo enderco no cartorio eleitoral
                    if(arq_zona_to != NULL){
                        do{
                            repetir_endereco_zona = verificar_endereco_to();
                        }while(repetir_endereco_zona == 1);
                    }


                    printf("\nTelefone do Cartorio Eleitoal: ");
                    fgets(to_zona.telefone_zona,100,stdin);

                    printf("\nJuiz Eleitoral: ");
                    fgets(nome_juiz,100,stdin);


                    // Verificar se existe um mesmo juiz eleitoral
                    if(arq_zona_to != NULL){
                        do{
                            repetir_juiz_zona = verificar_juiz_to();
                        }while(repetir_juiz_zona == 1);
                    }

                    printf("\nChefe de Cartorio Eleitoral: ");
                    fgets(nome_chefe,100,stdin);

                    // Verificar se existe um mesmo chefe eleitoral
                    if(arq_zona_to != NULL){
                        do{
                            repetir_chefe_zona = verificar_chefe_to();
                        }while(repetir_chefe_zona == 1);
                    }

                    printf("\nNumero da Zona eleitoral: ");
                    scanf("%d",&numero_zona);

                    if(arq_zona_to != NULL){
                        do{
                            repetir_numero_zona = verificar_numero_zona_to();
                        }while(repetir_numero_zona == 1);
                    }


                    fclose(arq_zona_to);

                    arq_zona_to = fopen("arq_zona_to.bin","ab");

                    strcpy(to_zona.endereco_zona,nome_endereco);
                    strcpy(to_zona.juiz_zona,nome_juiz);
                    strcpy(to_zona.chefe_zona,nome_chefe);
                    to_zona.numero_zona = numero_zona;

                    fwrite(&to_zona, sizeof(struct info_zona),1,arq_zona_to);

                    linha();

                    printf("INFORMACOES ARMAZENADAS COM SUCESS0\n");
                    printf("Municipio da Zona Eleitoral: %s \n",to_zona.municipio_zona);
                    printf("Endereco do Cartorio Eleitoral: %s \n",to_zona.endereco_zona);
                    printf("Telefone do Cartorio Eleitoal: %s\n",to_zona.telefone_zona);
                    printf("Juiz Eleitoral: %s\n",to_zona.juiz_zona);
                    printf("Chefe de Cartorio Eleitoral: %s\n",to_zona.chefe_zona);
                    printf("Numero da Zona eleitoral: %d\n",to_zona.numero_zona);
                    linha();

                    fclose(arq_zona_to);
                    break;

                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNenhum Municipio Encontrado");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_to);


    }
    else{
        printf("\n########## OPCAO INVALIDA ##########");
    }
}