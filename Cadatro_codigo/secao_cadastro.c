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

int repetir_num_secao = 0;
int repetir_cod_local_secao = 0;




int num_secao;
int cod_local;

// Informacoes para secao eleitoral
struct info_secao{

    char cep_secao[20];
    char bairro_secao[100];
    int num_zona_secao;
    char local_secao[100];
    int num_secao;
    int cod_local_secao;
    long int aptos_votar_secao;

}ac_secao,al_secao,ap_secao,am_secao,ba_secao,ce_secao,es_secao,go_secao,ma_secao,mt_secao,ms_secao,mg_secao,pa_secao,pb_secao,pr_secao,pe_secao,pi_secao,rj_secao,rn_secao,rs_secao,ro_secao,rr_secao,sc_secao,sp_secao,se_secao,to_secao;




// verificar se existe um mesmo numero da secao repetido no arquivo
int verificar_num_secao_ac(){
    //AC
    FILE *arq_secao_ac;
    arq_secao_ac = fopen("arq_secao_ac.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&ac_secao, sizeof(struct info_secao), 1, arq_secao_ac);
        if(num_secao == ac_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_ac)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_ac);

    return repetir_num_secao;
}

int verificar_num_secao_al(){
    //AL
    FILE *arq_secao_al;
    arq_secao_al = fopen("arq_secao_al.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&al_secao, sizeof(struct info_secao), 1, arq_secao_al);
        if(num_secao == al_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_al)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_al);

    return repetir_num_secao;
}

int verificar_num_secao_ap(){
    //AP
    FILE *arq_secao_ap;
    arq_secao_ap = fopen("arq_secao_ap.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&ap_secao, sizeof(struct info_secao), 1, arq_secao_ap);
        if(num_secao == ap_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_ap)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_ap);

    return repetir_num_secao;
}

int verificar_num_secao_am(){
    //AM
    FILE *arq_secao_am;
    arq_secao_am = fopen("arq_secao_am.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&am_secao, sizeof(struct info_secao), 1, arq_secao_am);
        if(num_secao == am_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_am)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_am);

    return repetir_num_secao;
}

int verificar_num_secao_ba(){
    //BA
    FILE *arq_secao_ba;
    arq_secao_ba = fopen("arq_secao_ba.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&ba_secao, sizeof(struct info_secao), 1, arq_secao_ba);
        if(num_secao == ba_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_ba)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_ba);

    return repetir_num_secao;
}

int verificar_num_secao_ce(){
    //CE
    FILE *arq_secao_ce;
    arq_secao_ce = fopen("arq_secao_ce.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&ce_secao, sizeof(struct info_secao), 1, arq_secao_ce);
        if(num_secao == ce_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_ce)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_ce);

    return repetir_num_secao;
}

int verificar_num_secao_es(){
    //ES
    FILE *arq_secao_es;
    arq_secao_es = fopen("arq_secao_es.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&es_secao, sizeof(struct info_secao), 1, arq_secao_es);
        if(num_secao == es_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_es)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_es);

    return repetir_num_secao;
}

int verificar_num_secao_go(){
    //GO
    FILE *arq_secao_go;
    arq_secao_go = fopen("arq_secao_go.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&go_secao, sizeof(struct info_secao), 1, arq_secao_go);
        if(num_secao == go_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_go)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_go);

    return repetir_num_secao;
}

int verificar_num_secao_ma(){
    //MA
    FILE *arq_secao_ma;
    arq_secao_ma = fopen("arq_secao_ma.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&ma_secao, sizeof(struct info_secao), 1, arq_secao_ma);
        if(num_secao == ma_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_ma)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_ma);

    return repetir_num_secao;
}

int verificar_num_secao_mt(){
    //MT
    FILE *arq_secao_mt;
    arq_secao_mt = fopen("arq_secao_mt.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&mt_secao, sizeof(struct info_secao), 1, arq_secao_mt);
        if(num_secao == mt_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_mt)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_mt);

    return repetir_num_secao;
}

int verificar_num_secao_ms(){
    //MS
    FILE *arq_secao_ms;
    arq_secao_ms = fopen("arq_secao_ms.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&ms_secao, sizeof(struct info_secao), 1, arq_secao_ms);
        if(num_secao == ms_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_ms)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_ms);

    return repetir_num_secao;
}

int verificar_num_secao_mg(){
    //MG
    FILE *arq_secao_mg;
    arq_secao_mg = fopen("arq_secao_mg.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&mg_secao, sizeof(struct info_secao), 1, arq_secao_mg);
        if(num_secao == mg_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_mg)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_mg);

    return repetir_num_secao;
}

int verificar_num_secao_pa(){
    //PA
    FILE *arq_secao_pa;
    arq_secao_pa = fopen("arq_secao_pa.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&pa_secao, sizeof(struct info_secao), 1, arq_secao_pa);
        if(num_secao == pa_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_pa)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_pa);

    return repetir_num_secao;
}

int verificar_num_secao_pb(){
    //PB
    FILE *arq_secao_pb;
    arq_secao_pb = fopen("arq_secao_pb.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&pb_secao, sizeof(struct info_secao), 1, arq_secao_pb);
        if(num_secao == pb_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_pb)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_pb);

    return repetir_num_secao;
}

int verificar_num_secao_pr(){
    //PR
    FILE *arq_secao_pr;
    arq_secao_pr = fopen("arq_secao_pr.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&pr_secao, sizeof(struct info_secao), 1, arq_secao_pr);
        if(num_secao == pr_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_pr)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_pr);

    return repetir_num_secao;
}

int verificar_num_secao_pe(){
    //PE
    FILE *arq_secao_pe;
    arq_secao_pe = fopen("arq_secao_pe.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&pe_secao, sizeof(struct info_secao), 1, arq_secao_pe);
        if(num_secao == pe_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_pe)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_pe);

    return repetir_num_secao;
}

