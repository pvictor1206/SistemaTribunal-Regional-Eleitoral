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

long int verificar_rg = 0;
long int verificar_cpf = 0;
long int verificar_titulo = 0;


int repetir_cpf = 0;
int repetir_rg = 0;
int repetir_titulo = 0;


// Informacoes do cadastro dos eleitores
struct info_eleitores{
    char nome_eleitor[100];
    char endereco_eleitor[100];
    long int rg_eleitor;
    long int cpf_eleitor;
    long int titulo_eleitor;
    int num_zona_eleitor;
    int cod_secao_eleitor;
}eleitor_ac,eleitor_al,eleitor_ap,eleitor_am,eleitor_ba,eleitor_ce,eleitor_es,eleitor_go,eleitor_ma,eleitor_mt,eleitor_ms,eleitor_mg,eleitor_pa,eleitor_pb,eleitor_pr,eleitor_pe,eleitor_pi,eleitor_rj,eleitor_rn,eleitor_rs,eleitor_ro,eleitor_rr,eleitor_sc,eleitor_sp,eleitor_se,eleitor_to;

// Funcoes para verificar titulo
long int verificacao_titulo_ac(){
    //AC
    FILE *arq_eleitores_ac;
    arq_eleitores_ac = fopen("arq_eleitores_ac.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_ac, sizeof(struct info_eleitores), 1, arq_eleitores_ac);
        if(verificar_titulo == eleitor_ac.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_ac)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_ac);

    return verificar_titulo;
}

long int verificacao_titulo_al(){
    //AL
    FILE *arq_eleitores_al;
    arq_eleitores_al = fopen("arq_eleitores_al.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_al, sizeof(struct info_eleitores), 1, arq_eleitores_al);
        if(verificar_titulo == eleitor_al.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_al)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_al);

    return verificar_titulo;
}

long int verificacao_titulo_ap(){
    //AP
    FILE *arq_eleitores_ap;
    arq_eleitores_ap = fopen("arq_eleitores_ap.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_ap, sizeof(struct info_eleitores), 1, arq_eleitores_ap);
        if(verificar_titulo == eleitor_ap.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_ap)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_ap);

    return verificar_titulo;
}

long int verificacao_titulo_am(){
    //AM
    FILE *arq_eleitores_am;
    arq_eleitores_am = fopen("arq_eleitores_am.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_am, sizeof(struct info_eleitores), 1, arq_eleitores_am);
        if(verificar_titulo == eleitor_am.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_am)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_am);

    return verificar_titulo;
}

long int verificacao_titulo_ba(){
    //BA
    FILE *arq_eleitores_ba;
    arq_eleitores_ba = fopen("arq_eleitores_ba.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_ba, sizeof(struct info_eleitores), 1, arq_eleitores_ba);
        if(verificar_titulo == eleitor_ba.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_ba)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_ba);

    return verificar_titulo;
}

long int verificacao_titulo_ce(){
    //CE
    FILE *arq_eleitores_ce;
    arq_eleitores_ce = fopen("arq_eleitores_ce.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_ce, sizeof(struct info_eleitores), 1, arq_eleitores_ce);
        if(verificar_titulo == eleitor_ce.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_ce)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_ce);

    return verificar_titulo;
}

long int verificacao_titulo_es(){
    //ES
    FILE *arq_eleitores_es;
    arq_eleitores_es = fopen("arq_eleitores_es.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_es, sizeof(struct info_eleitores), 1, arq_eleitores_es);
        if(verificar_titulo == eleitor_es.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_es)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_es);

    return verificar_titulo;
}

long int verificacao_titulo_go(){
    //GO
    FILE *arq_eleitores_go;
    arq_eleitores_go = fopen("arq_eleitores_go.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_go, sizeof(struct info_eleitores), 1, arq_eleitores_go);
        if(verificar_titulo == eleitor_go.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_go)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_go);

    return verificar_titulo;
}

long int verificacao_titulo_ma(){
    //MA
    FILE *arq_eleitores_ma;
    arq_eleitores_ma = fopen("arq_eleitores_ma.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_ma, sizeof(struct info_eleitores), 1, arq_eleitores_ma);
        if(verificar_titulo == eleitor_ma.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_ma)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_ma);

    return verificar_titulo;
}

long int verificacao_titulo_mt(){
    //MT
    FILE *arq_eleitores_mt;
    arq_eleitores_mt = fopen("arq_eleitores_mt.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_mt, sizeof(struct info_eleitores), 1, arq_eleitores_mt);
        if(verificar_titulo == eleitor_mt.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_mt)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_mt);

    return verificar_titulo;
}

long int verificacao_titulo_ms(){
    //MS
    FILE *arq_eleitores_ms;
    arq_eleitores_ms = fopen("arq_eleitores_ms.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_ms, sizeof(struct info_eleitores), 1, arq_eleitores_ms);
        if(verificar_titulo == eleitor_ms.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_ms)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_ms);

    return verificar_titulo;
}

long int verificacao_titulo_mg(){
    //MG
    FILE *arq_eleitores_mg;
    arq_eleitores_mg = fopen("arq_eleitores_mg.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_mg, sizeof(struct info_eleitores), 1, arq_eleitores_mg);
        if(verificar_titulo == eleitor_mg.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_mg)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_mg);

    return verificar_titulo;
}

long int verificacao_titulo_pa(){
    //PA
    FILE *arq_eleitores_pa;
    arq_eleitores_pa = fopen("arq_eleitores_pa.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_pa, sizeof(struct info_eleitores), 1, arq_eleitores_pa);
        if(verificar_titulo == eleitor_pa.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_pa)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_pa);

    return verificar_titulo;
}

long int verificacao_titulo_pb(){
    //PB
    FILE *arq_eleitores_pb;
    arq_eleitores_pb = fopen("arq_eleitores_pb.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_pb, sizeof(struct info_eleitores), 1, arq_eleitores_pb);
        if(verificar_titulo == eleitor_pb.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_pb)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_pb);

    return verificar_titulo;
}

long int verificacao_titulo_pr(){
    //PR
    FILE *arq_eleitores_pr;
    arq_eleitores_pr = fopen("arq_eleitores_pr.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_pr, sizeof(struct info_eleitores), 1, arq_eleitores_pr);
        if(verificar_titulo == eleitor_pr.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_pr)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_pr);

    return verificar_titulo;
}

long int verificacao_titulo_pe(){
    //PE
    FILE *arq_eleitores_pe;
    arq_eleitores_pe = fopen("arq_eleitores_pe.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_pe, sizeof(struct info_eleitores), 1, arq_eleitores_pe);
        if(verificar_titulo == eleitor_pe.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_pe)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_pe);

    return verificar_titulo;
}

long int verificacao_titulo_pi(){
    //PI
    FILE *arq_eleitores_pi;
    arq_eleitores_pi = fopen("arq_eleitores_pi.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_pi, sizeof(struct info_eleitores), 1, arq_eleitores_pi);
        if(verificar_titulo == eleitor_pi.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_pi)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_pi);

    return verificar_titulo;
}

long int verificacao_titulo_rj(){
    //RJ
    FILE *arq_eleitores_rj;
    arq_eleitores_rj = fopen("arq_eleitores_rj.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_rj, sizeof(struct info_eleitores), 1, arq_eleitores_rj);
        if(verificar_titulo == eleitor_rj.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_rj)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_rj);

    return verificar_titulo;
}

long int verificacao_titulo_rn(){
    //RN
    FILE *arq_eleitores_rn;
    arq_eleitores_rn = fopen("arq_eleitores_rn.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_rn, sizeof(struct info_eleitores), 1, arq_eleitores_rn);
        if(verificar_titulo == eleitor_rn.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_rn)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_rn);

    return verificar_titulo;
}

long int verificacao_titulo_rs(){
    //RS
    FILE *arq_eleitores_rs;
    arq_eleitores_rs = fopen("arq_eleitores_rs.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_rs, sizeof(struct info_eleitores), 1, arq_eleitores_rs);
        if(verificar_titulo == eleitor_rs.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_rs)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_rs);

    return verificar_titulo;
}

long int verificacao_titulo_ro(){
    //RO
    FILE *arq_eleitores_ro;
    arq_eleitores_ro = fopen("arq_eleitores_ro.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_ro, sizeof(struct info_eleitores), 1, arq_eleitores_ro);
        if(verificar_titulo == eleitor_ro.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_ro)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_ro);

    return verificar_titulo;
}

long int verificacao_titulo_rr(){
    //RR
    FILE *arq_eleitores_rr;
    arq_eleitores_rr = fopen("arq_eleitores_rr.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_rr, sizeof(struct info_eleitores), 1, arq_eleitores_rr);
        if(verificar_titulo == eleitor_rr.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_rr)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_rr);

    return verificar_titulo;
}

long int verificacao_titulo_sc(){
    //SC
    FILE *arq_eleitores_sc;
    arq_eleitores_sc = fopen("arq_eleitores_sc.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_sc, sizeof(struct info_eleitores), 1, arq_eleitores_sc);
        if(verificar_titulo == eleitor_sc.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_sc)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_sc);

    return verificar_titulo;
}

long int verificacao_titulo_sp(){
    //SP
    FILE *arq_eleitores_sp;
    arq_eleitores_sp = fopen("arq_eleitores_sp.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_sp, sizeof(struct info_eleitores), 1, arq_eleitores_sp);
        if(verificar_titulo == eleitor_sp.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_sp)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_sp);

    return verificar_titulo;
}

long int verificacao_titulo_se(){
    //SE
    FILE *arq_eleitores_se;
    arq_eleitores_se = fopen("arq_eleitores_se.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_se, sizeof(struct info_eleitores), 1, arq_eleitores_se);
        if(verificar_titulo == eleitor_se.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_se)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_se);

    return verificar_titulo;
}

