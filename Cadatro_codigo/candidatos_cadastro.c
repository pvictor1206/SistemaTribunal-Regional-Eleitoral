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

char nome_candi[100];
char sigla_partido[10];

int repetir_candidato_cpf = 0;
int repetir_candidato_rg = 0;

long int cpf_candidato;
long int rg_candidato;



struct info_candidados{
    char nome_candidato[100];
    char municipio_candidato[100];
    char sigla_partido_candidato[10];
    int numero_candidato;
    long int cpf_candidato;
    long int rg_candidato;
}candidatos_ac,candidatos_al,candidatos_ap,candidatos_am,candidatos_ba,candidatos_ce,candidatos_es,candidatos_go,candidatos_ma,candidatos_mt,candidatos_ms,candidatos_mg,candidatos_pa,candidatos_pb,candidatos_pr,candidatos_pe,candidatos_pi,candidatos_rj,candidatos_rn,candidatos_rs,candidatos_ro,candidatos_rr,candidatos_sc,candidatos_sp,candidatos_se,candidatos_to;

// Funcoes para verificar se existe um mesmo CPF dentro do arquivo
int virificar_cpf_candidato_ac(){
    //AC
    FILE *arq_candidato_ac;
    arq_candidato_ac = fopen("arq_candidato_ac.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_ac, sizeof(struct info_candidados), 1, arq_candidato_ac);
        if(cpf_candidato == candidatos_ac.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_ac)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_ac);

    return repetir_candidato_cpf;
}

int virificar_cpf_candidato_al(){
    //AL
    FILE *arq_candidato_al;
    arq_candidato_al = fopen("arq_candidato_al.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_al, sizeof(struct info_candidados), 1, arq_candidato_al);
        if(cpf_candidato == candidatos_al.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_al)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_al);

    return repetir_candidato_cpf;
}

int virificar_cpf_candidato_ap(){
    //AP
    FILE *arq_candidato_ap;
    arq_candidato_ap = fopen("arq_candidato_al.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_ap, sizeof(struct info_candidados), 1, arq_candidato_ap);
        if(cpf_candidato == candidatos_ap.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_ap)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_ap);

    return repetir_candidato_cpf;
}

int virificar_cpf_candidato_am(){
    //AM
    FILE *arq_candidato_am;
    arq_candidato_am = fopen("arq_candidato_am.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_am, sizeof(struct info_candidados), 1, arq_candidato_am);
        if(cpf_candidato == candidatos_am.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_am)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_am);

    return repetir_candidato_cpf;
}

int virificar_cpf_candidato_ba(){
    //BA
    FILE *arq_candidato_ba;
    arq_candidato_ba = fopen("arq_candidato_ba.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_ba, sizeof(struct info_candidados), 1, arq_candidato_ba);
        if(cpf_candidato == candidatos_ba.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_ba)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_ba);

    return repetir_candidato_cpf;
}

int virificar_cpf_candidato_ce(){
    //CE
    FILE *arq_candidato_ce;
    arq_candidato_ce = fopen("arq_candidato_ce.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_ce, sizeof(struct info_candidados), 1, arq_candidato_ce);
        if(cpf_candidato == candidatos_ce.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_ce)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_ce);

    return repetir_candidato_cpf;
}

int virificar_cpf_candidato_es(){
    //ES
    FILE *arq_candidato_es;
    arq_candidato_es = fopen("arq_candidato_es.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_es, sizeof(struct info_candidados), 1, arq_candidato_es);
        if(cpf_candidato == candidatos_es.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_es)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_es);

    return repetir_candidato_cpf;
}

int virificar_cpf_candidato_go(){
    //GO
    FILE *arq_candidato_go;
    arq_candidato_go = fopen("arq_candidato_go.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_go, sizeof(struct info_candidados), 1, arq_candidato_go);
        if(cpf_candidato == candidatos_go.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_go)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_go);

    return repetir_candidato_cpf;
}


int virificar_cpf_candidato_ma(){
    //MA
    FILE *arq_candidato_ma;
    arq_candidato_ma = fopen("arq_candidato_ma.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_ma, sizeof(struct info_candidados), 1, arq_candidato_ma);
        if(cpf_candidato == candidatos_ma.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_ma)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_ma);

    return repetir_candidato_cpf;
}


int virificar_cpf_candidato_mt(){
    //MT
    FILE *arq_candidato_mt;
    arq_candidato_mt = fopen("arq_candidato_mt.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_mt, sizeof(struct info_candidados), 1, arq_candidato_mt);
        if(cpf_candidato == candidatos_mt.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_mt)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_mt);

    return repetir_candidato_cpf;
}

int virificar_cpf_candidato_ms(){
    //MS
    FILE *arq_candidato_ms;
    arq_candidato_ms = fopen("arq_candidato_ms.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_ms, sizeof(struct info_candidados), 1, arq_candidato_ms);
        if(cpf_candidato == candidatos_ms.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_ms)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_ms);

    return repetir_candidato_cpf;
}

int virificar_cpf_candidato_mg(){
    //MG
    FILE *arq_candidato_mg;
    arq_candidato_mg = fopen("arq_candidato_mg.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_mg, sizeof(struct info_candidados), 1, arq_candidato_mg);
        if(cpf_candidato == candidatos_mg.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_mg)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_mg);

    return repetir_candidato_cpf;
}

int virificar_cpf_candidato_pa(){
    //PA
    FILE *arq_candidato_pa;
    arq_candidato_pa = fopen("arq_candidato_pa.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_pa, sizeof(struct info_candidados), 1, arq_candidato_pa);
        if(cpf_candidato == candidatos_pa.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_pa)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_pa);

    return repetir_candidato_cpf;
}

int virificar_cpf_candidato_pb(){
    //PB
    FILE *arq_candidato_pb;
    arq_candidato_pb = fopen("arq_candidato_pb.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_pb, sizeof(struct info_candidados), 1, arq_candidato_pb);
        if(cpf_candidato == candidatos_pb.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_pb)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_pb);

    return repetir_candidato_cpf;
}

int virificar_cpf_candidato_pr(){
    //PR
    FILE *arq_candidato_pr;
    arq_candidato_pr = fopen("arq_candidato_pr.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_pr, sizeof(struct info_candidados), 1, arq_candidato_pr);
        if(cpf_candidato == candidatos_pr.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_pr)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_pr);

    return repetir_candidato_cpf;
}

int virificar_cpf_candidato_pe(){
    //PE
    FILE *arq_candidato_pe;
    arq_candidato_pe = fopen("arq_candidato_pe.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_pe, sizeof(struct info_candidados), 1, arq_candidato_pe);
        if(cpf_candidato == candidatos_pe.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_pe)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_pe);

    return repetir_candidato_cpf;
}

int virificar_cpf_candidato_pi(){
    //PI
    FILE *arq_candidato_pi;
    arq_candidato_pi = fopen("arq_candidato_pi.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_pi, sizeof(struct info_candidados), 1, arq_candidato_pi);
        if(cpf_candidato == candidatos_pi.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_pi)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_pi);

    return repetir_candidato_cpf;
}