int verificar_num_secao_pi(){
    //PI
    FILE *arq_secao_pi;
    arq_secao_pi = fopen("arq_secao_pi.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&pi_secao, sizeof(struct info_secao), 1, arq_secao_pi);
        if(num_secao == pi_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_pi)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_pi);

    return repetir_num_secao;
}

int verificar_num_secao_rj(){
    //RJ
    FILE *arq_secao_rj;
    arq_secao_rj = fopen("arq_secao_rj.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&rj_secao, sizeof(struct info_secao), 1, arq_secao_rj);
        if(num_secao == rj_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_rj)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_rj);

    return repetir_num_secao;
}

int verificar_num_secao_rn(){
    //RN
    FILE *arq_secao_rn;
    arq_secao_rn = fopen("arq_secao_rn.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&rn_secao, sizeof(struct info_secao), 1, arq_secao_rn);
        if(num_secao == rn_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_rn)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_rn);

    return repetir_num_secao;
}

int verificar_num_secao_rs(){
    //RS
    FILE *arq_secao_rs;
    arq_secao_rs = fopen("arq_secao_rs.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&rs_secao, sizeof(struct info_secao), 1, arq_secao_rs);
        if(num_secao == rs_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_rs)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_rs);

    return repetir_num_secao;
}

int verificar_num_secao_ro(){
    //RO
    FILE *arq_secao_ro;
    arq_secao_ro = fopen("arq_secao_ro.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&ro_secao, sizeof(struct info_secao), 1, arq_secao_ro);
        if(num_secao == ro_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_ro)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_ro);

    return repetir_num_secao;
}

int verificar_num_secao_rr(){
    //RR
    FILE *arq_secao_rr;
    arq_secao_rr = fopen("arq_secao_rr.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&rr_secao, sizeof(struct info_secao), 1, arq_secao_rr);
        if(num_secao == rr_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_rr)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_rr);

    return repetir_num_secao;
}

int verificar_num_secao_sc(){
    //SC
    FILE *arq_secao_sc;
    arq_secao_sc = fopen("arq_secao_sc.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&sc_secao, sizeof(struct info_secao), 1, arq_secao_sc);
        if(num_secao == sc_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_sc)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_sc);

    return repetir_num_secao;
}

int verificar_num_secao_sp(){
    //SP
    FILE *arq_secao_sp;
    arq_secao_sp = fopen("arq_secao_sp.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&sp_secao, sizeof(struct info_secao), 1, arq_secao_sp);
        if(num_secao == sp_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_sp)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_sp);

    return repetir_num_secao;
}

int verificar_num_secao_se(){
    //SE
    FILE *arq_secao_se;
    arq_secao_se = fopen("arq_secao_se.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&se_secao, sizeof(struct info_secao), 1, arq_secao_se);
        if(num_secao == se_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_se)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_se);

    return repetir_num_secao;
}