long int verificacao_titulo_to(){
    //TO
    FILE *arq_eleitores_to;
    arq_eleitores_to = fopen("arq_eleitores_to.bin","rb");

    repetir_titulo = 0;

    do {
        fread(&eleitor_to, sizeof(struct info_eleitores), 1, arq_eleitores_to);
        if(verificar_titulo == eleitor_to.titulo_eleitor){
            printf("\nTITULO JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_titulo);
            repetir_titulo = 1;
        }
    } while (!feof(arq_eleitores_to)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_to);

    return verificar_titulo;
}







// funcoes para verificacao do RG

long int verificacao_rg_ac(){
    //AC
    FILE *arq_eleitores_ac;
    arq_eleitores_ac = fopen("arq_eleitores_ac.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_ac, sizeof(struct info_eleitores), 1, arq_eleitores_ac);
        if(verificar_rg == eleitor_ac.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_ac)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_ac);

    return verificar_rg;

}

long int verificacao_rg_al(){
    //AL
    FILE *arq_eleitores_al;
    arq_eleitores_al = fopen("arq_eleitores_al.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_al, sizeof(struct info_eleitores), 1, arq_eleitores_al);
        if(verificar_rg == eleitor_al.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_al)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_al);

    return verificar_rg;

}

long int verificacao_rg_ap(){
    //AP
    FILE *arq_eleitores_ap;
    arq_eleitores_ap = fopen("arq_eleitores_ap.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_ap, sizeof(struct info_eleitores), 1, arq_eleitores_ap);
        if(verificar_rg == eleitor_ap.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_ap)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_ap);

    return verificar_rg;

}

long int verificacao_rg_am(){
    //AM
    FILE *arq_eleitores_am;
    arq_eleitores_am = fopen("arq_eleitores_am.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_am, sizeof(struct info_eleitores), 1, arq_eleitores_am);
        if(verificar_rg == eleitor_am.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_am)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_am);

    return verificar_rg;

}

long int verificacao_rg_ba(){
    //BA
    FILE *arq_eleitores_ba;
    arq_eleitores_ba = fopen("arq_eleitores_ba.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_ba, sizeof(struct info_eleitores), 1, arq_eleitores_ba);
        if(verificar_rg == eleitor_ba.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_ba)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_ba);

    return verificar_rg;

}

long int verificacao_rg_ce(){
    //CE
    FILE *arq_eleitores_ce;
    arq_eleitores_ce = fopen("arq_eleitores_ce.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_ce, sizeof(struct info_eleitores), 1, arq_eleitores_ce);
        if(verificar_rg == eleitor_ce.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_ce)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_ce);

    return verificar_rg;

}

long int verificacao_rg_es(){
    //ES
    FILE *arq_eleitores_es;
    arq_eleitores_es = fopen("arq_eleitores_es.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_es, sizeof(struct info_eleitores), 1, arq_eleitores_es);
        if(verificar_rg == eleitor_es.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_es)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_es);

    return verificar_rg;

}

long int verificacao_rg_go(){
    //GO
    FILE *arq_eleitores_go;
    arq_eleitores_go = fopen("arq_eleitores_go.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_go, sizeof(struct info_eleitores), 1, arq_eleitores_go);
        if(verificar_rg == eleitor_go.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_go)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_go);

    return verificar_rg;

}

long int verificacao_rg_ma(){
    //MA
    FILE *arq_eleitores_ma;
    arq_eleitores_ma = fopen("arq_eleitores_ma.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_ma, sizeof(struct info_eleitores), 1, arq_eleitores_ma);
        if(verificar_rg == eleitor_ma.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_ma)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_ma);

    return verificar_rg;

}

long int verificacao_rg_mt(){
    //MT
    FILE *arq_eleitores_mt;
    arq_eleitores_mt = fopen("arq_eleitores_mt.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_mt, sizeof(struct info_eleitores), 1, arq_eleitores_mt);
        if(verificar_rg == eleitor_mt.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_mt)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_mt);

    return verificar_rg;

}

long int verificacao_rg_ms(){
    //MS
    FILE *arq_eleitores_ms;
    arq_eleitores_ms = fopen("arq_eleitores_ms.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_ms, sizeof(struct info_eleitores), 1, arq_eleitores_ms);
        if(verificar_rg == eleitor_ms.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_ms)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_ms);

    return verificar_rg;

}

long int verificacao_rg_mg(){
    //MG
    FILE *arq_eleitores_mg;
    arq_eleitores_mg = fopen("arq_eleitores_mg.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_mg, sizeof(struct info_eleitores), 1, arq_eleitores_mg);
        if(verificar_rg == eleitor_mg.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_mg)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_mg);

    return verificar_rg;

}

long int verificacao_rg_pa(){
    //PA
    FILE *arq_eleitores_pa;
    arq_eleitores_pa = fopen("arq_eleitores_pa.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_pa, sizeof(struct info_eleitores), 1, arq_eleitores_pa);
        if(verificar_rg == eleitor_pa.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_pa)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_pa);

    return verificar_rg;

}

long int verificacao_rg_pb(){
    //PB
    FILE *arq_eleitores_pb;
    arq_eleitores_pb = fopen("arq_eleitores_pb.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_pb, sizeof(struct info_eleitores), 1, arq_eleitores_pb);
        if(verificar_rg == eleitor_pb.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_pb)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_pb);

    return verificar_rg;

}

long int verificacao_rg_pr(){
    //PR
    FILE *arq_eleitores_pr;
    arq_eleitores_pr = fopen("arq_eleitores_pr.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_pr, sizeof(struct info_eleitores), 1, arq_eleitores_pr);
        if(verificar_rg == eleitor_pr.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_pr)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_pr);

    return verificar_rg;

}

long int verificacao_rg_pe(){
    //PE
    FILE *arq_eleitores_pe;
    arq_eleitores_pe = fopen("arq_eleitores_pe.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_pe, sizeof(struct info_eleitores), 1, arq_eleitores_pe);
        if(verificar_rg == eleitor_pe.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_pe)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_pe);

    return verificar_rg;

}

long int verificacao_rg_pi(){
    //PI
    FILE *arq_eleitores_pi;
    arq_eleitores_pi = fopen("arq_eleitores_pi.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_pi, sizeof(struct info_eleitores), 1, arq_eleitores_pi);
        if(verificar_rg == eleitor_pi.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_pi)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_pi);

    return verificar_rg;

}

long int verificacao_rg_rj(){
    //RJ
    FILE *arq_eleitores_rj;
    arq_eleitores_rj = fopen("arq_eleitores_rj.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_rj, sizeof(struct info_eleitores), 1, arq_eleitores_rj);
        if(verificar_rg == eleitor_rj.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_rj)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_rj);

    return verificar_rg;

}

long int verificacao_rg_rn(){
    //RN
    FILE *arq_eleitores_rn;
    arq_eleitores_rn = fopen("arq_eleitores_rn.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_rn, sizeof(struct info_eleitores), 1, arq_eleitores_rn);
        if(verificar_rg == eleitor_rn.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_rn)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_rn);

    return verificar_rg;

}

long int verificacao_rg_rs(){
    //RS
    FILE *arq_eleitores_rs;
    arq_eleitores_rs = fopen("arq_eleitores_rs.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_rs, sizeof(struct info_eleitores), 1, arq_eleitores_rs);
        if(verificar_rg == eleitor_rs.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_rs)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_rs);

    return verificar_rg;

}

long int verificacao_rg_ro(){
    //RO
    FILE *arq_eleitores_ro;
    arq_eleitores_ro = fopen("arq_eleitores_ro.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_ro, sizeof(struct info_eleitores), 1, arq_eleitores_ro);
        if(verificar_rg == eleitor_ro.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_ro)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_ro);

    return verificar_rg;

}

long int verificacao_rg_rr(){
    //RR
    FILE *arq_eleitores_rr;
    arq_eleitores_rr = fopen("arq_eleitores_rr.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_rr, sizeof(struct info_eleitores), 1, arq_eleitores_rr);
        if(verificar_rg == eleitor_rr.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_rr)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_rr);

    return verificar_rg;

}

long int verificacao_rg_sc(){
    //SC
    FILE *arq_eleitores_sc;
    arq_eleitores_sc = fopen("arq_eleitores_sc.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_sc, sizeof(struct info_eleitores), 1, arq_eleitores_sc);
        if(verificar_rg == eleitor_sc.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_sc)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_sc);

    return verificar_rg;

}

long int verificacao_rg_sp(){
    //SP
    FILE *arq_eleitores_sp;
    arq_eleitores_sp = fopen("arq_eleitores_sp.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_sp, sizeof(struct info_eleitores), 1, arq_eleitores_sp);
        if(verificar_rg == eleitor_sp.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_sp)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_sp);

    return verificar_rg;

}

long int verificacao_rg_se(){
    //SE
    FILE *arq_eleitores_se;
    arq_eleitores_se = fopen("arq_eleitores_se.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_se, sizeof(struct info_eleitores), 1, arq_eleitores_se);
        if(verificar_rg == eleitor_se.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_se)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_se);

    return verificar_rg;

}

long int verificacao_rg_to(){
    //TO
    FILE *arq_eleitores_to;
    arq_eleitores_to = fopen("arq_eleitores_to.bin","rb");

    repetir_rg = 0;

    do {
        fread(&eleitor_to, sizeof(struct info_eleitores), 1, arq_eleitores_to);
        if(verificar_rg == eleitor_to.rg_eleitor){
            printf("\nRG JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_rg);
            repetir_rg = 1;
        }
    } while (!feof(arq_eleitores_to)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_to);

    return verificar_rg;

}






// funcoes para verificacao do CPF
long int verificacao_cpf_ac(){
    //AC
    FILE *arq_eleitores_ac;
    arq_eleitores_ac = fopen("arq_eleitores_ac.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_ac, sizeof(struct info_eleitores), 1, arq_eleitores_ac);
        if(verificar_cpf == eleitor_ac.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_ac)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_ac);

    return verificar_cpf;

}

long int verificacao_cpf_al(){

    //AL
    FILE *arq_eleitores_al;
    arq_eleitores_al = fopen("arq_eleitores_al.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_al, sizeof(struct info_eleitores), 1, arq_eleitores_al);
        if(verificar_cpf == eleitor_al.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_al)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_al);

    return verificar_cpf;

}

long int verificacao_cpf_ap(){

    //AP
    FILE *arq_eleitores_ap;
    arq_eleitores_ap = fopen("arq_eleitores_ap.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_ap, sizeof(struct info_eleitores), 1, arq_eleitores_ap);
        if(verificar_cpf == eleitor_ap.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_ap)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_ap);

    return verificar_cpf;

}

long int verificacao_cpf_am(){

    //AM
    FILE *arq_eleitores_am;
    arq_eleitores_am = fopen("arq_eleitores_am.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_am, sizeof(struct info_eleitores), 1, arq_eleitores_am);
        if(verificar_cpf == eleitor_am.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_am)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_am);

    return verificar_cpf;

}

long int verificacao_cpf_ba(){

    //BA
    FILE *arq_eleitores_ba;
    arq_eleitores_ba = fopen("arq_eleitores_ba.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_ba, sizeof(struct info_eleitores), 1, arq_eleitores_ba);
        if(verificar_cpf == eleitor_ba.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_ba)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_ba);

    return verificar_cpf;

}

long int verificacao_cpf_ce(){

    //CE
    FILE *arq_eleitores_ce;
    arq_eleitores_ce = fopen("arq_eleitores_ce.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_ce, sizeof(struct info_eleitores), 1, arq_eleitores_ce);
        if(verificar_cpf == eleitor_ce.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_ce)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_ce);

    return verificar_cpf;

}

long int verificacao_cpf_es(){

    //ES
    FILE *arq_eleitores_es;
    arq_eleitores_es = fopen("arq_eleitores_es.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_es, sizeof(struct info_eleitores), 1, arq_eleitores_es);
        if(verificar_cpf == eleitor_es.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_es)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_es);

    return verificar_cpf;

}

long int verificacao_cpf_go(){

    //GO
    FILE *arq_eleitores_go;
    arq_eleitores_go = fopen("arq_eleitores_go.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_go, sizeof(struct info_eleitores), 1, arq_eleitores_go);
        if(verificar_cpf == eleitor_go.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_go)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_go);

    return verificar_cpf;

}

long int verificacao_cpf_ma(){

    //MA
    FILE *arq_eleitores_ma;
    arq_eleitores_ma = fopen("arq_eleitores_ma.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_ma, sizeof(struct info_eleitores), 1, arq_eleitores_ma);
        if(verificar_cpf == eleitor_ma.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_ma)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_ma);

    return verificar_cpf;

}

long int verificacao_cpf_mt(){

    //MT
    FILE *arq_eleitores_mt;
    arq_eleitores_mt = fopen("arq_eleitores_mt.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_mt, sizeof(struct info_eleitores), 1, arq_eleitores_mt);
        if(verificar_cpf == eleitor_mt.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_mt)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_mt);

    return verificar_cpf;

}

long int verificacao_cpf_ms(){

    //MS
    FILE *arq_eleitores_ms;
    arq_eleitores_ms = fopen("arq_eleitores_ms.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_ms, sizeof(struct info_eleitores), 1, arq_eleitores_ms);
        if(verificar_cpf == eleitor_ms.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_ms)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_ms);

    return verificar_cpf;

}

long int verificacao_cpf_mg(){

    //MG
    FILE *arq_eleitores_mg;
    arq_eleitores_mg = fopen("arq_eleitores_mg.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_mg, sizeof(struct info_eleitores), 1, arq_eleitores_mg);
        if(verificar_cpf == eleitor_mg.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_mg)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_mg);

    return verificar_cpf;

}

long int verificacao_cpf_pa(){

    //PA
    FILE *arq_eleitores_pa;
    arq_eleitores_pa = fopen("arq_eleitores_pa.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_pa, sizeof(struct info_eleitores), 1, arq_eleitores_pa);
        if(verificar_cpf == eleitor_pa.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_pa)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_pa);

    return verificar_cpf;

}

long int verificacao_cpf_pb(){

    //PB
    FILE *arq_eleitores_pb;
    arq_eleitores_pb = fopen("arq_eleitores_pb.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_pb, sizeof(struct info_eleitores), 1, arq_eleitores_pb);
        if(verificar_cpf == eleitor_pb.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_pb)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_pb);

    return verificar_cpf;

}

long int verificacao_cpf_pr(){

    //PR
    FILE *arq_eleitores_pr;
    arq_eleitores_pr = fopen("arq_eleitores_pr.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_pr, sizeof(struct info_eleitores), 1, arq_eleitores_pr);
        if(verificar_cpf == eleitor_pr.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_pr)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_pr);

    return verificar_cpf;

}

long int verificacao_cpf_pe(){

    //PE
    FILE *arq_eleitores_pe;
    arq_eleitores_pe = fopen("arq_eleitores_pe.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_pe, sizeof(struct info_eleitores), 1, arq_eleitores_pe);
        if(verificar_cpf == eleitor_pe.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_pe)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_pe);

    return verificar_cpf;

}

long int verificacao_cpf_pi(){

    //PI
    FILE *arq_eleitores_pi;
    arq_eleitores_pi = fopen("arq_eleitores_pi.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_pi, sizeof(struct info_eleitores), 1, arq_eleitores_pi);
        if(verificar_cpf == eleitor_pi.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_pi)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_pi);

    return verificar_cpf;

}

long int verificacao_cpf_rj(){

    //RJ
    FILE *arq_eleitores_rj;
    arq_eleitores_rj = fopen("arq_eleitores_rj.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_rj, sizeof(struct info_eleitores), 1, arq_eleitores_rj);
        if(verificar_cpf == eleitor_rj.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_rj)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_rj);

    return verificar_cpf;

}

long int verificacao_cpf_rn(){

    //RN
    FILE *arq_eleitores_rn;
    arq_eleitores_rn = fopen("arq_eleitores_rn.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_rn, sizeof(struct info_eleitores), 1, arq_eleitores_rn);
        if(verificar_cpf == eleitor_rn.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_rn)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_rn);

    return verificar_cpf;

}

long int verificacao_cpf_rs(){

    //RS
    FILE *arq_eleitores_rs;
    arq_eleitores_rs = fopen("arq_eleitores_rs.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_rs, sizeof(struct info_eleitores), 1, arq_eleitores_rs);
        if(verificar_cpf == eleitor_rs.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_rs)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_rs);

    return verificar_cpf;

}

long int verificacao_cpf_ro(){

    //RO
    FILE *arq_eleitores_ro;
    arq_eleitores_ro = fopen("arq_eleitores_ro.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_ro, sizeof(struct info_eleitores), 1, arq_eleitores_ro);
        if(verificar_cpf == eleitor_ro.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_ro)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_ro);

    return verificar_cpf;

}

long int verificacao_cpf_rr(){

    //RR
    FILE *arq_eleitores_rr;
    arq_eleitores_rr = fopen("arq_eleitores_rr.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_rr, sizeof(struct info_eleitores), 1, arq_eleitores_rr);
        if(verificar_cpf == eleitor_rr.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_rr)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_rr);

    return verificar_cpf;

}

long int verificacao_cpf_sc(){

    //SC
    FILE *arq_eleitores_sc;
    arq_eleitores_sc = fopen("arq_eleitores_sc.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_sc, sizeof(struct info_eleitores), 1, arq_eleitores_sc);
        if(verificar_cpf == eleitor_sc.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_sc)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_sc);

    return verificar_cpf;

}

long int verificacao_cpf_sp(){

    //SP
    FILE *arq_eleitores_sp;
    arq_eleitores_sp = fopen("arq_eleitores_sp.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_sp, sizeof(struct info_eleitores), 1, arq_eleitores_sp);
        if(verificar_cpf == eleitor_sp.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_sp)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_sp);

    return verificar_cpf;

}

long int verificacao_cpf_se(){

    //SE
    FILE *arq_eleitores_se;
    arq_eleitores_se = fopen("arq_eleitores_se.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_se, sizeof(struct info_eleitores), 1, arq_eleitores_se);
        if(verificar_cpf == eleitor_se.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_se)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_se);

    return verificar_cpf;

}

long int verificacao_cpf_to(){

    //TO
    FILE *arq_eleitores_to;
    arq_eleitores_to = fopen("arq_eleitores_to.bin","rb");

    repetir_cpf = 0;

    do {
        fread(&eleitor_to, sizeof(struct info_eleitores), 1, arq_eleitores_to);
        if(verificar_cpf == eleitor_to.cpf_eleitor){
            printf("\nCPF JA EXISTE, DIGITE NOVAMENTE: ");
            scanf("%ld",&verificar_cpf);
            repetir_cpf = 1;
        }
    } while (!feof(arq_eleitores_to)); // enquanto não chegar ao final do arquivo

    fclose(arq_eleitores_to);

    return verificar_cpf;

}


// Funcao princial para o cadastro dos eleitores
void func_cad_eleitores(){

    char cadEleitores[3]; // ira ficar amarzenada a UF que o usuario digitar
    int tamStr,i;
    int eleitores_tamanho;
    int parar = 0;
    int verificar = 0;



    estados_aparecer();

    getchar();
    printf("\nDigite a UF do Estado para o cadastro do eleitor: ");
    fgets(cadEleitores,3,stdin);

    // Converte minuscula em maiscula
    tamStr = strlen(cadEleitores);
    for(i=0; i < tamStr; i++)
    {                            // Converte cada caracter de Str
        cadEleitores[i] =toupper(cadEleitores[i]);  // para maiuscula
    }

    /*
     * Para cadastrar um eleitor, primeiramente é necessário ter um Municipio cadastrado.
     * Logo em seguida, tera que ter uma zona eleitoral cadastrado.
     * Logo em seguida, tera que ter uma seção eleitoral cadastrado.
     * A partir disso, um eleitor poderá ser vinculado à uma seção eleitoral.
     * OBS: SO PODERA SER CADASTRADO UM ELEITOR COM UM CPF EM CADA SECAO, ALÉM DE QUE
     * NAO PODERÁ OCORRER DE TER DOIS ELEITORES CADASTRADOS EM ESTADOS/ZONA/SECAO DIFERENTES,
     * ELES TERÃO QUE SER VIRCULADOS À UMA ÚNICA SEÇÃO.
     */

    if(!(strcmp(cadEleitores,"AC"))){

        FILE *arq_zona_ac;
        FILE *arq_secao_ac;
        FILE *arq_eleitores_ac;
        arq_zona_ac = fopen("arq_zona_ac.bin","rb"); // Abre o arquivo
        arq_secao_ac = fopen("arq_secao_ac.bin","rb");


        if(arq_zona_ac == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_ac == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_ac.num_zona_eleitor);
            while(fread(&ac_zona, sizeof(struct info_zona),1,arq_zona_ac)){
                if(ac_zona.numero_zona == eleitor_ac.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_ac.cod_secao_eleitor);
                    while(fread(&ac_secao, sizeof(struct info_secao),1,arq_secao_ac)){
                        if(ac_secao.cod_local_secao == eleitor_ac.cod_secao_eleitor){

                            arq_eleitores_ac = fopen("arq_eleitores_ac.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_ac.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_ac != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_ac();
                                }while(repetir_titulo == 1);
                            }



                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_ac != NULL){
                                do{
                                    verificar_rg = verificacao_rg_ac();
                                }while(repetir_rg == 1);
                            }

                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_ac != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_ac();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_ac.cpf_eleitor = verificar_cpf;
                            eleitor_ac.rg_eleitor = verificar_rg;
                            eleitor_ac.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_ac);




                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_ac.endereco_eleitor,100,stdin);

                            arq_eleitores_ac = fopen("arq_eleitores_ac.bin","ab");
                            fwrite(&eleitor_ac, sizeof(struct info_eleitores),1,arq_eleitores_ac);
                            fclose(arq_eleitores_ac);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",ac_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_ac.nome_eleitor);
                            printf("\nRG: %ld",eleitor_ac.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_ac.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_ac.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_ac);
        fclose(arq_secao_ac);
    }

    else if(!(strcmp(cadEleitores,"AL"))){

        FILE *arq_zona_al;
        FILE *arq_secao_al;
        FILE *arq_eleitores_al;
        arq_zona_al = fopen("arq_zona_al.bin","rb"); // Abre o arquivo
        arq_secao_al = fopen("arq_secao_al.bin","rb");


        if(arq_zona_al == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_al == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_al.num_zona_eleitor);
            while(fread(&al_zona, sizeof(struct info_zona),1,arq_zona_al)){
                if(al_zona.numero_zona == eleitor_al.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_al.cod_secao_eleitor);
                    while(fread(&al_secao, sizeof(struct info_secao),1,arq_secao_al)){
                        if(al_secao.cod_local_secao == eleitor_al.cod_secao_eleitor){

                            arq_eleitores_al = fopen("arq_eleitores_al.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_al.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_al != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_al();
                                }while(repetir_titulo == 1);
                            }

                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_al != NULL){
                                do{
                                    verificar_rg = verificacao_rg_al();
                                }while(repetir_rg == 1);
                            }


                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_al != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_al(verificar_cpf);
                                }while(repetir_cpf == 1);
                            }

                            eleitor_al.cpf_eleitor = verificar_cpf;
                            eleitor_al.rg_eleitor = verificar_rg;
                            eleitor_al.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_al);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_al.endereco_eleitor,100,stdin);

                            arq_eleitores_al = fopen("arq_eleitores_al.bin","ab");
                            fwrite(&eleitor_al, sizeof(struct info_eleitores),1,arq_eleitores_al);
                            fclose(arq_eleitores_al);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",al_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_al.nome_eleitor);
                            printf("\nRG: %ld",eleitor_al.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_al.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_al.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_al);
        fclose(arq_secao_al);
    }

    else if(!(strcmp(cadEleitores,"AP"))){

        FILE *arq_zona_ap;
        FILE *arq_secao_ap;
        FILE *arq_eleitores_ap;
        arq_zona_ap = fopen("arq_zona_ap.bin","rb"); // Abre o arquivo
        arq_secao_ap = fopen("arq_secao_ap.bin","rb");


        if(arq_zona_ap == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_ap == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_ap.num_zona_eleitor);
            while(fread(&ap_zona, sizeof(struct info_zona),1,arq_zona_ap)){
                if(ap_zona.numero_zona == eleitor_ap.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_ap.cod_secao_eleitor);
                    while(fread(&ap_secao, sizeof(struct info_secao),1,arq_secao_ap)){
                        if(ap_secao.cod_local_secao == eleitor_ap.cod_secao_eleitor){

                            arq_eleitores_ap = fopen("arq_eleitores_ap.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_ap.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_ap != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_ap();
                                }while(repetir_titulo == 1);
                            }

                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo RG
                            if(arq_eleitores_ap != NULL){
                                do{
                                    verificar_rg = verificacao_rg_ap();
                                }while(repetir_rg == 1);
                            }


                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_ap != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_ap();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_ap.cpf_eleitor = verificar_cpf;
                            eleitor_ap.rg_eleitor = verificar_rg;
                            eleitor_ap.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_ap);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_ap.endereco_eleitor,100,stdin);

                            arq_eleitores_ap = fopen("arq_eleitores_ap.bin","ab");
                            fwrite(&eleitor_ap, sizeof(struct info_eleitores),1,arq_eleitores_ap);
                            fclose(arq_eleitores_ap);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",ap_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_ap.nome_eleitor);
                            printf("\nRG: %ld",eleitor_ap.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_ap.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_ap.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_ap);
        fclose(arq_secao_ap);
    }

    else if(!(strcmp(cadEleitores,"AM"))){

        FILE *arq_zona_am;
        FILE *arq_secao_am;
        FILE *arq_eleitores_am;
        arq_zona_am = fopen("arq_zona_am.bin","rb"); // Abre o arquivo
        arq_secao_am = fopen("arq_secao_am.bin","rb");


        if(arq_zona_am == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_am == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_am.num_zona_eleitor);
            while(fread(&am_zona, sizeof(struct info_zona),1,arq_zona_am)){
                if(am_zona.numero_zona == eleitor_am.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_am.cod_secao_eleitor);
                    while(fread(&am_secao, sizeof(struct info_secao),1,arq_secao_am)){
                        if(am_secao.cod_local_secao == eleitor_am.cod_secao_eleitor){

                            arq_eleitores_am = fopen("arq_eleitores_am.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_am.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_am != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_am();
                                }while(repetir_titulo == 1);
                            }

                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo RG
                            if(arq_eleitores_am != NULL){
                                do{
                                    verificar_rg = verificacao_rg_am();
                                }while(repetir_rg == 1);
                            }

                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_am != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_am();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_am.cpf_eleitor = verificar_cpf;
                            eleitor_am.rg_eleitor = verificar_rg;
                            eleitor_am.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_am);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_am.endereco_eleitor,100,stdin);

                            arq_eleitores_am = fopen("arq_eleitores_am.bin","ab");
                            fwrite(&eleitor_am, sizeof(struct info_eleitores),1,arq_eleitores_am);
                            fclose(arq_eleitores_am);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",am_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_am.nome_eleitor);
                            printf("\nRG: %ld",eleitor_am.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_am.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_am.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_am);
        fclose(arq_secao_am);
    }

    else if(!(strcmp(cadEleitores,"BA"))){

        FILE *arq_zona_ba;
        FILE *arq_secao_ba;
        FILE *arq_eleitores_ba;
        arq_zona_ba = fopen("arq_zona_ba.bin","rb"); // Abre o arquivo
        arq_secao_ba = fopen("arq_secao_ba.bin","rb");


        if(arq_zona_ba == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_ba == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_ba.num_zona_eleitor);
            while(fread(&ba_zona, sizeof(struct info_zona),1,arq_zona_ba)){
                if(ba_zona.numero_zona == eleitor_ba.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_ba.cod_secao_eleitor);
                    while(fread(&ba_secao, sizeof(struct info_secao),1,arq_secao_ba)){
                        if(ba_secao.cod_local_secao == eleitor_ba.cod_secao_eleitor){

                            arq_eleitores_ba = fopen("arq_eleitores_ba.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_ba.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_ba != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_ba();
                                }while(repetir_titulo == 1);
                            }

                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_ba != NULL){
                                do{
                                    verificar_rg = verificacao_rg_ba();
                                }while(repetir_rg == 1);
                            }

                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_ba != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_ba();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_ba.cpf_eleitor = verificar_cpf;
                            eleitor_ba.rg_eleitor = verificar_rg;
                            eleitor_ba.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_ba);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_ba.endereco_eleitor,100,stdin);

                            arq_eleitores_ba = fopen("arq_eleitores_ba.bin","ab");
                            fwrite(&eleitor_ba, sizeof(struct info_eleitores),1,arq_eleitores_ba);
                            fclose(arq_eleitores_ba);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",ba_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_ba.nome_eleitor);
                            printf("\nRG: %ld",eleitor_ba.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_ba.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_ba.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_ba);
        fclose(arq_secao_ba);
    }

    else if(!(strcmp(cadEleitores,"CE"))){

        FILE *arq_zona_ce;
        FILE *arq_secao_ce;
        FILE *arq_eleitores_ce;
        arq_zona_ce = fopen("arq_zona_ce.bin","rb"); // Abre o arquivo
        arq_secao_ce = fopen("arq_secao_ce.bin","rb");


        if(arq_zona_ce == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_ce == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_ce.num_zona_eleitor);
            while(fread(&ce_zona, sizeof(struct info_zona),1,arq_zona_ce)){
                if(ce_zona.numero_zona == eleitor_ce.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_ce.cod_secao_eleitor);
                    while(fread(&ce_secao, sizeof(struct info_secao),1,arq_secao_ce)){
                        if(ce_secao.cod_local_secao == eleitor_ce.cod_secao_eleitor){

                            arq_eleitores_ce = fopen("arq_eleitores_ce.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_ce.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_ce != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_ce();
                                }while(repetir_titulo == 1);
                            }

                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo RG
                            if(arq_eleitores_ce != NULL){
                                do{
                                    verificar_rg = verificacao_rg_ce();
                                }while(repetir_rg == 1);
                            }

                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_ce != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_ce();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_ce.cpf_eleitor = verificar_cpf;
                            eleitor_ce.rg_eleitor = verificar_rg;
                            eleitor_ce.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_ce);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_ce.endereco_eleitor,100,stdin);

                            arq_eleitores_ce = fopen("arq_eleitores_ce.bin","ab");
                            fwrite(&eleitor_ce, sizeof(struct info_eleitores),1,arq_eleitores_ce);
                            fclose(arq_eleitores_ce);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",ce_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_ce.nome_eleitor);
                            printf("\nRG: %ld",eleitor_ce.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_ce.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_ce.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_ce);
        fclose(arq_secao_ce);
    }

    else if(!(strcmp(cadEleitores,"ES"))){

        FILE *arq_zona_es;
        FILE *arq_secao_es;
        FILE *arq_eleitores_es;
        arq_zona_es = fopen("arq_zona_es.bin","rb"); // Abre o arquivo
        arq_secao_es = fopen("arq_secao_es.bin","rb");


        if(arq_zona_es == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_es == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_es.num_zona_eleitor);
            while(fread(&es_zona, sizeof(struct info_zona),1,arq_zona_es)){
                if(es_zona.numero_zona == eleitor_es.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_es.cod_secao_eleitor);
                    while(fread(&es_secao, sizeof(struct info_secao),1,arq_secao_es)){
                        if(es_secao.cod_local_secao == eleitor_es.cod_secao_eleitor){

                            arq_eleitores_es = fopen("arq_eleitores_es.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_es.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_es != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_es();
                                }while(repetir_titulo == 1);
                            }

                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_es != NULL){
                                do{
                                    verificar_rg = verificacao_rg_es();
                                }while(repetir_rg == 1);
                            }

                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo RG
                            if(arq_eleitores_es != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_es();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_es.cpf_eleitor = verificar_cpf;
                            eleitor_es.rg_eleitor = verificar_rg;
                            eleitor_es.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_es);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_es.endereco_eleitor,100,stdin);

                            arq_eleitores_es = fopen("arq_eleitores_es.bin","ab");
                            fwrite(&eleitor_es, sizeof(struct info_eleitores),1,arq_eleitores_es);
                            fclose(arq_eleitores_es);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",es_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_es.nome_eleitor);
                            printf("\nRG: %ld",eleitor_es.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_es.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_es.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_es);
        fclose(arq_secao_es);
    }

    else if(!(strcmp(cadEleitores,"GO"))){

        FILE *arq_zona_go;
        FILE *arq_secao_go;
        FILE *arq_eleitores_go;
        arq_zona_go = fopen("arq_zona_go.bin","rb"); // Abre o arquivo
        arq_secao_go = fopen("arq_secao_go.bin","rb");


        if(arq_zona_go == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_go == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_go.num_zona_eleitor);
            while(fread(&go_zona, sizeof(struct info_zona),1,arq_zona_go)){
                if(go_zona.numero_zona == eleitor_go.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_go.cod_secao_eleitor);
                    while(fread(&go_secao, sizeof(struct info_secao),1,arq_secao_go)){
                        if(go_secao.cod_local_secao == eleitor_go.cod_secao_eleitor){

                            arq_eleitores_go = fopen("arq_eleitores_go.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_go.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_go != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_go();
                                }while(repetir_titulo == 1);
                            }

                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo RG
                            if(arq_eleitores_go != NULL){
                                do{
                                    verificar_rg = verificacao_rg_go();
                                }while(repetir_rg == 1);
                            }

                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_go != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_go();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_go.cpf_eleitor = verificar_cpf;
                            eleitor_go.rg_eleitor = verificar_rg;
                            eleitor_go.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_go);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_go.endereco_eleitor,100,stdin);

                            arq_eleitores_go = fopen("arq_eleitores_go.bin","ab");
                            fwrite(&eleitor_go, sizeof(struct info_eleitores),1,arq_eleitores_go);
                            fclose(arq_eleitores_go);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",go_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_go.nome_eleitor);
                            printf("\nRG: %ld",eleitor_go.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_go.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_go.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_go);
        fclose(arq_secao_go);
    }

    else if(!(strcmp(cadEleitores,"MA"))){

        FILE *arq_zona_ma;
        FILE *arq_secao_ma;
        FILE *arq_eleitores_ma;
        arq_zona_ma = fopen("arq_zona_ma.bin","rb"); // Abre o arquivo
        arq_secao_ma = fopen("arq_secao_ma.bin","rb");


        if(arq_zona_ma == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_ma == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_ma.num_zona_eleitor);
            while(fread(&ma_zona, sizeof(struct info_zona),1,arq_zona_ma)){
                if(ma_zona.numero_zona == eleitor_ma.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_ma.cod_secao_eleitor);
                    while(fread(&ma_secao, sizeof(struct info_secao),1,arq_secao_ma)){
                        if(ma_secao.cod_local_secao == eleitor_ma.cod_secao_eleitor){

                            arq_eleitores_ma = fopen("arq_eleitores_ma.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_ma.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_ma != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_ma();
                                }while(repetir_titulo == 1);
                            }

                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo RG
                            if(arq_eleitores_ma != NULL){
                                do{
                                    verificar_rg = verificacao_rg_ma();
                                }while(repetir_rg == 1);
                            }

                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_ma != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_ma();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_ma.cpf_eleitor = verificar_cpf;
                            eleitor_ma.rg_eleitor = verificar_rg;
                            eleitor_ma.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_ma);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_ma.endereco_eleitor,100,stdin);

                            arq_eleitores_ma = fopen("arq_eleitores_ma.bin","ab");
                            fwrite(&eleitor_ma, sizeof(struct info_eleitores),1,arq_eleitores_ma);
                            fclose(arq_eleitores_ma);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",ma_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_ma.nome_eleitor);
                            printf("\nRG: %ld",eleitor_ma.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_ma.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_ma.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_ma);
        fclose(arq_secao_ma);
    }

    else if(!(strcmp(cadEleitores,"MT"))){

        FILE *arq_zona_mt;
        FILE *arq_secao_mt;
        FILE *arq_eleitores_mt;
        arq_zona_mt = fopen("arq_zona_mt.bin","rb"); // Abre o arquivo
        arq_secao_mt = fopen("arq_secao_mt.bin","rb");


        if(arq_zona_mt == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_mt == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_mt.num_zona_eleitor);
            while(fread(&mt_zona, sizeof(struct info_zona),1,arq_zona_mt)){
                if(mt_zona.numero_zona == eleitor_mt.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_mt.cod_secao_eleitor);
                    while(fread(&mt_secao, sizeof(struct info_secao),1,arq_secao_mt)){
                        if(mt_secao.cod_local_secao == eleitor_mt.cod_secao_eleitor){

                            arq_eleitores_mt = fopen("arq_eleitores_mt.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_mt.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_mt != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_mt();
                                }while(repetir_titulo == 1);
                            }

                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo RG
                            if(arq_eleitores_mt != NULL){
                                do{
                                    verificar_rg = verificacao_rg_mt();
                                }while(repetir_rg == 1);
                            }

                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_mt != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_mt();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_mt.cpf_eleitor = verificar_cpf;
                            eleitor_mt.rg_eleitor = verificar_rg;
                            eleitor_mt.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_mt);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_mt.endereco_eleitor,100,stdin);

                            arq_eleitores_mt = fopen("arq_eleitores_mt.bin","ab");
                            fwrite(&eleitor_mt, sizeof(struct info_eleitores),1,arq_eleitores_mt);
                            fclose(arq_eleitores_mt);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",mt_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_mt.nome_eleitor);
                            printf("\nRG: %ld",eleitor_mt.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_mt.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_mt.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_mt);
        fclose(arq_secao_mt);
    }

    else if(!(strcmp(cadEleitores,"MS"))){

        FILE *arq_zona_ms;
        FILE *arq_secao_ms;
        FILE *arq_eleitores_ms;
        arq_zona_ms = fopen("arq_zona_ms.bin","rb"); // Abre o arquivo
        arq_secao_ms = fopen("arq_secao_ms.bin","rb");


        if(arq_zona_ms == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_ms == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_ms.num_zona_eleitor);
            while(fread(&ms_zona, sizeof(struct info_zona),1,arq_zona_ms)){
                if(ms_zona.numero_zona == eleitor_ms.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_ms.cod_secao_eleitor);
                    while(fread(&ms_secao, sizeof(struct info_secao),1,arq_secao_ms)){
                        if(ms_secao.cod_local_secao == eleitor_ms.cod_secao_eleitor){

                            arq_eleitores_ms = fopen("arq_eleitores_ms.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_ms.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_ms != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_ms();
                                }while(repetir_titulo == 1);
                            }

                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_ms != NULL){
                                do{
                                    verificar_rg = verificacao_rg_ms();
                                }while(repetir_rg == 1);
                            }

                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_ms != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_ms();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_ms.cpf_eleitor = verificar_cpf;
                            eleitor_ms.rg_eleitor = verificar_rg;
                            eleitor_ms.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_ms);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_ms.endereco_eleitor,100,stdin);

                            arq_eleitores_ms = fopen("arq_eleitores_ms.bin","ab");
                            fwrite(&eleitor_ms, sizeof(struct info_eleitores),1,arq_eleitores_ms);
                            fclose(arq_eleitores_ms);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",ms_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_ms.nome_eleitor);
                            printf("\nRG: %ld",eleitor_ms.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_ms.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_ms.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_ms);
        fclose(arq_secao_ms);
    }

    else if(!(strcmp(cadEleitores,"MG"))){

        FILE *arq_zona_mg;
        FILE *arq_secao_mg;
        FILE *arq_eleitores_mg;
        arq_zona_mg = fopen("arq_zona_mg.bin","rb"); // Abre o arquivo
        arq_secao_mg = fopen("arq_secao_mg.bin","rb");


        if(arq_zona_mg == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_mg == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_mg.num_zona_eleitor);
            while(fread(&mg_zona, sizeof(struct info_zona),1,arq_zona_mg)){
                if(mg_zona.numero_zona == eleitor_mg.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_mg.cod_secao_eleitor);
                    while(fread(&mg_secao, sizeof(struct info_secao),1,arq_secao_mg)){
                        if(mg_secao.cod_local_secao == eleitor_mg.cod_secao_eleitor){

                            arq_eleitores_mg = fopen("arq_eleitores_mg.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_mg.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_mg != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_mg();
                                }while(repetir_titulo == 1);
                            }


                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_mg != NULL){
                                do{
                                    verificar_rg = verificacao_rg_mg();
                                }while(repetir_rg == 1);
                            }

                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_mg != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_mg();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_mg.cpf_eleitor = verificar_cpf;
                            eleitor_mg.rg_eleitor = verificar_rg;
                            eleitor_mg.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_mg);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_ms.endereco_eleitor,100,stdin);

                            arq_eleitores_mg = fopen("arq_eleitores_mg.bin","ab");
                            fwrite(&eleitor_mg, sizeof(struct info_eleitores),1,arq_eleitores_mg);
                            fclose(arq_eleitores_mg);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",mg_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_mg.nome_eleitor);
                            printf("\nRG: %ld",eleitor_mg.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_mg.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_mg.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_mg);
        fclose(arq_secao_mg);
    }

    else if(!(strcmp(cadEleitores,"PA"))){

        FILE *arq_zona_pa;
        FILE *arq_secao_pa;
        FILE *arq_eleitores_pa;
        arq_zona_pa = fopen("arq_zona_pa.bin","rb"); // Abre o arquivo
        arq_secao_pa = fopen("arq_secao_pa.bin","rb");


        if(arq_zona_pa == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_pa == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_pa.num_zona_eleitor);
            while(fread(&pa_zona, sizeof(struct info_zona),1,arq_zona_pa)){
                if(pa_zona.numero_zona == eleitor_pa.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_pa.cod_secao_eleitor);
                    while(fread(&pa_secao, sizeof(struct info_secao),1,arq_secao_pa)){
                        if(pa_secao.cod_local_secao == eleitor_pa.cod_secao_eleitor){

                            arq_eleitores_pa = fopen("arq_eleitores_pa.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_pa.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_pa != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_pa();
                                }while(repetir_titulo == 1);
                            }

                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo RG
                            if(arq_eleitores_pa != NULL){
                                do{
                                    verificar_rg = verificacao_rg_pa();
                                }while(repetir_rg == 1);
                            }

                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_pa != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_pa();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_pa.cpf_eleitor = verificar_cpf;
                            eleitor_pa.rg_eleitor = verificar_rg;
                            eleitor_pa.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_pa);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_pa.endereco_eleitor,100,stdin);

                            arq_eleitores_pa = fopen("arq_eleitores_pa.bin","ab");
                            fwrite(&eleitor_pa, sizeof(struct info_eleitores),1,arq_eleitores_pa);
                            fclose(arq_eleitores_pa);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",pa_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_pa.nome_eleitor);
                            printf("\nRG: %ld",eleitor_pa.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_pa.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_pa.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_pa);
        fclose(arq_secao_pa);
    }

    else if(!(strcmp(cadEleitores,"PB"))){

        FILE *arq_zona_pb;
        FILE *arq_secao_pb;
        FILE *arq_eleitores_pb;
        arq_zona_pb = fopen("arq_zona_pb.bin","rb"); // Abre o arquivo
        arq_secao_pb = fopen("arq_secao_pb.bin","rb");


        if(arq_zona_pb == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_pb == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_pb.num_zona_eleitor);
            while(fread(&pb_zona, sizeof(struct info_zona),1,arq_zona_pb)){
                if(pb_zona.numero_zona == eleitor_pb.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_pb.cod_secao_eleitor);
                    while(fread(&pb_secao, sizeof(struct info_secao),1,arq_secao_pb)){
                        if(pb_secao.cod_local_secao == eleitor_pb.cod_secao_eleitor){

                            arq_eleitores_pb = fopen("arq_eleitores_pb.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_pb.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_pb != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_pb();
                                }while(repetir_titulo == 1);
                            }

                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo RG
                            if(arq_eleitores_pb != NULL){
                                do{
                                    verificar_rg = verificacao_rg_pb();
                                }while(repetir_rg == 1);
                            }

                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_pb != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_pb();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_pb.cpf_eleitor = verificar_cpf;
                            eleitor_pb.rg_eleitor = verificar_rg;
                            eleitor_pb.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_pb);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_pb.endereco_eleitor,100,stdin);

                            arq_eleitores_pb = fopen("arq_eleitores_pa.bin","ab");
                            fwrite(&eleitor_pb, sizeof(struct info_eleitores),1,arq_eleitores_pb);
                            fclose(arq_eleitores_pb);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",pb_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_pb.nome_eleitor);
                            printf("\nRG: %ld",eleitor_pb.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_pb.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_pb.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_pb);
        fclose(arq_secao_pb);
    }

    else if(!(strcmp(cadEleitores,"PR"))){

        FILE *arq_zona_pr;
        FILE *arq_secao_pr;
        FILE *arq_eleitores_pr;
        arq_zona_pr = fopen("arq_zona_pr.bin","rb"); // Abre o arquivo
        arq_secao_pr = fopen("arq_secao_pr.bin","rb");


        if(arq_zona_pr == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_pr == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_pr.num_zona_eleitor);
            while(fread(&pr_zona, sizeof(struct info_zona),1,arq_zona_pr)){
                if(pr_zona.numero_zona == eleitor_pr.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_pr.cod_secao_eleitor);
                    while(fread(&pr_secao, sizeof(struct info_secao),1,arq_secao_pr)){
                        if(pr_secao.cod_local_secao == eleitor_pr.cod_secao_eleitor){

                            arq_eleitores_pr = fopen("arq_eleitores_pr.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_pr.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_pr != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_pr();
                                }while(repetir_titulo == 1);
                            }

                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo RG
                            if(arq_eleitores_pr != NULL){
                                do{
                                    verificar_rg = verificacao_rg_pr();
                                }while(repetir_rg == 1);
                            }

                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_pr != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_pr();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_pr.cpf_eleitor = verificar_cpf;
                            eleitor_pr.rg_eleitor = verificar_rg;
                            eleitor_pr.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_pr);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_pr.endereco_eleitor,100,stdin);

                            arq_eleitores_pr = fopen("arq_eleitores_pr.bin","ab");
                            fwrite(&eleitor_pr, sizeof(struct info_eleitores),1,arq_eleitores_pr);
                            fclose(arq_eleitores_pr);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",pr_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_pr.nome_eleitor);
                            printf("\nRG: %ld",eleitor_pr.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_pr.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_pr.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_pr);
        fclose(arq_secao_pr);
    }

    else if(!(strcmp(cadEleitores,"PE"))){

        FILE *arq_zona_pe;
        FILE *arq_secao_pe;
        FILE *arq_eleitores_pe;
        arq_zona_pe = fopen("arq_zona_pe.bin","rb"); // Abre o arquivo
        arq_secao_pe = fopen("arq_secao_pe.bin","rb");


        if(arq_zona_pe == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_pe == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_pe.num_zona_eleitor);
            while(fread(&pe_zona, sizeof(struct info_zona),1,arq_zona_pe)){
                if(pe_zona.numero_zona == eleitor_pe.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_pe.cod_secao_eleitor);
                    while(fread(&pe_secao, sizeof(struct info_secao),1,arq_secao_pe)){
                        if(pe_secao.cod_local_secao == eleitor_pe.cod_secao_eleitor){

                            arq_eleitores_pe = fopen("arq_eleitores_pe.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_pe.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_pe != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_pe();
                                }while(repetir_titulo == 1);
                            }

                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo RG
                            if(arq_eleitores_pe != NULL){
                                do{
                                    verificar_rg = verificacao_rg_pe();
                                }while(repetir_rg == 1);
                            }

                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_pe != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_pe();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_pe.cpf_eleitor = verificar_cpf;
                            eleitor_pe.rg_eleitor = verificar_rg;
                            eleitor_pe.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_pe);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_pe.endereco_eleitor,100,stdin);

                            arq_eleitores_pe = fopen("arq_eleitores_pe.bin","ab");
                            fwrite(&eleitor_pe, sizeof(struct info_eleitores),1,arq_eleitores_pe);
                            fclose(arq_eleitores_pe);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",pe_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_pe.nome_eleitor);
                            printf("\nRG: %ld",eleitor_pe.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_pe.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_pe.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_pe);
        fclose(arq_secao_pe);
    }

    else if(!(strcmp(cadEleitores,"PI"))){

        FILE *arq_zona_pi;
        FILE *arq_secao_pi;
        FILE *arq_eleitores_pi;
        arq_zona_pi = fopen("arq_zona_pi.bin","rb"); // Abre o arquivo
        arq_secao_pi = fopen("arq_secao_pi.bin","rb");


        if(arq_zona_pi == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_pi == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_pi.num_zona_eleitor);
            while(fread(&pi_zona, sizeof(struct info_zona),1,arq_zona_pi)){
                if(pi_zona.numero_zona == eleitor_pi.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_pi.cod_secao_eleitor);
                    while(fread(&pi_secao, sizeof(struct info_secao),1,arq_secao_pi)){
                        if(pi_secao.cod_local_secao == eleitor_pi.cod_secao_eleitor){

                            arq_eleitores_pi = fopen("arq_eleitores_pi.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_pi.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_pi != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_pi();
                                }while(repetir_titulo == 1);
                            }

                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo RG
                            if(arq_eleitores_pi != NULL){
                                do{
                                    verificar_rg = verificacao_rg_pi();
                                }while(repetir_rg == 1);
                            }

                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_pi != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_pi();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_pi.cpf_eleitor = verificar_cpf;
                            eleitor_pi.rg_eleitor = verificar_rg;
                            eleitor_pi.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_pi);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_pi.endereco_eleitor,100,stdin);

                            arq_eleitores_pi = fopen("arq_eleitores_pi.bin","ab");
                            fwrite(&eleitor_pi, sizeof(struct info_eleitores),1,arq_eleitores_pi);
                            fclose(arq_eleitores_pi);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",pi_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_pi.nome_eleitor);
                            printf("\nRG: %ld",eleitor_pi.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_pi.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_pi.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_pi);
        fclose(arq_secao_pi);
    }

    else if(!(strcmp(cadEleitores,"RJ"))){

        FILE *arq_zona_rj;
        FILE *arq_secao_rj;
        FILE *arq_eleitores_rj;
        arq_zona_rj = fopen("arq_zona_rj.bin","rb"); // Abre o arquivo
        arq_secao_rj = fopen("arq_secao_rj.bin","rb");


        if(arq_zona_rj == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_rj == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_rj.num_zona_eleitor);
            while(fread(&rj_zona, sizeof(struct info_zona),1,arq_zona_rj)){
                if(rj_zona.numero_zona == eleitor_rj.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_rj.cod_secao_eleitor);
                    while(fread(&rj_secao, sizeof(struct info_secao),1,arq_secao_rj)){
                        if(rj_secao.cod_local_secao == eleitor_rj.cod_secao_eleitor){

                            arq_eleitores_rj = fopen("arq_eleitores_rj.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_rj.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_rj != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_rj();
                                }while(repetir_titulo == 1);
                            }

                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo RG
                            if(arq_eleitores_rj != NULL){
                                do{
                                    verificar_rg = verificacao_rg_rj();
                                }while(repetir_rg == 1);
                            }

                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_rj != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_rj();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_rj.cpf_eleitor = verificar_cpf;
                            eleitor_rj.rg_eleitor = verificar_rg;
                            eleitor_rj.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_rj);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_rj.endereco_eleitor,100,stdin);

                            arq_eleitores_rj = fopen("arq_eleitores_rj.bin","ab");
                            fwrite(&eleitor_rj, sizeof(struct info_eleitores),1,arq_eleitores_rj);
                            fclose(arq_eleitores_rj);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",rj_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_rj.nome_eleitor);
                            printf("\nRG: %ld",eleitor_rj.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_rj.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_rj.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_rj);
        fclose(arq_secao_rj);
    }

    else if(!(strcmp(cadEleitores,"RN"))){

        FILE *arq_zona_rn;
        FILE *arq_secao_rn;
        FILE *arq_eleitores_rn;
        arq_zona_rn = fopen("arq_zona_rn.bin","rb"); // Abre o arquivo
        arq_secao_rn = fopen("arq_secao_rn.bin","rb");


        if(arq_zona_rn == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_rn == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_rn.num_zona_eleitor);
            while(fread(&rn_zona, sizeof(struct info_zona),1,arq_zona_rn)){
                if(rn_zona.numero_zona == eleitor_rn.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_rn.cod_secao_eleitor);
                    while(fread(&rn_secao, sizeof(struct info_secao),1,arq_secao_rn)){
                        if(rn_secao.cod_local_secao == eleitor_rn.cod_secao_eleitor){

                            arq_eleitores_rn = fopen("arq_eleitores_rn.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_rn.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_rn != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_rn();
                                }while(repetir_titulo == 1);
                            }

                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo RG
                            if(arq_eleitores_rn != NULL){
                                do{
                                    verificar_rg = verificacao_rg_rn();
                                }while(repetir_rg == 1);
                            }

                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_rn != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_rn();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_rn.cpf_eleitor = verificar_cpf;
                            eleitor_rn.rg_eleitor = verificar_rg;
                            eleitor_rn.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_rn);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_rn.endereco_eleitor,100,stdin);

                            arq_eleitores_rn = fopen("arq_eleitores_rn.bin","ab");
                            fwrite(&eleitor_rn, sizeof(struct info_eleitores),1,arq_eleitores_rn);
                            fclose(arq_eleitores_rn);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",rn_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_rn.nome_eleitor);
                            printf("\nRG: %ld",eleitor_rn.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_rn.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_rn.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_rn);
        fclose(arq_secao_rn);
    }

    else if(!(strcmp(cadEleitores,"RS"))){

        FILE *arq_zona_rs;
        FILE *arq_secao_rs;
        FILE *arq_eleitores_rs;
        arq_zona_rs = fopen("arq_zona_rs.bin","rb"); // Abre o arquivo
        arq_secao_rs = fopen("arq_secao_rs.bin","rb");


        if(arq_zona_rs == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_rs == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_rs.num_zona_eleitor);
            while(fread(&rs_zona, sizeof(struct info_zona),1,arq_zona_rs)){
                if(rs_zona.numero_zona == eleitor_rs.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_rs.cod_secao_eleitor);
                    while(fread(&rs_secao, sizeof(struct info_secao),1,arq_secao_rs)){
                        if(rs_secao.cod_local_secao == eleitor_rs.cod_secao_eleitor){

                            arq_eleitores_rs = fopen("arq_eleitores_rs.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_rs.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_rs != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_rs();
                                }while(repetir_titulo == 1);
                            }


                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo RG
                            if(arq_eleitores_rs != NULL){
                                do{
                                    verificar_rg = verificacao_rg_rs();
                                }while(repetir_rg == 1);
                            }

                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_rs != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_rs();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_rs.cpf_eleitor = verificar_cpf;
                            eleitor_rs.rg_eleitor = verificar_rg;
                            eleitor_rs.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_rs);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_rs.endereco_eleitor,100,stdin);

                            arq_eleitores_rs = fopen("arq_eleitores_rs.bin","ab");
                            fwrite(&eleitor_rs, sizeof(struct info_eleitores),1,arq_eleitores_rs);
                            fclose(arq_eleitores_rs);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",rs_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_rs.nome_eleitor);
                            printf("\nRG: %ld",eleitor_rs.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_rs.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_rs.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_rs);
        fclose(arq_secao_rs);
    }

    else if(!(strcmp(cadEleitores,"RO"))){

        FILE *arq_zona_ro;
        FILE *arq_secao_ro;
        FILE *arq_eleitores_ro;
        arq_zona_ro = fopen("arq_zona_ro.bin","rb"); // Abre o arquivo
        arq_secao_ro = fopen("arq_secao_ro.bin","rb");


        if(arq_zona_ro == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_ro == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_ro.num_zona_eleitor);
            while(fread(&ro_zona, sizeof(struct info_zona),1,arq_zona_ro)){
                if(ro_zona.numero_zona == eleitor_ro.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_ro.cod_secao_eleitor);
                    while(fread(&ro_secao, sizeof(struct info_secao),1,arq_secao_ro)){
                        if(ro_secao.cod_local_secao == eleitor_ro.cod_secao_eleitor){

                            arq_eleitores_ro = fopen("arq_eleitores_ro.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_ro.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_ro != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_ro();
                                }while(repetir_titulo == 1);
                            }

                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo RG
                            if(arq_eleitores_ro != NULL){
                                do{
                                    verificar_rg = verificacao_rg_ro();
                                }while(repetir_rg == 1);
                            }

                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_ro != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_ro();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_ro.cpf_eleitor = verificar_cpf;
                            eleitor_ro.rg_eleitor = verificar_rg;
                            eleitor_ro.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_ro);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_ro.endereco_eleitor,100,stdin);

                            arq_eleitores_ro = fopen("arq_eleitores_ro.bin","ab");
                            fwrite(&eleitor_ro, sizeof(struct info_eleitores),1,arq_eleitores_ro);
                            fclose(arq_eleitores_ro);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",ro_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_ro.nome_eleitor);
                            printf("\nRG: %ld",eleitor_ro.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_ro.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_ro.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_ro);
        fclose(arq_secao_ro);
    }

    else if(!(strcmp(cadEleitores,"RR"))){

        FILE *arq_zona_rr;
        FILE *arq_secao_rr;
        FILE *arq_eleitores_rr;
        arq_zona_rr = fopen("arq_zona_rr.bin","rb"); // Abre o arquivo
        arq_secao_rr = fopen("arq_secao_rr.bin","rb");


        if(arq_zona_rr == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_rr == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_rr.num_zona_eleitor);
            while(fread(&rr_zona, sizeof(struct info_zona),1,arq_zona_rr)){
                if(rr_zona.numero_zona == eleitor_rr.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_rr.cod_secao_eleitor);
                    while(fread(&rr_secao, sizeof(struct info_secao),1,arq_secao_rr)){
                        if(rr_secao.cod_local_secao == eleitor_rr.cod_secao_eleitor){

                            arq_eleitores_rr = fopen("arq_eleitores_rr.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_rr.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_rr != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_rr();
                                }while(repetir_titulo == 1);
                            }

                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo RG
                            if(arq_eleitores_rr != NULL){
                                do{
                                    verificar_rg = verificacao_rg_rr();
                                }while(repetir_rg == 1);
                            }

                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_rr != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_rr();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_rr.cpf_eleitor = verificar_cpf;
                            eleitor_rr.rg_eleitor = verificar_rg;
                            eleitor_rr.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_rr);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_rr.endereco_eleitor,100,stdin);

                            arq_eleitores_rr = fopen("arq_eleitores_rr.bin","ab");
                            fwrite(&eleitor_rr, sizeof(struct info_eleitores),1,arq_eleitores_rr);
                            fclose(arq_eleitores_rr);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",rr_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_rr.nome_eleitor);
                            printf("\nRG: %ld",eleitor_rr.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_rr.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_rr.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_rr);
        fclose(arq_secao_rr);
    }

    else if(!(strcmp(cadEleitores,"SC"))){

        FILE *arq_zona_sc;
        FILE *arq_secao_sc;
        FILE *arq_eleitores_sc;
        arq_zona_sc = fopen("arq_zona_sc.bin","rb"); // Abre o arquivo
        arq_secao_sc = fopen("arq_secao_sc.bin","rb");


        if(arq_zona_sc == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_sc == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_sc.num_zona_eleitor);
            while(fread(&sc_zona, sizeof(struct info_zona),1,arq_zona_sc)){
                if(sc_zona.numero_zona == eleitor_sc.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_sc.cod_secao_eleitor);
                    while(fread(&sc_secao, sizeof(struct info_secao),1,arq_secao_sc)){
                        if(sc_secao.cod_local_secao == eleitor_sc.cod_secao_eleitor){

                            arq_eleitores_sc = fopen("arq_eleitores_sc.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_sc.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_sc != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_sc();
                                }while(repetir_titulo == 1);
                            }

                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo RG
                            if(arq_eleitores_sc != NULL){
                                do{
                                    verificar_rg = verificacao_rg_sc();
                                }while(repetir_rg == 1);
                            }

                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_sc != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_sc();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_sc.cpf_eleitor = verificar_cpf;
                            eleitor_sc.rg_eleitor = verificar_rg;
                            eleitor_sc.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_sc);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_sc.endereco_eleitor,100,stdin);

                            arq_eleitores_sc = fopen("arq_eleitores_sc.bin","ab");
                            fwrite(&eleitor_sc, sizeof(struct info_eleitores),1,arq_eleitores_sc);
                            fclose(arq_eleitores_sc);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",sc_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_sc.nome_eleitor);
                            printf("\nRG: %ld",eleitor_sc.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_sc.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_sc.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_sc);
        fclose(arq_secao_sc);
    }

    else if(!(strcmp(cadEleitores,"SP"))){

        FILE *arq_zona_sp;
        FILE *arq_secao_sp;
        FILE *arq_eleitores_sp;
        arq_zona_sp = fopen("arq_zona_sp.bin","rb"); // Abre o arquivo
        arq_secao_sp = fopen("arq_secao_sp.bin","rb");


        if(arq_zona_sp == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_sp == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_sp.num_zona_eleitor);
            while(fread(&sp_zona, sizeof(struct info_zona),1,arq_zona_sp)){
                if(sp_zona.numero_zona == eleitor_sp.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_sp.cod_secao_eleitor);
                    while(fread(&sp_secao, sizeof(struct info_secao),1,arq_secao_sp)){
                        if(sp_secao.cod_local_secao == eleitor_sp.cod_secao_eleitor){

                            arq_eleitores_sp = fopen("arq_eleitores_sp.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_sp.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_sp != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_sp();
                                }while(repetir_titulo == 1);
                            }

                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo RG
                            if(arq_eleitores_sp != NULL){
                                do{
                                    verificar_rg = verificacao_rg_sp();
                                }while(repetir_rg == 1);
                            }

                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_sp != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_sp();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_sp.cpf_eleitor = verificar_cpf;
                            eleitor_sp.rg_eleitor = verificar_rg;
                            eleitor_sp.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_sp);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_sp.endereco_eleitor,100,stdin);

                            arq_eleitores_sp = fopen("arq_eleitores_sp.bin","ab");
                            fwrite(&eleitor_sp, sizeof(struct info_eleitores),1,arq_eleitores_sp);
                            fclose(arq_eleitores_sp);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",sp_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_sp.nome_eleitor);
                            printf("\nRG: %ld",eleitor_sp.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_sp.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_sp.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_sp);
        fclose(arq_secao_sp);
    }

    else if(!(strcmp(cadEleitores,"SE"))){

        FILE *arq_zona_se;
        FILE *arq_secao_se;
        FILE *arq_eleitores_se;
        arq_zona_se = fopen("arq_zona_se.bin","rb"); // Abre o arquivo
        arq_secao_se = fopen("arq_secao_se.bin","rb");


        if(arq_zona_se == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_se == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_se.num_zona_eleitor);
            while(fread(&se_zona, sizeof(struct info_zona),1,arq_zona_se)){
                if(se_zona.numero_zona == eleitor_se.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_se.cod_secao_eleitor);
                    while(fread(&se_secao, sizeof(struct info_secao),1,arq_secao_se)){
                        if(se_secao.cod_local_secao == eleitor_se.cod_secao_eleitor){

                            arq_eleitores_se = fopen("arq_eleitores_se.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_se.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_se != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_se();
                                }while(repetir_titulo == 1);
                            }

                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo RG
                            if(arq_eleitores_se != NULL){
                                do{
                                    verificar_rg = verificacao_rg_se();
                                }while(repetir_rg == 1);
                            }

                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_se != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_se();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_se.cpf_eleitor = verificar_cpf;
                            eleitor_se.rg_eleitor = verificar_rg;
                            eleitor_se.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_se);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_se.endereco_eleitor,100,stdin);

                            arq_eleitores_se = fopen("arq_eleitores_se.bin","ab");
                            fwrite(&eleitor_se, sizeof(struct info_eleitores),1,arq_eleitores_se);
                            fclose(arq_eleitores_se);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",se_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_se.nome_eleitor);
                            printf("\nRG: %ld",eleitor_se.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_se.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_se.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_se);
        fclose(arq_secao_se);
    }

    else if(!(strcmp(cadEleitores,"TO"))){

        FILE *arq_zona_to;
        FILE *arq_secao_to;
        FILE *arq_eleitores_to;
        arq_zona_to = fopen("arq_zona_to.bin","rb"); // Abre o arquivo
        arq_secao_to = fopen("arq_secao_to.bin","rb");


        if(arq_zona_to == NULL){
            parar = 1;
            printf("\nNao existem cadastros de zonas eleitorais no Estado (%s).",cadEleitores);
        }
        else if(arq_secao_to == NULL){
            parar = 1;
            printf("\nNao existem cadastros de secoes eleitorais no Estado (%s).",cadEleitores);
        }
        else{
            printf("\nNUMERO DA ZONA ELEITORAL: ");
            scanf("%d",&eleitor_to.num_zona_eleitor);
            while(fread(&to_zona, sizeof(struct info_zona),1,arq_zona_to)){
                if(to_zona.numero_zona == eleitor_to.num_zona_eleitor){
                    printf("\nCODIGO DO LOCAL DA SECAO: ");
                    scanf("%d",&eleitor_to.cod_secao_eleitor);
                    while(fread(&to_secao, sizeof(struct info_secao),1,arq_secao_to)){
                        if(to_secao.cod_local_secao == eleitor_to.cod_secao_eleitor){

                            arq_eleitores_to = fopen("arq_eleitores_to.bin","rb");

                            verificar = 1;

                            getchar();
                            printf("\nNOME COMPLETO DO ELEITOR: ");
                            fgets(eleitor_to.nome_eleitor,100,stdin);

                            printf("\nTITULO DE ELEITOR(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_titulo);

                            // Verificar se existe um mesmo TITULO
                            if(arq_eleitores_to != NULL){
                                do{
                                    verificar_titulo = verificacao_titulo_to();
                                }while(repetir_titulo == 1);
                            }

                            printf("\nRG(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_rg);

                            // Verificar se existe um mesmo RG
                            if(arq_eleitores_to != NULL){
                                do{
                                    verificar_rg = verificacao_rg_to();
                                }while(repetir_rg == 1);
                            }

                            printf("\nCPF(SOMENTE NUMEROS): ");
                            scanf("%ld",&verificar_cpf);


                            // Verificar se existe um mesmo CPF
                            if(arq_eleitores_to != NULL){
                                do{
                                    verificar_cpf = verificacao_cpf_to();
                                }while(repetir_cpf == 1);
                            }

                            eleitor_to.cpf_eleitor = verificar_cpf;
                            eleitor_to.rg_eleitor = verificar_rg;
                            eleitor_to.titulo_eleitor = verificar_titulo;
                            fclose(arq_eleitores_to);

                            getchar();

                            printf("\nENDERECO: ");
                            fgets(eleitor_to.endereco_eleitor,100,stdin);

                            arq_eleitores_to = fopen("arq_eleitores_to.bin","ab");
                            fwrite(&eleitor_to, sizeof(struct info_eleitores),1,arq_eleitores_to);
                            fclose(arq_eleitores_to);

                            verificar_cpf = 0;

                            linha();
                            printf("\nINFORMACOES SALVAS COM SUCESSO!");
                            linha();
                            printf("\nMUNICIPIO DO ELEITOR: %s",to_zona.municipio_zona);
                            printf("\nNOME COMPLETO DO ELEITOR: %s",eleitor_to.nome_eleitor);
                            printf("\nRG: %ld",eleitor_to.rg_eleitor);
                            printf("\nCPF: %ld",eleitor_to.cpf_eleitor);
                            printf("\nENDERECO: %s",eleitor_to.endereco_eleitor);
                            linha();

                            break;
                        }
                    }

                }

            }

        }

        if(verificar == 0 && parar == 0){
            linha();
            printf("\nNENHUMA ZONA OU SECAO ELEITORAL ENCONTRADA");
            linha();
        }
        parar = 0;
        verificar = 0;

        fclose(arq_zona_to);
        fclose(arq_secao_to);
    }



    else{
        printf("\n########## OPCAO INVALIDA ##########");
    }
}