int virificar_cpf_candidato_rj(){
    //RJ
    FILE *arq_candidato_rj;
    arq_candidato_rj = fopen("arq_candidato_rj.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_rj, sizeof(struct info_candidados), 1, arq_candidato_rj);
        if(cpf_candidato == candidatos_rj.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_rj)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_rj);

    return repetir_candidato_cpf;
}

int virificar_cpf_candidato_rn(){
    //RN
    FILE *arq_candidato_rn;
    arq_candidato_rn = fopen("arq_candidato_rn.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_rn, sizeof(struct info_candidados), 1, arq_candidato_rn);
        if(cpf_candidato == candidatos_rn.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_rn)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_rn);

    return repetir_candidato_cpf;
}

int virificar_cpf_candidato_rs(){
    //RS
    FILE *arq_candidato_rs;
    arq_candidato_rs = fopen("arq_candidato_rs.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_rs, sizeof(struct info_candidados), 1, arq_candidato_rs);
        if(cpf_candidato == candidatos_rs.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_rs)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_rs);

    return repetir_candidato_cpf;
}

int virificar_cpf_candidato_ro(){
    //RO
    FILE *arq_candidato_ro;
    arq_candidato_ro = fopen("arq_candidato_ro.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_ro, sizeof(struct info_candidados), 1, arq_candidato_ro);
        if(cpf_candidato == candidatos_ro.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_ro)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_ro);

    return repetir_candidato_cpf;
}

int virificar_cpf_candidato_rr(){
    //RR
    FILE *arq_candidato_rr;
    arq_candidato_rr = fopen("arq_candidato_rr.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_rr, sizeof(struct info_candidados), 1, arq_candidato_rr);
        if(cpf_candidato == candidatos_rr.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_rr)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_rr);

    return repetir_candidato_cpf;
}

int virificar_cpf_candidato_sc(){
    //SC
    FILE *arq_candidato_sc;
    arq_candidato_sc = fopen("arq_candidato_sc.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_sc, sizeof(struct info_candidados), 1, arq_candidato_sc);
        if(cpf_candidato == candidatos_sc.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_sc)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_sc);

    return repetir_candidato_cpf;
}

int virificar_cpf_candidato_sp(){
    //SP
    FILE *arq_candidato_sp;
    arq_candidato_sp = fopen("arq_candidato_sp.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_sp, sizeof(struct info_candidados), 1, arq_candidato_sp);
        if(cpf_candidato == candidatos_sp.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_sp)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_sp);

    return repetir_candidato_cpf;
}

int virificar_cpf_candidato_se(){
    //SE
    FILE *arq_candidato_se;
    arq_candidato_se = fopen("arq_candidato_se.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_se, sizeof(struct info_candidados), 1, arq_candidato_se);
        if(cpf_candidato == candidatos_se.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_se)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_se);

    return repetir_candidato_cpf;
}