int verificar_num_secao_to(){
    //TO
    FILE *arq_secao_to;
    arq_secao_to = fopen("arq_secao_to.bin","rb");

    repetir_num_secao = 0;


    do {
        fread(&to_secao, sizeof(struct info_secao), 1, arq_secao_to);
        if(num_secao == to_secao.num_secao){
            printf("\nNUMERO DE SECAO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&num_secao);
            repetir_num_secao = 1;
        }
    } while (!feof(arq_secao_to)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_to);

    return repetir_num_secao;
}





// Verificar se existe um codigo de um local repetido no arquivo
int verificar_cod_local_ac(){
    //AC
    FILE *arq_secao_ac;
    arq_secao_ac = fopen("arq_secao_ac.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&ac_secao, sizeof(struct info_secao), 1, arq_secao_ac);
        if(cod_local == ac_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_ac)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_ac);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_al(){
    //AL
    FILE *arq_secao_al;
    arq_secao_al = fopen("arq_secao_al.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&al_secao, sizeof(struct info_secao), 1, arq_secao_al);
        if(cod_local == al_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_al)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_al);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_ap(){
    //AP
    FILE *arq_secao_ap;
    arq_secao_ap = fopen("arq_secao_ap.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&ap_secao, sizeof(struct info_secao), 1, arq_secao_ap);
        if(cod_local == ap_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_ap)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_ap);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_am(){
    //AM
    FILE *arq_secao_am;
    arq_secao_am = fopen("arq_secao_am.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&am_secao, sizeof(struct info_secao), 1, arq_secao_am);
        if(cod_local == am_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_am)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_am);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_ba(){
    //BA
    FILE *arq_secao_ba;
    arq_secao_ba = fopen("arq_secao_ba.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&ba_secao, sizeof(struct info_secao), 1, arq_secao_ba);
        if(cod_local == ba_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_ba)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_ba);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_ce(){
    //CE
    FILE *arq_secao_ce;
    arq_secao_ce = fopen("arq_secao_ce.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&ce_secao, sizeof(struct info_secao), 1, arq_secao_ce);
        if(cod_local == ce_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_ce)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_ce);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_es(){
    //ES
    FILE *arq_secao_es;
    arq_secao_es = fopen("arq_secao_es.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&es_secao, sizeof(struct info_secao), 1, arq_secao_es);
        if(cod_local == es_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_es)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_es);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_go(){
    //GO
    FILE *arq_secao_go;
    arq_secao_go = fopen("arq_secao_go.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&go_secao, sizeof(struct info_secao), 1, arq_secao_go);
        if(cod_local == go_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_go)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_go);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_ma(){
    //MA
    FILE *arq_secao_ma;
    arq_secao_ma = fopen("arq_secao_ma.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&ma_secao, sizeof(struct info_secao), 1, arq_secao_ma);
        if(cod_local == ma_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_ma)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_ma);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_mt(){
    //MT
    FILE *arq_secao_mt;
    arq_secao_mt = fopen("arq_secao_mt.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&mt_secao, sizeof(struct info_secao), 1, arq_secao_mt);
        if(cod_local == mt_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_mt)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_mt);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_ms(){
    //MS
    FILE *arq_secao_ms;
    arq_secao_ms = fopen("arq_secao_ms.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&ms_secao, sizeof(struct info_secao), 1, arq_secao_ms);
        if(cod_local == ms_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_ms)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_ms);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_mg(){
    //MG
    FILE *arq_secao_mg;
    arq_secao_mg = fopen("arq_secao_mg.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&mg_secao, sizeof(struct info_secao), 1, arq_secao_mg);
        if(cod_local == mg_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_mg)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_mg);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_pa(){
    //PA
    FILE *arq_secao_pa;
    arq_secao_pa = fopen("arq_secao_pa.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&pa_secao, sizeof(struct info_secao), 1, arq_secao_pa);
        if(cod_local == pa_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_pa)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_pa);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_pb(){
    //PB
    FILE *arq_secao_pb;
    arq_secao_pb = fopen("arq_secao_pb.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&pb_secao, sizeof(struct info_secao), 1, arq_secao_pb);
        if(cod_local == pb_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_pb)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_pb);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_pr(){
    //PR
    FILE *arq_secao_pr;
    arq_secao_pr = fopen("arq_secao_pr.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&pr_secao, sizeof(struct info_secao), 1, arq_secao_pr);
        if(cod_local == pr_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_pr)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_pr);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_pe(){
    //PE
    FILE *arq_secao_pe;
    arq_secao_pe = fopen("arq_secao_pe.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&pe_secao, sizeof(struct info_secao), 1, arq_secao_pe);
        if(cod_local == pe_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_pe)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_pe);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_pi(){
    //PI
    FILE *arq_secao_pi;
    arq_secao_pi = fopen("arq_secao_pi.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&pi_secao, sizeof(struct info_secao), 1, arq_secao_pi);
        if(cod_local == pi_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_pi)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_pi);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_rj(){
    //RJ
    FILE *arq_secao_rj;
    arq_secao_rj = fopen("arq_secao_rj.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&rj_secao, sizeof(struct info_secao), 1, arq_secao_rj);
        if(cod_local == rj_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_rj)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_rj);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_rn(){
    //RN
    FILE *arq_secao_rn;
    arq_secao_rn = fopen("arq_secao_rn.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&rn_secao, sizeof(struct info_secao), 1, arq_secao_rn);
        if(cod_local == rn_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_rn)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_rn);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_rs(){
    //RS
    FILE *arq_secao_rs;
    arq_secao_rs = fopen("arq_secao_rs.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&rs_secao, sizeof(struct info_secao), 1, arq_secao_rs);
        if(cod_local == rs_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_rs)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_rs);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_ro(){
    //RO
    FILE *arq_secao_ro;
    arq_secao_ro = fopen("arq_secao_ro.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&ro_secao, sizeof(struct info_secao), 1, arq_secao_ro);
        if(cod_local == ro_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_ro)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_ro);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_rr(){
    //RR
    FILE *arq_secao_rr;
    arq_secao_rr = fopen("arq_secao_rr.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&rr_secao, sizeof(struct info_secao), 1, arq_secao_rr);
        if(cod_local == rr_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_rr)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_rr);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_sc(){
    //SC
    FILE *arq_secao_sc;
    arq_secao_sc = fopen("arq_secao_sc.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&sc_secao, sizeof(struct info_secao), 1, arq_secao_sc);
        if(cod_local == sc_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_sc)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_sc);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_sp(){
    //SP
    FILE *arq_secao_sp;
    arq_secao_sp = fopen("arq_secao_sp.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&sp_secao, sizeof(struct info_secao), 1, arq_secao_sp);
        if(cod_local == sp_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_sp)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_sp);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_se(){
    //SE
    FILE *arq_secao_se;
    arq_secao_se = fopen("arq_secao_se.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&se_secao, sizeof(struct info_secao), 1, arq_secao_se);
        if(cod_local == se_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_se)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_se);

    return repetir_cod_local_secao = 0;
}

int verificar_cod_local_to(){
    //TO
    FILE *arq_secao_to;
    arq_secao_to = fopen("arq_secao_to.bin","rb");

    repetir_cod_local_secao = 0;


    do {
        fread(&to_secao, sizeof(struct info_secao), 1, arq_secao_to);
        if(cod_local == to_secao.cod_local_secao){
            printf("\nCODIGO LOCAL JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%d",&cod_local);
            repetir_cod_local_secao = 1;
        }
    } while (!feof(arq_secao_to)); // enquanto não chegar ao final do arquivo


    fclose(arq_secao_to);

    return repetir_cod_local_secao = 0;
}



// Funcao para cadastrar as secoes eleitorais
void func_cad_sec(){
    char cadSecao[3]; // ira ficar amarzenada a UF que o usuario digitar
    int tamStr,i;
    int parar = 0;
    int verificar = 0;

    estados_aparecer();

    getchar();
    printf("\nDigite a UF do Estado para o cadastro da secao eleitoral: ");
    fgets(cadSecao,3,stdin);

    // Converte minuscula em maiscula
    tamStr = strlen(cadSecao);
    for(i=0; i < tamStr; i++)
    {                            // Converte cada caracter de Str
        cadSecao[i] =toupper(cadSecao[i]);  // para maiuscula
    }

    // Fazer o cadastro de secoes eleitorais
    // É necessario zonas eleitorais para fazer o cadastro da secao
    if(!(strcmp(cadSecao,"AC"))){

        FILE *arq_zona_ac;
        FILE *arq_secao_ac;


        arq_zona_ac = fopen("arq_zona_ac.bin","rb"); // Abre o arquivo

        if(arq_zona_ac == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&ac_secao.num_zona_secao);
            while(fread(&ac_zona, sizeof(struct info_zona),1,arq_zona_ac)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(ac_zona.numero_zona == ac_secao.num_zona_secao){

                    arq_secao_ac = fopen("arq_secao_ac.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(ac_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(ac_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(ac_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_ac != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_ac();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_ac != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_ac();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&ac_secao.aptos_votar_secao);


                    fclose(arq_secao_ac);

                    arq_secao_ac = fopen("arq_secao_ac.bin","ab");

                    ac_secao.num_secao = num_secao;
                    ac_secao.cod_local_secao = cod_local;

                    fwrite(&ac_secao, sizeof(struct info_secao),1,arq_secao_ac);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",ac_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",ac_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",ac_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",ac_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",ac_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",ac_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",ac_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_ac);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_ac);

    }
    else if(!(strcmp(cadSecao,"AL"))){

        FILE *arq_zona_al;
        FILE *arq_secao_al;


        arq_zona_al = fopen("arq_zona_al.bin","rb"); // Abre o arquivo

        if(arq_zona_al == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&al_secao.num_zona_secao);
            while(fread(&al_zona, sizeof(struct info_zona),1,arq_zona_al)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(al_zona.numero_zona == al_secao.num_zona_secao){

                    arq_secao_al = fopen("arq_secao_al.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(al_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(al_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(al_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_al != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_al();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_al != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_al();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&al_secao.aptos_votar_secao);


                    fclose(arq_secao_al);

                    arq_secao_al = fopen("arq_secao_al.bin","ab");

                    al_secao.num_secao = num_secao;
                    al_secao.cod_local_secao = cod_local;

                    fwrite(&al_secao, sizeof(struct info_secao),1,arq_secao_al);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",al_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",al_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",al_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",al_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",al_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",al_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",al_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_al);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_al);

    }
    else if(!(strcmp(cadSecao,"AP"))){

        FILE *arq_zona_ap;
        FILE *arq_secao_ap;


        arq_zona_ap = fopen("arq_zona_ap.bin","rb"); // Abre o arquivo

        if(arq_zona_ap == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&ap_secao.num_zona_secao);
            while(fread(&ap_zona, sizeof(struct info_zona),1,arq_zona_ap)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(ap_zona.numero_zona == ap_secao.num_zona_secao){

                    arq_secao_ap = fopen("arq_secao_ap.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(ap_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(ap_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(ap_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_ap != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_ap();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_ap != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_ap();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&ap_secao.aptos_votar_secao);


                    fclose(arq_secao_ap);

                    arq_secao_ap = fopen("arq_secao_ap.bin","ab");

                    ap_secao.num_secao = num_secao;
                    ap_secao.cod_local_secao = cod_local;

                    fwrite(&ap_secao, sizeof(struct info_secao),1,arq_secao_ap);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",ap_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",ap_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",ap_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",ap_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",ap_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",ap_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",ap_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_ap);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_ap);

    }
    else if(!(strcmp(cadSecao,"AM"))){

        FILE *arq_zona_am;
        FILE *arq_secao_am;


        arq_zona_am = fopen("arq_zona_am.bin","rb"); // Abre o arquivo

        if(arq_zona_am == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&am_secao.num_zona_secao);
            while(fread(&am_zona, sizeof(struct info_zona),1,arq_zona_am)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(am_zona.numero_zona == am_secao.num_zona_secao){

                    arq_secao_am = fopen("arq_secao_am.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(am_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(am_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(am_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_am != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_am();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_am != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_am();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&am_secao.aptos_votar_secao);


                    fclose(arq_secao_am);

                    arq_secao_am = fopen("arq_secao_am.bin","ab");

                    am_secao.num_secao = num_secao;
                    am_secao.cod_local_secao = cod_local;

                    fwrite(&am_secao, sizeof(struct info_secao),1,arq_secao_am);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",am_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",am_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",am_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",am_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",am_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",am_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",am_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_am);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_am);

    }
    else if(!(strcmp(cadSecao,"BA"))){

        FILE *arq_zona_ba;
        FILE *arq_secao_ba;


        arq_zona_ba = fopen("arq_zona_ba.bin","rb"); // Abre o arquivo

        if(arq_zona_ba == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&ba_secao.num_zona_secao);
            while(fread(&ba_zona, sizeof(struct info_zona),1,arq_zona_ba)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(ba_zona.numero_zona == ba_secao.num_zona_secao){

                    arq_secao_ba = fopen("arq_secao_ba.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(ba_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(ba_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(ba_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_ba != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_ba();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_ba != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_ba();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&ba_secao.aptos_votar_secao);


                    fclose(arq_secao_ba);

                    arq_secao_ba = fopen("arq_secao_ba.bin","ab");

                    ba_secao.num_secao = num_secao;
                    ba_secao.cod_local_secao = cod_local;

                    fwrite(&ba_secao, sizeof(struct info_secao),1,arq_secao_ba);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",ba_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",ba_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",ba_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",ba_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",ba_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",ba_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",ba_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_ba);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_ba);

    }
    else if(!(strcmp(cadSecao,"CE"))){

        FILE *arq_zona_ce;
        FILE *arq_secao_ce;


        arq_zona_ce = fopen("arq_zona_ce.bin","rb"); // Abre o arquivo

        if(arq_zona_ce == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&ce_secao.num_zona_secao);
            while(fread(&ce_zona, sizeof(struct info_zona),1,arq_zona_ce)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(ce_zona.numero_zona == ce_secao.num_zona_secao){

                    arq_secao_ce = fopen("arq_secao_ce.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(ce_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(ce_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(ce_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_ce != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_ce();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_ce != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_ce();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&ce_secao.aptos_votar_secao);


                    fclose(arq_secao_ce);

                    arq_secao_ce = fopen("arq_secao_ce.bin","ab");

                    ce_secao.num_secao = num_secao;
                    ce_secao.cod_local_secao = cod_local;

                    fwrite(&ce_secao, sizeof(struct info_secao),1,arq_secao_ce);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",ce_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",ce_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",ce_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",ce_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",ce_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",ce_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",ce_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_ce);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_ce);

    }
    else if(!(strcmp(cadSecao,"ES"))){

        FILE *arq_zona_es;
        FILE *arq_secao_es;


        arq_zona_es = fopen("arq_zona_es.bin","rb"); // Abre o arquivo

        if(arq_zona_es == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&es_secao.num_zona_secao);
            while(fread(&es_zona, sizeof(struct info_zona),1,arq_zona_es)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(es_zona.numero_zona == es_secao.num_zona_secao){

                    arq_secao_es = fopen("arq_secao_es.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(es_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(es_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(es_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_es != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_es();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_es != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_es();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&es_secao.aptos_votar_secao);


                    fclose(arq_secao_es);

                    arq_secao_es = fopen("arq_secao_es.bin","ab");

                    es_secao.num_secao = num_secao;
                    es_secao.cod_local_secao = cod_local;

                    fwrite(&es_secao, sizeof(struct info_secao),1,arq_secao_es);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",es_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",es_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",es_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",es_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",es_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",es_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",es_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_es);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_es);

    }
    else if(!(strcmp(cadSecao,"GO"))){

        FILE *arq_zona_go;
        FILE *arq_secao_go;


        arq_zona_go = fopen("arq_zona_go.bin","rb"); // Abre o arquivo

        if(arq_zona_go == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&go_secao.num_zona_secao);
            while(fread(&go_zona, sizeof(struct info_zona),1,arq_zona_go)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(go_zona.numero_zona == go_secao.num_zona_secao){

                    arq_secao_go = fopen("arq_secao_go.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(go_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(go_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(go_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_go != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_go();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_go != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_go();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&go_secao.aptos_votar_secao);


                    fclose(arq_secao_go);

                    arq_secao_go = fopen("arq_secao_go.bin","ab");

                    go_secao.num_secao = num_secao;
                    go_secao.cod_local_secao = cod_local;

                    fwrite(&go_secao, sizeof(struct info_secao),1,arq_secao_go);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",go_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",go_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",go_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",go_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",go_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",go_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",go_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_go);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_go);

    }
    else if(!(strcmp(cadSecao,"MA"))){

        FILE *arq_zona_ma;
        FILE *arq_secao_ma;


        arq_zona_ma = fopen("arq_zona_ma.bin","rb"); // Abre o arquivo

        if(arq_zona_ma == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&ma_secao.num_zona_secao);
            while(fread(&ma_zona, sizeof(struct info_zona),1,arq_zona_ma)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(ma_zona.numero_zona == ma_secao.num_zona_secao){

                    arq_secao_ma = fopen("arq_secao_ma.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(ma_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(ma_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(ma_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_ma != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_ma();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_ma != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_ma();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&ma_secao.aptos_votar_secao);


                    fclose(arq_secao_ma);

                    arq_secao_ma = fopen("arq_secao_ma.bin","ab");

                    ma_secao.num_secao = num_secao;
                    ma_secao.cod_local_secao = cod_local;

                    fwrite(&ma_secao, sizeof(struct info_secao),1,arq_secao_ma);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",ma_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",ma_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",ma_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",ma_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",ma_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",ma_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",ma_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_ma);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_ma);

    }
    else if(!(strcmp(cadSecao,"MT"))){

        FILE *arq_zona_mt;
        FILE *arq_secao_mt;


        arq_zona_mt = fopen("arq_zona_mt.bin","rb"); // Abre o arquivo

        if(arq_zona_mt == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&mt_secao.num_zona_secao);
            while(fread(&mt_zona, sizeof(struct info_zona),1,arq_zona_mt)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(mt_zona.numero_zona == mt_secao.num_zona_secao){

                    arq_secao_mt = fopen("arq_secao_mt.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(mt_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(mt_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(mt_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_mt != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_mt();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_mt != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_mt();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&mt_secao.aptos_votar_secao);


                    fclose(arq_secao_mt);

                    arq_secao_mt = fopen("arq_secao_mt.bin","ab");

                    mt_secao.num_secao = num_secao;
                    mt_secao.cod_local_secao = cod_local;

                    fwrite(&mt_secao, sizeof(struct info_secao),1,arq_secao_mt);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",mt_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",mt_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",mt_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",mt_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",mt_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",mt_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",mt_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_mt);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_mt);

    }
    else if(!(strcmp(cadSecao,"MS"))){

        FILE *arq_zona_ms;
        FILE *arq_secao_ms;


        arq_zona_ms = fopen("arq_zona_ms.bin","rb"); // Abre o arquivo

        if(arq_zona_ms == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&ms_secao.num_zona_secao);
            while(fread(&ms_zona, sizeof(struct info_zona),1,arq_zona_ms)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(ms_zona.numero_zona == ms_secao.num_zona_secao){

                    arq_secao_ms = fopen("arq_secao_ms.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(ms_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(ms_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(ms_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_ms != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_ms();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_ms != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_ms();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&ms_secao.aptos_votar_secao);


                    fclose(arq_secao_ms);

                    arq_secao_ms = fopen("arq_secao_ms.bin","ab");

                    ms_secao.num_secao = num_secao;
                    ms_secao.cod_local_secao = cod_local;

                    fwrite(&ms_secao, sizeof(struct info_secao),1,arq_secao_ms);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",ms_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",ms_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",ms_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",ms_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",ms_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",ms_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",ms_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_ms);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_ms);

    }
    else if(!(strcmp(cadSecao,"MG"))){

        FILE *arq_zona_mg;
        FILE *arq_secao_mg;


        arq_zona_mg = fopen("arq_zona_mg.bin","rb"); // Abre o arquivo

        if(arq_zona_mg == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&mg_secao.num_zona_secao);
            while(fread(&mg_zona, sizeof(struct info_zona),1,arq_zona_mg)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(mg_zona.numero_zona == mg_secao.num_zona_secao){

                    arq_secao_mg = fopen("arq_secao_mg.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(mg_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(mg_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(mg_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_mg != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_mg();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_mg != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_mg();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&mg_secao.aptos_votar_secao);


                    fclose(arq_secao_mg);

                    arq_secao_mg = fopen("arq_secao_mg.bin","ab");

                    mg_secao.num_secao = num_secao;
                    mg_secao.cod_local_secao = cod_local;

                    fwrite(&mg_secao, sizeof(struct info_secao),1,arq_secao_mg);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",mg_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",mg_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",mg_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",mg_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",mg_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",mg_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",mg_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_mg);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_mg);

    }
    else if(!(strcmp(cadSecao,"PA"))){

        FILE *arq_zona_pa;
        FILE *arq_secao_pa;


        arq_zona_pa = fopen("arq_zona_pa.bin","rb"); // Abre o arquivo

        if(arq_zona_pa == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&pa_secao.num_zona_secao);
            while(fread(&pa_zona, sizeof(struct info_zona),1,arq_zona_pa)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(pa_zona.numero_zona == pa_secao.num_zona_secao){

                    arq_secao_pa = fopen("arq_secao_pa.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(pa_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(pa_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(pa_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_pa != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_pa();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_pa != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_pa();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&pa_secao.aptos_votar_secao);


                    fclose(arq_secao_pa);

                    arq_secao_pa = fopen("arq_secao_pa.bin","ab");

                    pa_secao.num_secao = num_secao;
                    pa_secao.cod_local_secao = cod_local;

                    fwrite(&pa_secao, sizeof(struct info_secao),1,arq_secao_pa);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",pa_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",pa_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",pa_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",pa_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",pa_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",pa_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",pa_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_pa);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_pa);

    }
    else if(!(strcmp(cadSecao,"PB"))){

        FILE *arq_zona_pb;
        FILE *arq_secao_pb;


        arq_zona_pb = fopen("arq_zona_pb.bin","rb"); // Abre o arquivo

        if(arq_zona_pb == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&pb_secao.num_zona_secao);
            while(fread(&pb_zona, sizeof(struct info_zona),1,arq_zona_pb)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(pb_zona.numero_zona == pb_secao.num_zona_secao){

                    arq_secao_pb = fopen("arq_secao_pb.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(pb_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(pb_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(pb_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_pb != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_pa();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_pb != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_pb();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&pb_secao.aptos_votar_secao);


                    fclose(arq_secao_pb);

                    arq_secao_pb = fopen("arq_secao_pb.bin","ab");

                    pb_secao.num_secao = num_secao;
                    pb_secao.cod_local_secao = cod_local;

                    fwrite(&pb_secao, sizeof(struct info_secao),1,arq_secao_pb);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",pb_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",pb_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",pb_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",pb_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",pb_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",pb_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",pb_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_pb);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_pb);

    }
    else if(!(strcmp(cadSecao,"PR"))){

        FILE *arq_zona_pr;
        FILE *arq_secao_pr;


        arq_zona_pr = fopen("arq_zona_pr.bin","rb"); // Abre o arquivo

        if(arq_zona_pr == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&pr_secao.num_zona_secao);
            while(fread(&pr_zona, sizeof(struct info_zona),1,arq_zona_pr)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(pr_zona.numero_zona == pr_secao.num_zona_secao){

                    arq_secao_pr = fopen("arq_secao_pr.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(pr_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(pr_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(pr_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_pr != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_pr();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_pr != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_pr();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&pr_secao.aptos_votar_secao);


                    fclose(arq_secao_pr);

                    arq_secao_pr = fopen("arq_secao_pr.bin","ab");

                    pr_secao.num_secao = num_secao;
                    pr_secao.cod_local_secao = cod_local;

                    fwrite(&pr_secao, sizeof(struct info_secao),1,arq_secao_pr);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",pr_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",pr_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",pr_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",pr_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",pr_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",pr_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",pr_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_pr);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_pr);

    }
    else if(!(strcmp(cadSecao,"PE"))){

        FILE *arq_zona_pe;
        FILE *arq_secao_pe;


        arq_zona_pe = fopen("arq_zona_pe.bin","rb"); // Abre o arquivo

        if(arq_zona_pe == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&pe_secao.num_zona_secao);
            while(fread(&pe_zona, sizeof(struct info_zona),1,arq_zona_pe)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(pe_zona.numero_zona == pe_secao.num_zona_secao){

                    arq_secao_pe = fopen("arq_secao_pe.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(pe_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(pe_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(pe_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_pe != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_pe();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_pe != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_pe();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&pe_secao.aptos_votar_secao);


                    fclose(arq_secao_pe);

                    arq_secao_pe = fopen("arq_secao_pe.bin","ab");

                    pe_secao.num_secao = num_secao;
                    pe_secao.cod_local_secao = cod_local;

                    fwrite(&pe_secao, sizeof(struct info_secao),1,arq_secao_pe);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",pe_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",pe_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",pe_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",pe_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",pe_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",pe_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",pe_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_pe);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_pe);

    }
    else if(!(strcmp(cadSecao,"PI"))){

        FILE *arq_zona_pi;
        FILE *arq_secao_pi;


        arq_zona_pi = fopen("arq_zona_pi.bin","rb"); // Abre o arquivo

        if(arq_zona_pi == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&pi_secao.num_zona_secao);
            while(fread(&pi_zona, sizeof(struct info_zona),1,arq_zona_pi)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(pi_zona.numero_zona == pi_secao.num_zona_secao){

                    arq_secao_pi = fopen("arq_secao_pi.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(pi_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(pi_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(pi_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_pi != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_pi();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_pi != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_pi();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&pi_secao.aptos_votar_secao);


                    fclose(arq_secao_pi);

                    arq_secao_pi = fopen("arq_secao_pi.bin","ab");

                    pi_secao.num_secao = num_secao;
                    pi_secao.cod_local_secao = cod_local;

                    fwrite(&pi_secao, sizeof(struct info_secao),1,arq_secao_pi);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",pi_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",pi_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",pi_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",pi_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",pi_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",pi_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",pi_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_pi);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_pi);

    }
    else if(!(strcmp(cadSecao,"RJ"))){

        FILE *arq_zona_rj;
        FILE *arq_secao_rj;


        arq_zona_rj = fopen("arq_zona_rj.bin","rb"); // Abre o arquivo

        if(arq_zona_rj == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&rj_secao.num_zona_secao);
            while(fread(&rj_zona, sizeof(struct info_zona),1,arq_zona_rj)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(rj_zona.numero_zona == rj_secao.num_zona_secao){

                    arq_secao_rj = fopen("arq_secao_rj.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(rj_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(rj_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(rj_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_rj != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_rj();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_rj != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_rj();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&rj_secao.aptos_votar_secao);


                    fclose(arq_secao_rj);

                    arq_secao_rj = fopen("arq_secao_rj.bin","ab");

                    rj_secao.num_secao = num_secao;
                    rj_secao.cod_local_secao = cod_local;

                    fwrite(&rj_secao, sizeof(struct info_secao),1,arq_secao_rj);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",rj_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",rj_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",rj_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",rj_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",rj_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",rj_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",rj_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_rj);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_rj);

    }
    else if(!(strcmp(cadSecao,"RN"))){

        FILE *arq_zona_rn;
        FILE *arq_secao_rn;


        arq_zona_rn = fopen("arq_zona_rn.bin","rb"); // Abre o arquivo

        if(arq_zona_rn == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&rn_secao.num_zona_secao);
            while(fread(&rn_zona, sizeof(struct info_zona),1,arq_zona_rn)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(rn_zona.numero_zona == rn_secao.num_zona_secao){

                    arq_secao_rn = fopen("arq_secao_rn.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(rn_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(rn_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(rn_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_rn != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_rn();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_rn != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_rn();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&rn_secao.aptos_votar_secao);


                    fclose(arq_secao_rn);

                    arq_secao_rn = fopen("arq_secao_rn.bin","ab");

                    rn_secao.num_secao = num_secao;
                    rn_secao.cod_local_secao = cod_local;

                    fwrite(&rn_secao, sizeof(struct info_secao),1,arq_secao_rn);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",rn_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",rn_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",rn_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",rn_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",rn_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",rn_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",rn_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_rn);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_rn);

    }
    else if(!(strcmp(cadSecao,"RS"))){

        FILE *arq_zona_rs;
        FILE *arq_secao_rs;


        arq_zona_rs = fopen("arq_zona_rs.bin","rb"); // Abre o arquivo

        if(arq_zona_rs == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&rs_secao.num_zona_secao);
            while(fread(&rs_zona, sizeof(struct info_zona),1,arq_zona_rs)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(rs_zona.numero_zona == rs_secao.num_zona_secao){

                    arq_secao_rs = fopen("arq_secao_rs.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(rs_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(rs_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(rs_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_rs != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_rs();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_rs != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_rs();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&rs_secao.aptos_votar_secao);


                    fclose(arq_secao_rs);

                    arq_secao_rs = fopen("arq_secao_rs.bin","ab");

                    rs_secao.num_secao = num_secao;
                    rs_secao.cod_local_secao = cod_local;

                    fwrite(&rs_secao, sizeof(struct info_secao),1,arq_secao_rs);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",rs_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",rs_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",rs_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",rs_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",rs_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",rs_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",rs_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_rs);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_rs);

    }
    else if(!(strcmp(cadSecao,"RO"))){

        FILE *arq_zona_ro;
        FILE *arq_secao_ro;


        arq_zona_ro = fopen("arq_zona_ro.bin","rb"); // Abre o arquivo

        if(arq_zona_ro == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&ro_secao.num_zona_secao);
            while(fread(&ro_zona, sizeof(struct info_zona),1,arq_zona_ro)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(ro_zona.numero_zona == ro_secao.num_zona_secao){

                    arq_secao_ro = fopen("arq_secao_ro.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(ro_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(ro_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(ro_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_ro != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_ro();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_ro != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_ro();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&ro_secao.aptos_votar_secao);


                    fclose(arq_secao_ro);

                    arq_secao_ro = fopen("arq_secao_ro.bin","ab");

                    ro_secao.num_secao = num_secao;
                    ro_secao.cod_local_secao = cod_local;

                    fwrite(&ro_secao, sizeof(struct info_secao),1,arq_secao_ro);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",ro_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",ro_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",ro_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",ro_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",ro_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",ro_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",ro_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_ro);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_ro);

    }
    else if(!(strcmp(cadSecao,"RR"))){

        FILE *arq_zona_rr;
        FILE *arq_secao_rr;


        arq_zona_rr = fopen("arq_zona_rr.bin","rb"); // Abre o arquivo

        if(arq_zona_rr == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&rr_secao.num_zona_secao);
            while(fread(&rr_zona, sizeof(struct info_zona),1,arq_zona_rr)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(rr_zona.numero_zona == rr_secao.num_zona_secao){

                    arq_secao_rr = fopen("arq_secao_rr.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(rr_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(rr_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(rr_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_rr != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_rr();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_rr != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_rr();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&rr_secao.aptos_votar_secao);


                    fclose(arq_secao_rr);

                    arq_secao_rr = fopen("arq_secao_rr.bin","ab");

                    rr_secao.num_secao = num_secao;
                    rr_secao.cod_local_secao = cod_local;

                    fwrite(&rr_secao, sizeof(struct info_secao),1,arq_secao_rr);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",rr_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",rr_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",rr_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",rr_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",rr_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",rr_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",rr_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_rr);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_rr);

    }
    else if(!(strcmp(cadSecao,"SC"))){

        FILE *arq_zona_sc;
        FILE *arq_secao_sc;


        arq_zona_sc = fopen("arq_zona_sc.bin","rb"); // Abre o arquivo

        if(arq_zona_sc == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&sc_secao.num_zona_secao);
            while(fread(&sc_zona, sizeof(struct info_zona),1,arq_zona_sc)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(sc_zona.numero_zona == sc_secao.num_zona_secao){

                    arq_secao_sc = fopen("arq_secao_sc.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(sc_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(sc_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(sc_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_sc != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_sc();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_sc != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_sc();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&sc_secao.aptos_votar_secao);


                    fclose(arq_secao_sc);

                    arq_secao_sc = fopen("arq_secao_sc.bin","ab");

                    sc_secao.num_secao = num_secao;
                    sc_secao.cod_local_secao = cod_local;

                    fwrite(&sc_secao, sizeof(struct info_secao),1,arq_secao_sc);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",sc_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",sc_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",sc_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",sc_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",sc_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",sc_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",sc_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_sc);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_sc);

    }
    else if(!(strcmp(cadSecao,"SP"))){

        FILE *arq_zona_sp;
        FILE *arq_secao_sp;


        arq_zona_sp = fopen("arq_zona_sp.bin","rb"); // Abre o arquivo

        if(arq_zona_sp == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&sp_secao.num_zona_secao);
            while(fread(&sp_zona, sizeof(struct info_zona),1,arq_zona_sp)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(sp_zona.numero_zona == sp_secao.num_zona_secao){

                    arq_secao_sp = fopen("arq_secao_sp.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(sp_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(sp_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(sp_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_sp != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_sp();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_sp != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_sp();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&sp_secao.aptos_votar_secao);


                    fclose(arq_secao_sp);

                    arq_secao_sp = fopen("arq_secao_sp.bin","ab");

                    sp_secao.num_secao = num_secao;
                    sp_secao.cod_local_secao = cod_local;

                    fwrite(&sp_secao, sizeof(struct info_secao),1,arq_secao_sp);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",sp_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",sp_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",sp_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",sp_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",sp_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",sp_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",sp_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_sp);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_sp);

    }
    else if(!(strcmp(cadSecao,"SE"))){

        FILE *arq_zona_se;
        FILE *arq_secao_se;


        arq_zona_se = fopen("arq_zona_se.bin","rb"); // Abre o arquivo

        if(arq_zona_se == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&se_secao.num_zona_secao);
            while(fread(&se_zona, sizeof(struct info_zona),1,arq_zona_se)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(se_zona.numero_zona == se_secao.num_zona_secao){

                    arq_secao_se = fopen("arq_secao_se.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(se_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(se_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(se_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_se != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_se();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_se != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_se();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&se_secao.aptos_votar_secao);


                    fclose(arq_secao_se);

                    arq_secao_se = fopen("arq_secao_se.bin","ab");

                    se_secao.num_secao = num_secao;
                    se_secao.cod_local_secao = cod_local;

                    fwrite(&se_secao, sizeof(struct info_secao),1,arq_secao_se);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",se_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",se_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",se_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",se_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",se_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",se_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",se_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_se);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_se);

    }
    else if(!(strcmp(cadSecao,"TO"))){

        FILE *arq_zona_to;
        FILE *arq_secao_to;


        arq_zona_to = fopen("arq_zona_to.bin","rb"); // Abre o arquivo

        if(arq_zona_to == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadSecao);
        }else{
            getchar();
            printf("\nNumero da Zona Eleitoral para o cadastro da Secao Eleitoral: ");
            scanf("%d",&to_secao.num_zona_secao);
            while(fread(&to_zona, sizeof(struct info_zona),1,arq_zona_to)){ // Verifica a quantidade de zonas cadastradas a cada abertura do programa ou condicao
                if(to_zona.numero_zona == to_secao.num_zona_secao){

                    arq_secao_to = fopen("arq_secao_to.bin","rb"); // Abre o arquivo

                    verificar = 1;

                    getchar();
                    printf("\nCEP onde se localiza a secao eleitoral: ");
                    fgets(to_secao.cep_secao,20,stdin);

                    printf("\nBairro onde se localiza a secao eleitoral: ");
                    fgets(to_secao.bairro_secao,100,stdin);

                    printf("\nLocal onde se localiza a secao eleitoral(ex:Escola): ");
                    fgets(to_secao.local_secao,100,stdin);

                    printf("\nNumero da Secao Eleitoral: ");
                    scanf("%d",&num_secao);

                    // Verifica se existe um mesmo numero da secao eleitoral
                    if(arq_secao_to != NULL){
                        do{
                            repetir_num_secao = verificar_num_secao_to();
                        }while(repetir_num_secao == 1);
                    }

                    printf("\nCodigo do local da Secao: ");
                    scanf("%d",&cod_local);

                    // Verifica se existe um mesmo código do local da secao eleitoral
                    if(arq_secao_to != NULL){
                        do{
                            repetir_cod_local_secao = verificar_cod_local_to();
                        }while(repetir_cod_local_secao == 1);
                    }

                    printf("\nAptos para votar na Secao(numero de pessoas): ");
                    scanf("%ld",&to_secao.aptos_votar_secao);


                    fclose(arq_secao_to);

                    arq_secao_to = fopen("arq_secao_to.bin","ab");

                    to_secao.num_secao = num_secao;
                    to_secao.cod_local_secao = cod_local;

                    fwrite(&to_secao, sizeof(struct info_secao),1,arq_secao_to);

                    linha();

                    printf("\nINFORMACOES ARMAZENADAS COM SUCESSO");
                    linha();
                    printf("\nINFORMACOES DA SECAO ELEITORAL");
                    printf("\nMunicipio da Zona Eleitoral onde esta cadastrada a Secao: %s ",to_zona.municipio_zona);
                    printf("\nCEP onde se localiza a secao eleitoral: %s",to_secao.cep_secao);
                    printf("\nBairro onde se localiza a secao eleitoral: %s",to_secao.bairro_secao);
                    printf("\nLocal onde se localiza a secao eleitoral: %s",to_secao.local_secao);
                    printf("\nNumero da Secao Eleitoral: %d",to_secao.num_secao);
                    printf("\nCodigo do local da Secao: %d",to_secao.cod_local_secao);
                    printf("\nAptos para votar na Secao(numero de pessoas): %ld",to_secao.aptos_votar_secao);
                    linha();

                    fclose(arq_secao_to);
                    break;
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;


        fclose(arq_zona_to);

    }
    else{
        printf("\n########## OPCAO INVALIDA ##########");
    }


}