int virificar_cpf_candidato_to(){
    //TO
    FILE *arq_candidato_to;
    arq_candidato_to = fopen("arq_candidato_to.bin","rb");

    repetir_candidato_cpf = 0;

    do {
        fread(&candidatos_to, sizeof(struct info_candidados), 1, arq_candidato_to);
        if(cpf_candidato == candidatos_to.cpf_candidato){
            printf("\nNUMERO DE CPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&cpf_candidato);
            repetir_candidato_cpf = 1;
        }
    } while (!feof(arq_candidato_to)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_to);

    return repetir_candidato_cpf;
}





// Funcoes para verificar se existe um mesmo RG dentro de um arquivo
int verificar_rg_candidato_ac(){
    //AC
    FILE *arq_candidato_ac;
    arq_candidato_ac = fopen("arq_candidato_ac.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_ac, sizeof(struct info_candidados), 1, arq_candidato_ac);
        if(rg_candidato == candidatos_ac.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_ac)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_ac);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_al(){
    //AL
    FILE *arq_candidato_al;
    arq_candidato_al = fopen("arq_candidato_al.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_al, sizeof(struct info_candidados), 1, arq_candidato_al);
        if(rg_candidato == candidatos_al.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_al)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_al);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_ap(){
    //AP
    FILE *arq_candidato_ap;
    arq_candidato_ap = fopen("arq_candidato_ap.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_ap, sizeof(struct info_candidados), 1, arq_candidato_ap);
        if(rg_candidato == candidatos_ap.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_ap)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_ap);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_am(){
    //AM
    FILE *arq_candidato_am;
    arq_candidato_am = fopen("arq_candidato_am.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_am, sizeof(struct info_candidados), 1, arq_candidato_am);
        if(rg_candidato == candidatos_am.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_am)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_am);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_ba(){
    //BA
    FILE *arq_candidato_ba;
    arq_candidato_ba = fopen("arq_candidato_ba.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_ba, sizeof(struct info_candidados), 1, arq_candidato_ba);
        if(rg_candidato == candidatos_ba.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_ba)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_ba);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_ce(){
    //CE
    FILE *arq_candidato_ce;
    arq_candidato_ce = fopen("arq_candidato_ce.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_ce, sizeof(struct info_candidados), 1, arq_candidato_ce);
        if(rg_candidato == candidatos_ce.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_ce)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_ce);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_es(){
    //ES
    FILE *arq_candidato_es;
    arq_candidato_es = fopen("arq_candidato_es.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_es, sizeof(struct info_candidados), 1, arq_candidato_es);
        if(rg_candidato == candidatos_es.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_es)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_es);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_go(){
    //GO
    FILE *arq_candidato_go;
    arq_candidato_go = fopen("arq_candidato_go.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_go, sizeof(struct info_candidados), 1, arq_candidato_go);
        if(rg_candidato == candidatos_go.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_go)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_go);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_ma(){
    //MA
    FILE *arq_candidato_ma;
    arq_candidato_ma = fopen("arq_candidato_ma.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_ma, sizeof(struct info_candidados), 1, arq_candidato_ma);
        if(rg_candidato == candidatos_ma.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_ma)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_ma);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_mt(){
    //MT
    FILE *arq_candidato_mt;
    arq_candidato_mt = fopen("arq_candidato_mt.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_mt, sizeof(struct info_candidados), 1, arq_candidato_mt);
        if(rg_candidato == candidatos_mt.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_mt)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_mt);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_ms(){
    //MS
    FILE *arq_candidato_ms;
    arq_candidato_ms = fopen("arq_candidato_ms.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_ms, sizeof(struct info_candidados), 1, arq_candidato_ms);
        if(rg_candidato == candidatos_ms.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_ms)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_ms);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_mg(){
    //MG
    FILE *arq_candidato_mg;
    arq_candidato_mg = fopen("arq_candidato_mg.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_mg, sizeof(struct info_candidados), 1, arq_candidato_mg);
        if(rg_candidato == candidatos_mg.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_mg)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_mg);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_pa(){
    //PA
    FILE *arq_candidato_pa;
    arq_candidato_pa = fopen("arq_candidato_pa.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_pa, sizeof(struct info_candidados), 1, arq_candidato_pa);
        if(rg_candidato == candidatos_pa.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_pa)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_pa);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_pb(){
    //PB
    FILE *arq_candidato_pb;
    arq_candidato_pb = fopen("arq_candidato_pb.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_pb, sizeof(struct info_candidados), 1, arq_candidato_pb);
        if(rg_candidato == candidatos_pb.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_pb)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_pb);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_pr(){
    //PR
    FILE *arq_candidato_pr;
    arq_candidato_pr = fopen("arq_candidato_pr.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_pr, sizeof(struct info_candidados), 1, arq_candidato_pr);
        if(rg_candidato == candidatos_pr.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_pr)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_pr);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_pe(){
    //PE
    FILE *arq_candidato_pe;
    arq_candidato_pe = fopen("arq_candidato_pe.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_pe, sizeof(struct info_candidados), 1, arq_candidato_pe);
        if(rg_candidato == candidatos_pe.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_pe)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_pe);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_pi(){
    //PI
    FILE *arq_candidato_pi;
    arq_candidato_pi = fopen("arq_candidato_pi.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_pi, sizeof(struct info_candidados), 1, arq_candidato_pi);
        if(rg_candidato == candidatos_pi.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_pi)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_pi);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_rj(){
    //RJ
    FILE *arq_candidato_rj;
    arq_candidato_rj = fopen("arq_candidato_rj.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_rj, sizeof(struct info_candidados), 1, arq_candidato_rj);
        if(rg_candidato == candidatos_rj.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_rj)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_rj);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_rn(){
    //RN
    FILE *arq_candidato_rn;
    arq_candidato_rn = fopen("arq_candidato_rn.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_rn, sizeof(struct info_candidados), 1, arq_candidato_rn);
        if(rg_candidato == candidatos_rn.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_rn)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_rn);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_rs(){
    //RS
    FILE *arq_candidato_rs;
    arq_candidato_rs = fopen("arq_candidato_rs.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_rs, sizeof(struct info_candidados), 1, arq_candidato_rs);
        if(rg_candidato == candidatos_rs.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_rs)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_rs);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_ro(){
    //RO
    FILE *arq_candidato_ro;
    arq_candidato_ro = fopen("arq_candidato_ro.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_ro, sizeof(struct info_candidados), 1, arq_candidato_ro);
        if(rg_candidato == candidatos_ro.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_ro)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_ro);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_rr(){
    //RR
    FILE *arq_candidato_rr;
    arq_candidato_rr = fopen("arq_candidato_rr.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_rr, sizeof(struct info_candidados), 1, arq_candidato_rr);
        if(rg_candidato == candidatos_rr.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_rr)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_rr);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_sc(){
    //SC
    FILE *arq_candidato_sc;
    arq_candidato_sc = fopen("arq_candidato_sc.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_sc, sizeof(struct info_candidados), 1, arq_candidato_sc);
        if(rg_candidato == candidatos_sc.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_sc)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_sc);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_sp(){
    //SP
    FILE *arq_candidato_sp;
    arq_candidato_sp = fopen("arq_candidato_sp.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_sp, sizeof(struct info_candidados), 1, arq_candidato_sp);
        if(rg_candidato == candidatos_sp.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_sp)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_sp);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_se(){
    //SE
    FILE *arq_candidato_se;
    arq_candidato_se = fopen("arq_candidato_se.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_se, sizeof(struct info_candidados), 1, arq_candidato_se);
        if(rg_candidato == candidatos_se.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_se)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_se);

    return repetir_candidato_rg;
}

int verificar_rg_candidato_to(){
    //TO
    FILE *arq_candidato_to;
    arq_candidato_to = fopen("arq_candidato_to.bin","rb");

    repetir_candidato_rg = 0;

    do {
        fread(&candidatos_to, sizeof(struct info_candidados), 1, arq_candidato_to);
        if(rg_candidato == candidatos_to.rg_candidato){
            printf("\nNUMERO DE RG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&rg_candidato);
            repetir_candidato_rg = 1;
        }
    } while (!feof(arq_candidato_to)); // enquanto não chegar ao final do arquivo

    fclose(arq_candidato_to);

    return repetir_candidato_rg;
}



void func_cad_cand(){
    char cad_cand[3]; // ira ficar amarzenada a UF que o usuario digitar
    int tamStr,i;
    int parar = 0;
    int verificar = 0;

    estados_aparecer();

    getchar();
    printf("\nDigite a UF do Estado para o cadastro do candidatos: ");
    fgets(cad_cand,3,stdin);

    // Converte minuscula em maiscula
    tamStr = strlen(cad_cand);
    for(i=0; i < tamStr; i++)
    {                            // Converte cada caracter de Str
        cad_cand[i] =toupper(cad_cand[i]);  // para maiuscula
    }

    // Fazer o cadastro de secoes eleitorais
    // É necessario zonas eleitorais para fazer o cadastro da secao
    if(!(strcmp(cad_cand,"AC"))) {

        FILE *arq_mun_ac;
        FILE *arq_partido;
        FILE *arq_candidato_ac;

        arq_mun_ac = fopen("arq_mun_ac.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_ac == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_ac.municipio_candidato, 100, stdin);
            while (fread(&ac, sizeof(struct municipio), 1, arq_mun_ac)) {
                if (!(strcmp(candidatos_ac.municipio_candidato, ac.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 10, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_ac = fopen("arq_candidato_ac.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_ac.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_ac != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_ac();
                                }while(repetir_candidato_cpf == 1);
                            }

                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_ac != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_ac();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_ac.numero_candidato = partidos.numero_partido;

                            candidatos_ac.cpf_candidato = cpf_candidato;
                            candidatos_ac.rg_candidato = rg_candidato;
                            strcpy(candidatos_ac.nome_candidato,nome_candi);
                            strcpy(candidatos_ac.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_ac);

                            arq_candidato_ac = fopen("arq_candidato_ac.bin","ab");

                            fwrite(&candidatos_ac, sizeof(struct info_candidados),1,arq_candidato_ac);



                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_ac.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_ac.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_ac.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_ac.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_ac.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_ac.numero_candidato);
                            linha();

                            fclose(arq_candidato_ac);


                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_ac);
        fclose(arq_partido);

    }
    else if(!(strcmp(cad_cand,"AL"))) {

        FILE *arq_mun_al;
        FILE *arq_partido;
        FILE *arq_candidato_al;

        arq_mun_al = fopen("arq_mun_al.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_al == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_al.municipio_candidato, 100, stdin);
            while (fread(&al, sizeof(struct municipio), 1, arq_mun_al)) {
                if (!(strcmp(candidatos_al.municipio_candidato, al.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_al = fopen("arq_candidato_al.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_al.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_al != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_al();
                                }while(repetir_candidato_cpf == 1);
                            }

                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_al != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_al();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_al.numero_candidato = partidos.numero_partido;

                            candidatos_al.cpf_candidato = cpf_candidato;
                            candidatos_al.rg_candidato = rg_candidato;
                            strcpy(candidatos_al.nome_candidato,nome_candi);
                            strcpy(candidatos_al.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_al);

                            arq_candidato_al = fopen("arq_candidato_al.bin","ab");


                            fwrite(&candidatos_al, sizeof(struct info_candidados),1,arq_candidato_al);

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_al.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_al.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_al.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_al.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_al.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_al.numero_candidato);
                            linha();

                            fclose(arq_candidato_al);

                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_al);
        fclose(arq_partido);

    }
    else if(!(strcmp(cad_cand,"AP"))) {

        FILE *arq_mun_ap;
        FILE *arq_partido;
        FILE *arq_candidato_ap;

        arq_mun_ap = fopen("arq_mun_ap.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_ap == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_ap.municipio_candidato, 100, stdin);
            while (fread(&ap, sizeof(struct municipio), 1, arq_mun_ap)) {
                if (!(strcmp(candidatos_ap.municipio_candidato, ap.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_ap = fopen("arq_candidato_ap.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_ap.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_ap != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_ap();
                                }while(repetir_candidato_cpf == 1);
                            }

                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_ap != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_ap();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_ap.numero_candidato = partidos.numero_partido;

                            candidatos_ap.cpf_candidato = cpf_candidato;
                            candidatos_ap.rg_candidato = rg_candidato;
                            strcpy(candidatos_ap.nome_candidato,nome_candi);
                            strcpy(candidatos_ap.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_ap);

                            arq_candidato_ap = fopen("arq_candidato_ap.bin","ab");

                            fwrite(&candidatos_ap, sizeof(struct info_candidados),1,arq_candidato_ap);

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_ap.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_ap.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_ap.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_ap.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_ap.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_ap.numero_candidato);
                            linha();

                            fclose(arq_candidato_ap);

                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_ap);
        fclose(arq_partido);

    }
    else if(!(strcmp(cad_cand,"AM"))) {

        FILE *arq_mun_am;
        FILE *arq_partido;
        FILE *arq_candidato_am;

        arq_mun_am = fopen("arq_mun_am.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_am == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_am.municipio_candidato, 100, stdin);
            while (fread(&am, sizeof(struct municipio), 1, arq_mun_am)) {
                if (!(strcmp(candidatos_am.municipio_candidato, am.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_am = fopen("arq_candidato_am.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_am.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_am != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_am();
                                }while(repetir_candidato_cpf == 1);
                            }

                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_am != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_am();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_am.numero_candidato = partidos.numero_partido;

                            candidatos_am.cpf_candidato = cpf_candidato;
                            candidatos_am.rg_candidato = rg_candidato;
                            strcpy(candidatos_am.nome_candidato,nome_candi);
                            strcpy(candidatos_am.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_am);

                            arq_candidato_am = fopen("arq_candidato_am.bin","ab");

                            fwrite(&candidatos_am, sizeof(struct info_candidados),1,arq_candidato_am);

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_am.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_am.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_am.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_am.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_am.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_am.numero_candidato);
                            linha();

                            fclose(arq_candidato_am);

                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_am);
        fclose(arq_partido);

    }
    else if(!(strcmp(cad_cand,"BA"))) {

        FILE *arq_mun_ba;
        FILE *arq_partido;
        FILE *arq_candidato_ba;

        arq_mun_ba = fopen("arq_mun_ba.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_ba == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_ba.municipio_candidato, 100, stdin);
            while (fread(&ba, sizeof(struct municipio), 1, arq_mun_ba)) {
                if (!(strcmp(candidatos_ba.municipio_candidato, ba.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_ba = fopen("arq_candidato_ba.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_ba.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_ba != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_ba();
                                }while(repetir_candidato_cpf == 1);
                            }

                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_ba != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_ba();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_ba.numero_candidato = partidos.numero_partido;

                            candidatos_ba.cpf_candidato = cpf_candidato;
                            candidatos_ba.rg_candidato = rg_candidato;
                            strcpy(candidatos_ba.nome_candidato,nome_candi);
                            strcpy(candidatos_ba.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_ba);

                            arq_candidato_ba = fopen("arq_candidato_ba.bin","ab");

                            fwrite(&candidatos_ba, sizeof(struct info_candidados),1,arq_candidato_ba);

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_ba.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_ba.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_ba.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_ba.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_ba.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_ba.numero_candidato);
                            linha();

                            fclose(arq_candidato_ba);
                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_ba);
        fclose(arq_partido);

    }
    else if(!(strcmp(cad_cand,"CE"))) {

        FILE *arq_mun_ce;
        FILE *arq_partido;
        FILE *arq_candidato_ce;

        arq_mun_ce = fopen("arq_mun_ce.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_ce == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_ce.municipio_candidato, 100, stdin);
            while (fread(&ce, sizeof(struct municipio), 1, arq_mun_ce)) {
                if (!(strcmp(candidatos_ce.municipio_candidato, ce.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_ce = fopen("arq_candidato_ce.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_ce.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_ce != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_ce();
                                }while(repetir_candidato_cpf == 1);
                            }

                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_ce != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_ce();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_ce.numero_candidato = partidos.numero_partido;

                            candidatos_ce.cpf_candidato = cpf_candidato;
                            candidatos_ce.rg_candidato = rg_candidato;
                            strcpy(candidatos_ce.nome_candidato,nome_candi);
                            strcpy(candidatos_ce.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_ce);

                            arq_candidato_ce = fopen("arq_candidato_ce.bin","ab");

                            fwrite(&candidatos_ce, sizeof(struct info_candidados),1,arq_candidato_ce);

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_ce.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_ce.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_ce.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_ce.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_ce.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_ce.numero_candidato);
                            linha();

                            fclose(arq_candidato_ce);

                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_ce);
        fclose(arq_partido);

    }
    else if(!(strcmp(cad_cand,"ES"))) {

        FILE *arq_mun_es;
        FILE *arq_partido;
        FILE *arq_candidato_es;

        arq_mun_es = fopen("arq_mun_es.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_es == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_es.municipio_candidato, 100, stdin);
            while (fread(&es, sizeof(struct municipio), 1, arq_mun_es)) {
                if (!(strcmp(candidatos_es.municipio_candidato, es.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_es = fopen("arq_candidato_es.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_es.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_es != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_es();
                                }while(repetir_candidato_cpf == 1);
                            }

                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_es != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_es();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_es.numero_candidato = partidos.numero_partido;

                            candidatos_es.cpf_candidato = cpf_candidato;
                            candidatos_es.rg_candidato = rg_candidato;
                            strcpy(candidatos_es.nome_candidato,nome_candi);
                            strcpy(candidatos_es.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_es);

                            arq_candidato_es = fopen("arq_candidato_es.bin","ab");

                            fwrite(&candidatos_es, sizeof(struct info_candidados),1,arq_candidato_es);

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_es.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_es.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_es.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_es.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_es.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_es.numero_candidato);
                            linha();

                            fclose(arq_candidato_es);
                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_es);
        fclose(arq_partido);

    }
    else if(!(strcmp(cad_cand,"GO"))) {

        FILE *arq_mun_go;
        FILE *arq_partido;
        FILE *arq_candidato_go;

        arq_mun_go = fopen("arq_mun_go.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_go == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_go.municipio_candidato, 100, stdin);
            while (fread(&go, sizeof(struct municipio), 1, arq_mun_go)) {
                if (!(strcmp(candidatos_go.municipio_candidato, go.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_go = fopen("arq_candidato_go.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_go.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_go != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_go();
                                }while(repetir_candidato_cpf == 1);
                            }

                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_go != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_go();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_go.numero_candidato = partidos.numero_partido;

                            candidatos_go.cpf_candidato = cpf_candidato;
                            candidatos_go.rg_candidato = rg_candidato;
                            strcpy(candidatos_go.nome_candidato,nome_candi);
                            strcpy(candidatos_go.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_go);

                            arq_candidato_go = fopen("arq_candidato_go.bin","ab");

                            fwrite(&candidatos_go, sizeof(struct info_candidados),1,arq_candidato_go);

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_go.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_go.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_go.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_go.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_go.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_go.numero_candidato);
                            linha();

                            fclose(arq_candidato_go);

                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_go);
        fclose(arq_partido);

    }
    else if(!(strcmp(cad_cand,"MA"))) {

        FILE *arq_mun_ma;
        FILE *arq_partido;
        FILE *arq_candidato_ma;

        arq_mun_ma = fopen("arq_mun_ma.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_ma == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_ma.municipio_candidato, 100, stdin);
            while (fread(&ma, sizeof(struct municipio), 1, arq_mun_ma)) {
                if (!(strcmp(candidatos_ma.municipio_candidato, ma.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_ma = fopen("arq_candidato_ma.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_ma.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_ma != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_ma();
                                }while(repetir_candidato_cpf == 1);
                            }

                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_ma != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_ma();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_ma.numero_candidato = partidos.numero_partido;

                            candidatos_ma.cpf_candidato = cpf_candidato;
                            candidatos_ma.rg_candidato = rg_candidato;
                            strcpy(candidatos_ma.nome_candidato,nome_candi);
                            strcpy(candidatos_ma.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_ma);

                            arq_candidato_ma = fopen("arq_candidato_ma.bin","ab");

                            fwrite(&candidatos_ma, sizeof(struct info_candidados),1,arq_candidato_ma);

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_ma.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_ma.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_ma.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_ma.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_ma.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_ma.numero_candidato);
                            linha();


                            fclose(arq_candidato_ma);
                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_ma);
        fclose(arq_partido);

    }
    else if(!(strcmp(cad_cand,"MT"))) {

        FILE *arq_mun_mt;
        FILE *arq_partido;
        FILE *arq_candidato_mt;

        arq_mun_mt = fopen("arq_mun_mt.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_mt == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_mt.municipio_candidato, 100, stdin);
            while (fread(&mt, sizeof(struct municipio), 1, arq_mun_mt)) {
                if (!(strcmp(candidatos_mt.municipio_candidato, mt.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_mt = fopen("arq_candidato_mt.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_mt.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_mt != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_mt();
                                }while(repetir_candidato_cpf == 1);
                            }

                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_mt != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_mt();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_mt.numero_candidato = partidos.numero_partido;

                            candidatos_mt.cpf_candidato = cpf_candidato;
                            candidatos_mt.rg_candidato = rg_candidato;
                            strcpy(candidatos_mt.nome_candidato,nome_candi);
                            strcpy(candidatos_mt.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_mt);

                            arq_candidato_mt = fopen("arq_candidato_mt.bin","ab");

                            fwrite(&candidatos_mt, sizeof(struct info_candidados),1,arq_candidato_mt);

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_mt.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_mt.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_mt.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_mt.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_mt.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_mt.numero_candidato);
                            linha();


                            fclose(arq_candidato_mt);
                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_mt);
        fclose(arq_partido);

    }
    else if(!(strcmp(cad_cand,"MS"))) {

        FILE *arq_mun_ms;
        FILE *arq_partido;
        FILE *arq_candidato_ms;

        arq_mun_ms = fopen("arq_mun_ms.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_ms == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_ms.municipio_candidato, 100, stdin);
            while (fread(&ms, sizeof(struct municipio), 1, arq_mun_ms)) {
                if (!(strcmp(candidatos_ms.municipio_candidato, ms.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_ms = fopen("arq_candidato_ms.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_ms.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_ms != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_ms();
                                }while(repetir_candidato_cpf == 1);
                            }

                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_ms != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_ms();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_ms.numero_candidato = partidos.numero_partido;

                            candidatos_ms.cpf_candidato = cpf_candidato;
                            candidatos_ms.rg_candidato = rg_candidato;
                            strcpy(candidatos_ms.nome_candidato,nome_candi);
                            strcpy(candidatos_ms.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_ms);

                            arq_candidato_ms = fopen("arq_candidato_ms.bin","ab");

                            fwrite(&candidatos_ms, sizeof(struct info_candidados),1,arq_candidato_ms);

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_ms.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_ms.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_ms.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_ms.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_ms.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_ms.numero_candidato);
                            linha();

                            fclose(arq_candidato_ms);
                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_ms);
        fclose(arq_partido);

    }
    else if(!(strcmp(cad_cand,"MG"))) {

        FILE *arq_mun_mg;
        FILE *arq_partido;
        FILE *arq_candidato_mg;

        arq_mun_mg = fopen("arq_mun_mg.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_mg == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_mg.municipio_candidato, 100, stdin);
            while (fread(&mg, sizeof(struct municipio), 1, arq_mun_mg)) {
                if (!(strcmp(candidatos_mg.municipio_candidato, mg.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_mg = fopen("arq_candidato_mg.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_mg.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_mg != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_mg();
                                }while(repetir_candidato_cpf == 1);
                            }

                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_mg != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_mg();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_mg.numero_candidato = partidos.numero_partido;

                            candidatos_mg.cpf_candidato = cpf_candidato;
                            candidatos_mg.rg_candidato = rg_candidato;
                            strcpy(candidatos_mg.nome_candidato,nome_candi);
                            strcpy(candidatos_mg.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_mg);

                            arq_candidato_mg = fopen("arq_candidato_mg.bin","ab");

                            fwrite(&candidatos_mg, sizeof(struct info_candidados),1,arq_candidato_mg);

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_mg.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_mg.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_mg.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_mg.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_mg.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_mg.numero_candidato);
                            linha();


                            fclose(arq_candidato_mg);
                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_mg);
        fclose(arq_partido);

    }
    else if(!(strcmp(cad_cand,"PA"))) {

        FILE *arq_mun_pa;
        FILE *arq_partido;
        FILE *arq_candidato_pa;

        arq_mun_pa = fopen("arq_mun_pa.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_pa == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_pa.municipio_candidato, 100, stdin);
            while (fread(&pa, sizeof(struct municipio), 1, arq_mun_pa)) {
                if (!(strcmp(candidatos_pa.municipio_candidato, pa.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_pa = fopen("arq_candidato_pa.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_pa.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_pa != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_pa();
                                }while(repetir_candidato_cpf == 1);
                            }

                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_pa != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_pa();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_pa.numero_candidato = partidos.numero_partido;

                            candidatos_pa.cpf_candidato = cpf_candidato;
                            candidatos_pa.rg_candidato = rg_candidato;
                            strcpy(candidatos_pa.nome_candidato,nome_candi);
                            strcpy(candidatos_pa.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_pa);

                            arq_candidato_pa = fopen("arq_candidato_pa.bin","ab");

                            fwrite(&candidatos_pa, sizeof(struct info_candidados),1,arq_candidato_pa);

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_pa.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_pa.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_pa.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_pa.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_pa.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_pa.numero_candidato);
                            linha();

                            fclose(arq_candidato_pa);

                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_pa);
        fclose(arq_partido);

    }
    else if(!(strcmp(cad_cand,"PB"))) {

        FILE *arq_mun_pb;
        FILE *arq_partido;
        FILE *arq_candidato_pb;

        arq_mun_pb = fopen("arq_mun_pb.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");

        if (arq_mun_pb == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_pb.municipio_candidato, 100, stdin);
            while (fread(&pb, sizeof(struct municipio), 1, arq_mun_pb)) {
                if (!(strcmp(candidatos_pb.municipio_candidato, pb.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_pb = fopen("arq_candidato_pb.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_pb.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }


                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_pb != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_pb();
                                }while(repetir_candidato_cpf == 1);
                            }

                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_pb != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_pb();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_pb.numero_candidato = partidos.numero_partido;

                            candidatos_pb.cpf_candidato = cpf_candidato;
                            candidatos_pb.rg_candidato = rg_candidato;
                            strcpy(candidatos_pb.nome_candidato,nome_candi);
                            strcpy(candidatos_pb.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_pb);

                            arq_candidato_pb = fopen("arq_candidato_pb.bin","ab");

                            fwrite(&candidatos_pb, sizeof(struct info_candidados),1,arq_candidato_pb);

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_pb.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_pb.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_pb.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_pb.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_pb.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_pb.numero_candidato);
                            linha();


                            fclose(arq_candidato_pb);
                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_pb);
        fclose(arq_partido);

    }
    else if(!(strcmp(cad_cand,"PR"))) {

        FILE *arq_mun_pr;
        FILE *arq_partido;
        FILE *arq_candidato_pr;

        arq_mun_pr = fopen("arq_mun_pr.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_pr == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_pr.municipio_candidato, 100, stdin);
            while (fread(&pr, sizeof(struct municipio), 1, arq_mun_pr)) {
                if (!(strcmp(candidatos_pr.municipio_candidato, pr.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_pr = fopen("arq_candidato_pr.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_pr.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_pr != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_pr();
                                }while(repetir_candidato_cpf == 1);
                            }

                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_pr != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_pr();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_pr.numero_candidato = partidos.numero_partido;

                            candidatos_pr.cpf_candidato = cpf_candidato;
                            candidatos_pr.rg_candidato = rg_candidato;
                            strcpy(candidatos_pr.nome_candidato,nome_candi);
                            strcpy(candidatos_pr.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_pr);

                            arq_candidato_pr = fopen("arq_candidato_pr.bin","ab");

                            fwrite(&candidatos_pr, sizeof(struct info_candidados),1,arq_candidato_pr);

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_pr.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_pr.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_pr.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_pr.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_pr.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_pr.numero_candidato);
                            linha();


                            fclose(arq_candidato_pr);
                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_pr);
        fclose(arq_partido);

    }
    else if(!(strcmp(cad_cand,"PE"))) {
        FILE *arq_mun_pe;
        FILE *arq_partido;
        FILE *arq_candidato_pe;

        arq_mun_pe = fopen("arq_mun_pe.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_pe == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_pe.municipio_candidato, 100, stdin);
            while (fread(&pe, sizeof(struct municipio), 1, arq_mun_pe)) {
                if (!(strcmp(candidatos_pe.municipio_candidato, pe.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_pe = fopen("arq_candidato_pe.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_pe.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_pe != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_pe();
                                }while(repetir_candidato_cpf == 1);
                            }

                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_pe != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_pe();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_pe.numero_candidato = partidos.numero_partido;

                            candidatos_pe.cpf_candidato = cpf_candidato;
                            candidatos_pe.rg_candidato = rg_candidato;
                            strcpy(candidatos_pe.nome_candidato,nome_candi);
                            strcpy(candidatos_pe.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_pe);

                            arq_candidato_pe = fopen("arq_candidato_pe.bin","ab");

                            fwrite(&candidatos_pe, sizeof(struct info_candidados),1,arq_candidato_pe);

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_pe.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_pe.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_pe.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_pe.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_pe.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_pe.numero_candidato);
                            linha();


                            fclose(arq_candidato_pe);
                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_pe);
        fclose(arq_partido);

    }
    else if(!(strcmp(cad_cand,"PI"))) {
        FILE *arq_mun_pi;
        FILE *arq_partido;
        FILE *arq_candidato_pi;

        arq_mun_pi = fopen("arq_mun_pi.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_pi == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_pi.municipio_candidato, 100, stdin);
            while (fread(&pi, sizeof(struct municipio), 1, arq_mun_pi)) {
                if (!(strcmp(candidatos_pi.municipio_candidato, pi.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_pi = fopen("arq_candidato_pi.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_pi.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_pi != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_pi();
                                }while(repetir_candidato_cpf == 1);
                            }

                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_pi != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_pi();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_pi.numero_candidato = partidos.numero_partido;

                            candidatos_pi.cpf_candidato = cpf_candidato;
                            candidatos_pi.rg_candidato = rg_candidato;
                            strcpy(candidatos_pi.nome_candidato,nome_candi);
                            strcpy(candidatos_pi.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_pi);

                            arq_candidato_pi = fopen("arq_candidato_pi.bin","ab");

                            fwrite(&candidatos_pi, sizeof(struct info_candidados),1,arq_candidato_pi);

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_pi.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_pi.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_pi.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_pi.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_pi.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_pi.numero_candidato);
                            linha();

                            fclose(arq_candidato_pi);

                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_pi);
        fclose(arq_partido);

    }
    else if(!(strcmp(cad_cand,"RJ"))) {
        FILE *arq_mun_rj;
        FILE *arq_partido;
        FILE *arq_candidato_rj;

        arq_mun_rj = fopen("arq_mun_rj.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_rj == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_rj.municipio_candidato, 100, stdin);
            while (fread(&rj, sizeof(struct municipio), 1, arq_mun_rj)) {
                if (!(strcmp(candidatos_rj.municipio_candidato, rj.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_rj = fopen("arq_candidato_rj.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_rj.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_rj != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_rj();
                                }while(repetir_candidato_cpf == 1);
                            }

                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_rj != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_rj();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_rj.numero_candidato = partidos.numero_partido;

                            candidatos_rj.cpf_candidato = cpf_candidato;
                            candidatos_rj.rg_candidato = rg_candidato;
                            strcpy(candidatos_rj.nome_candidato,nome_candi);
                            strcpy(candidatos_rj.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_rj);

                            arq_candidato_rj = fopen("arq_candidato_rj.bin","ab");

                            fwrite(&candidatos_rj, sizeof(struct info_candidados),1,arq_candidato_rj);

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_rj.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_rj.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_rj.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_rj.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_rj.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_rj.numero_candidato);
                            linha();


                            fclose(arq_candidato_rj);
                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_rj);
        fclose(arq_partido);

    }
    else if(!(strcmp(cad_cand,"RN"))) {
        FILE *arq_mun_rn;
        FILE *arq_partido;
        FILE *arq_candidato_rn;

        arq_mun_rn = fopen("arq_mun_rn.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_rn == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_rn.municipio_candidato, 100, stdin);
            while (fread(&rn, sizeof(struct municipio), 1, arq_mun_rn)) {
                if (!(strcmp(candidatos_rn.municipio_candidato, rn.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_rn = fopen("arq_candidato_rn.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_rn.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_rn != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_rn();
                                }while(repetir_candidato_cpf == 1);
                            }

                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_rn != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_rn();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_rn.numero_candidato = partidos.numero_partido;

                            candidatos_rn.cpf_candidato = cpf_candidato;
                            candidatos_rn.rg_candidato = rg_candidato;
                            strcpy(candidatos_rn.nome_candidato,nome_candi);
                            strcpy(candidatos_rn.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_rn);

                            arq_candidato_rn = fopen("arq_candidato_rn.bin","ab");

                            fwrite(&candidatos_rn, sizeof(struct info_candidados),1,arq_candidato_rn);

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_rn.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_rn.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_rn.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_rn.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_rn.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_rn.numero_candidato);
                            linha();


                            fclose(arq_candidato_rn);
                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_rn);
        fclose(arq_partido);
    }
    else if(!(strcmp(cad_cand,"RS"))) {
        FILE *arq_mun_rs;
        FILE *arq_partido;
        FILE *arq_candidato_rs;

        arq_mun_rs = fopen("arq_mun_rs.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_rs == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_rs.municipio_candidato, 100, stdin);
            while (fread(&rs, sizeof(struct municipio), 1, arq_mun_rs)) {
                if (!(strcmp(candidatos_rs.municipio_candidato, rs.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_rs = fopen("arq_candidato_rs.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_rs.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_rs != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_rs();
                                }while(repetir_candidato_cpf == 1);
                            }

                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_rs != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_rs();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_rs.numero_candidato = partidos.numero_partido;

                            candidatos_rs.cpf_candidato = cpf_candidato;
                            candidatos_rs.rg_candidato = rg_candidato;
                            strcpy(candidatos_rs.nome_candidato,nome_candi);
                            strcpy(candidatos_rs.sigla_partido_candidato,sigla_partido);


                            fclose(arq_candidato_rs);

                            arq_candidato_rs = fopen("arq_candidato_rs.bin","ab");

                            fwrite(&candidatos_rs, sizeof(struct info_candidados),1,arq_candidato_rs);

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_rs.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_rs.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_rs.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_rs.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_rs.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_rs.numero_candidato);
                            linha();

                            fclose(arq_candidato_rs);

                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_rs);
        fclose(arq_partido);

    }
    else if(!(strcmp(cad_cand,"RO"))) {
        FILE *arq_mun_ro;
        FILE *arq_partido;
        FILE *arq_candidato_ro;

        arq_mun_ro = fopen("arq_mun_ro.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_ro == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_ro.municipio_candidato, 100, stdin);
            while (fread(&ro, sizeof(struct municipio), 1, arq_mun_ro)) {
                if (!(strcmp(candidatos_ro.municipio_candidato, ro.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_ro = fopen("arq_candidato_ro.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_ro.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_ro != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_ro();
                                }while(repetir_candidato_cpf == 1);
                            }

                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_ro != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_ro();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_ro.numero_candidato = partidos.numero_partido;

                            candidatos_ro.cpf_candidato = cpf_candidato;
                            candidatos_ro.rg_candidato = rg_candidato;
                            strcpy(candidatos_ro.nome_candidato,nome_candi);
                            strcpy(candidatos_ro.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_ro);

                            arq_candidato_ro = fopen("arq_candidato_ro.bin","ab");

                            fwrite(&candidatos_ro, sizeof(struct info_candidados),1,arq_candidato_ro);

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_ro.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_ro.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_ro.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_ro.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_ro.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_ro.numero_candidato);
                            linha();


                            fclose(arq_candidato_ro);
                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_ro);
        fclose(arq_partido);

    }
    else if(!(strcmp(cad_cand,"RR"))) {
        FILE *arq_mun_rr;
        FILE *arq_partido;
        FILE *arq_candidato_rr;

        arq_mun_rr = fopen("arq_mun_rr.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_rr == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_rr.municipio_candidato, 100, stdin);
            while (fread(&rr, sizeof(struct municipio), 1, arq_mun_rr)) {
                if (!(strcmp(candidatos_rr.municipio_candidato, rr.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_rr = fopen("arq_candidato_rr.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_rr.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_rr != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_rr();
                                }while(repetir_candidato_cpf == 1);
                            }

                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_rr != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_rr();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_rr.numero_candidato = partidos.numero_partido;

                            fwrite(&candidatos_rr, sizeof(struct info_candidados),1,arq_candidato_rr);

                            candidatos_rr.cpf_candidato = cpf_candidato;
                            candidatos_rr.rg_candidato = rg_candidato;
                            strcpy(candidatos_rr.nome_candidato,nome_candi);
                            strcpy(candidatos_rr.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_rr);

                            arq_candidato_rr = fopen("arq_candidato_rr.bin","ab");

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_rr.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_rr.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_rr.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_rr.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_rr.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_rr.numero_candidato);
                            linha();


                            fclose(arq_candidato_rr);
                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_rr);
        fclose(arq_partido);

    }
    else if(!(strcmp(cad_cand,"SC"))) {
        FILE *arq_mun_sc;
        FILE *arq_partido;
        FILE *arq_candidato_sc;

        arq_mun_sc = fopen("arq_mun_sc.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_sc == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_sc.municipio_candidato, 100, stdin);
            while (fread(&sc, sizeof(struct municipio), 1, arq_mun_sc)) {
                if (!(strcmp(candidatos_sc.municipio_candidato, sc.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_sc = fopen("arq_candidato_sc.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_sc.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_sc != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_sc();
                                }while(repetir_candidato_cpf == 1);
                            }


                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_sc != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_sc();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_sc.numero_candidato = partidos.numero_partido;

                            candidatos_sc.cpf_candidato = cpf_candidato;
                            candidatos_sc.rg_candidato = rg_candidato;
                            strcpy(candidatos_sc.nome_candidato,nome_candi);
                            strcpy(candidatos_sc.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_sc);

                            arq_candidato_sc = fopen("arq_candidato_sc.bin","ab");

                            fwrite(&candidatos_sc, sizeof(struct info_candidados),1,arq_candidato_sc);

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_sc.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_sc.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_sc.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_sc.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_sc.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_sc.numero_candidato);
                            linha();

                            fclose(arq_candidato_sc);

                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_sc);
        fclose(arq_partido);

    }
    else if(!(strcmp(cad_cand,"SP"))) {
        FILE *arq_mun_sp;
        FILE *arq_partido;
        FILE *arq_candidato_sp;

        arq_mun_sp = fopen("arq_mun_sp.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_sp == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_sp.municipio_candidato, 100, stdin);
            while (fread(&sp, sizeof(struct municipio), 1, arq_mun_sp)) {
                if (!(strcmp(candidatos_sp.municipio_candidato, sp.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_sp = fopen("arq_candidato_sp.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_sp.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_sp != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_sp();
                                }while(repetir_candidato_cpf == 1);
                            }


                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_sp != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_sp();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_sp.numero_candidato = partidos.numero_partido;

                            candidatos_sp.cpf_candidato = cpf_candidato;
                            candidatos_sp.rg_candidato = rg_candidato;
                            strcpy(candidatos_sp.nome_candidato,nome_candi);
                            strcpy(candidatos_sp.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_sp);

                            arq_candidato_sp = fopen("arq_candidato_sp.bin","ab");

                            fwrite(&candidatos_sp, sizeof(struct info_candidados),1,arq_candidato_sp);

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_sp.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_sp.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_sp.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_sp.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_sp.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_sp.numero_candidato);
                            linha();

                            fclose(arq_candidato_sp);

                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_sp);
        fclose(arq_partido);

    }
    else if(!(strcmp(cad_cand,"SE"))) {
        FILE *arq_mun_se;
        FILE *arq_partido;
        FILE *arq_candidato_se;

        arq_mun_se = fopen("arq_mun_se.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_se == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_se.municipio_candidato, 100, stdin);
            while (fread(&se, sizeof(struct municipio), 1, arq_mun_se)) {
                if (!(strcmp(candidatos_se.municipio_candidato, se.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_se = fopen("arq_candidato_se.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_se.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_se != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_se();
                                }while(repetir_candidato_cpf == 1);
                            }

                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_se != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_se();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_se.numero_candidato = partidos.numero_partido;

                            candidatos_se.cpf_candidato = cpf_candidato;
                            candidatos_se.rg_candidato = rg_candidato;
                            strcpy(candidatos_se.nome_candidato,nome_candi);
                            strcpy(candidatos_se.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_se);

                            arq_candidato_se = fopen("arq_candidato_se.bin","ab");

                            fwrite(&candidatos_se, sizeof(struct info_candidados),1,arq_candidato_se);

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_se.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_se.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_se.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_se.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_se.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_se.numero_candidato);
                            linha();


                            fclose(arq_candidato_se);
                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_se);
        fclose(arq_partido);

    }
    else if(!(strcmp(cad_cand,"TO"))) {
        FILE *arq_mun_to;
        FILE *arq_partido;
        FILE *arq_candidato_to;

        arq_mun_to = fopen("arq_mun_to.bin", "rb");
        arq_partido = fopen("arq_partido.bin", "rb");


        if (arq_mun_to == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).", cad_cand);
        } else if (arq_partido == NULL) {
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).", cad_cand);
        } else {
            printf("\nNOME DO MUNICIPIO: ");
            getchar();
            fgets(candidatos_to.municipio_candidato, 100, stdin);
            while (fread(&to, sizeof(struct municipio), 1, arq_mun_to)) {
                if (!(strcmp(candidatos_to.municipio_candidato, to.nomeMunicipio))) {
                    printf("\nSIGLA DO PARTIDO DO CANDIDATO: ");
                    fgets(sigla_partido, 100, stdin);
                    while (fread(&partidos, sizeof(struct info_partidos), 1, arq_partido)) {
                        if (!(strcmp(sigla_partido, partidos.sigla_partido))) {

                            arq_candidato_to = fopen("arq_candidato_to.bin","rb");

                            verificar = 1;

                            if(partidos.numero_partido == candidatos_to.numero_candidato){
                                printf("\nJA EXISTE UM PREFEITO NESTE MUNICIPIO E PARTIDO: ");
                                break;
                            }

                            printf("\nNOME COMPLETO DO CANDIDATO: ");
                            fgets(nome_candi,100,stdin);

                            printf("\nCPF DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&cpf_candidato);

                            if(arq_candidato_to != NULL){
                                do{
                                    repetir_candidato_cpf = virificar_cpf_candidato_to();
                                }while(repetir_candidato_cpf == 1);
                            }

                            printf("\nRG DO CANDIDATO(SOMENTE NUMEROS): ");
                            scanf("%ld",&rg_candidato);

                            if(arq_candidato_to != NULL){
                                do{
                                    repetir_candidato_rg = verificar_rg_candidato_to();
                                }while(repetir_candidato_rg == 1);
                            }

                            candidatos_to.numero_candidato = partidos.numero_partido;

                            candidatos_to.cpf_candidato = cpf_candidato;
                            candidatos_to.rg_candidato = rg_candidato;
                            strcpy(candidatos_to.nome_candidato,nome_candi);
                            strcpy(candidatos_to.sigla_partido_candidato,sigla_partido);

                            fclose(arq_candidato_to);

                            arq_candidato_to = fopen("arq_candidato_to.bin","ab");

                            fwrite(&candidatos_to, sizeof(struct info_candidados),1,arq_candidato_to);

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO CANDIDATO PARA PREFEITO: %s",candidatos_to.municipio_candidato);
                            printf("\nNOME DO CANDIDATO: %s",candidatos_to.nome_candidato);
                            printf("\nPARTIDO DO CANDIDATO: %s",partidos.nome_partido);
                            printf("\nSIGLA DO PARTIDO: %s",candidatos_to.sigla_partido_candidato);
                            printf("\nCPF DO CANDIDATO: %ld",candidatos_to.cpf_candidato);
                            printf("\nRG DO CANDIDATO: %ld",candidatos_to.rg_candidato);
                            printf("\nNUMERO DO CANDIDATO: %d",candidatos_to.numero_candidato);
                            linha();

                            fclose(arq_candidato_to);

                        }
                    }
                }
            }
        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUM MUNICIPIO OU PARTIDO ENCONTRADO");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_mun_to);
        fclose(arq_partido);
    }

    else{
        printf("\n########## OPCAO INVALIDA ##########");
    }
}
